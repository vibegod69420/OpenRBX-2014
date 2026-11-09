#!/usr/bin/env python3
"""
Free-tier OpenCode CLI generation backend for the OpenRBX-2014 decompilation harness.

Why this is a subprocess and not an HTTP call
---------------------------------------------
OpenCode's free models (every `*-free` id, plus `big-pickle`) are gated to the OpenCode
client. Any other OpenAI-compatible client sent to the same gateway is answered with

    HTTP 403 {"type":"error","error":{"type":"FreeTierError",
              "message":"OpenCode's free tier can only be used from within OpenCode."}}

so the harness cannot reuse `call_llm_chat`'s HTTP path for this backend. It invokes the
real `opencode run` binary, which carries the client identity the gateway expects, and
reads the reply back from stdout.

Target model: `opencode/deepseek-v4.1-flash-free#max`
  * provider `opencode`  -> the free catalog (no credit, no account)
  * model    `deepseek-v4.1-flash-free`
  * `#max`   -> the highest reasoning-effort variant (low / high / max)

Logged out on purpose: no OpenCode Console credential is stored, and `OPENCODE_API_KEY`
is refused if present. Either one silently switches the run onto the paid path, where the
free model id is unavailable — so this module fails loudly instead of quietly spending.

Environment
-----------
DECOMP_OPENCODE_MODEL           model id, default `opencode/deepseek-v4.1-flash-free#max`
DECOMP_OPENCODE_TIMEOUT         per-request wall clock seconds, default 1800
DECOMP_OPENCODE_STANDALONE      `1` (default) runs a private server per request
DECOMP_OPENCODE_REQUIRE_LOGGED_OUT  `1` (default) refuses a stored console credential
DECOMP_OPENCODE_AGENT           optional `--agent` name
OPENCODE_BIN                    explicit path to the binary
"""

import json
import os
import re
import shutil
import subprocess
import time
from pathlib import Path

MODEL = os.environ.get("DECOMP_OPENCODE_MODEL", "opencode/deepseek-v4.1-flash-free#max")
TIMEOUT = int(os.environ.get("DECOMP_OPENCODE_TIMEOUT", "1800"))
STANDALONE = os.environ.get("DECOMP_OPENCODE_STANDALONE", "1").lower() not in ("0", "false", "no")
REQUIRE_LOGGED_OUT = os.environ.get("DECOMP_OPENCODE_REQUIRE_LOGGED_OUT", "1").lower() not in ("0", "false", "no")
AGENT = os.environ.get("DECOMP_OPENCODE_AGENT", "").strip()

# Linux caps a single argv entry at 128 KiB (MAX_ARG_STRLEN). Leave headroom.
MAX_MESSAGE_CHARS = 120_000

# Phrases the gateway returns when the free allowance is spent. Matched against stderr, and
# against stdout only when the run also failed, so a model reply that merely mentions a
# number cannot trigger a pointless instance rotation.
QUOTA_MARKERS = (
    "freeusageerror",
    "free usage limit",
    "freeusagelimiterror",
    "usage limit reached",
    "quota exceeded",
    "insufficient quota",
)

# The client gate firing means the request did not arrive as the OpenCode client at all.
CLIENT_GATE_MARKER = "free tier can only be used from within opencode"

_ANSI = re.compile(r"\x1b\[[0-9;?]*[ -/]*[@-~]")


class QuotaExhausted(RuntimeError):
    """The free gateway is refusing further requests. Caller should rotate the instance."""


class BackendUnavailable(RuntimeError):
    """opencode is missing, misconfigured, or gated. Never a quota condition."""


def binary() -> str:
    candidates = [
        os.environ.get("OPENCODE_BIN", ""),
        shutil.which("opencode") or "",
        str(Path.home() / ".opencode" / "bin" / "opencode"),
        "/usr/local/bin/opencode",
        "/usr/bin/opencode",
    ]
    for cand in candidates:
        if not cand:
            continue
        path = Path(cand)
        if path.is_file() and os.access(path, os.X_OK):
            return str(path)
    raise BackendUnavailable(
        "opencode CLI not found (looked on PATH, ~/.opencode/bin, /usr/local/bin). "
        "Install it with: curl -fsSL https://opencode.ai/install | bash"
    )


def _run(args: list[str], timeout: int) -> subprocess.CompletedProcess:
    env = os.environ.copy()
    env.setdefault("NO_COLOR", "1")
    env.setdefault("CI", "1")
    env.setdefault("TERM", "dumb")
    return subprocess.run(args, capture_output=True, text=True, timeout=timeout, env=env)


def version() -> str:
    res = _run([binary(), "--version"], timeout=120)
    return (res.stdout or res.stderr or "").strip().splitlines()[0] if (res.stdout or res.stderr) else "unknown"


def available_models() -> list[str]:
    res = _run([binary(), "models"], timeout=180)
    if res.returncode != 0:
        raise BackendUnavailable(
            f"`opencode models` failed rc={res.returncode}: {(res.stderr or res.stdout).strip()[:300]}"
        )
    return [line.strip() for line in res.stdout.splitlines() if line.strip()]


def _bare_model_id(model: str) -> str:
    return model.split("#", 1)[0]


def ensure_logged_out() -> None:
    """
    Enforces the logged-out free path. A stored Console credential or OPENCODE_API_KEY moves
    the same model id onto the paid catalog, where it either costs money or is unavailable.
    """
    if os.environ.get("OPENCODE_API_KEY"):
        raise BackendUnavailable(
            "OPENCODE_API_KEY is set, which switches OpenCode onto its paid catalog and hides "
            "the free models. Unset it (and remove it from any env file) to use the free tier."
        )
    res = _run([binary(), "auth", "list"], timeout=120)
    lines = (res.stdout or "").splitlines()
    has_console = any(re.match(r"\s*opencode\b", line, re.IGNORECASE) for line in lines)
    if has_console and REQUIRE_LOGGED_OUT:
        raise BackendUnavailable(
            "An OpenCode Console credential is stored, so this is not a logged-out run. "
            "Clear it with: opencode auth logout opencode"
        )


def preflight() -> dict:
    """Cheap, request-free readiness check. Returns a report or raises BackendUnavailable."""
    report = {"binary": binary(), "version": version(), "model": MODEL}
    ensure_logged_out()
    models = available_models()
    target = _bare_model_id(MODEL)
    report["model_listed"] = target in models
    report["free_models"] = [m for m in models if m.endswith("-free") or m.endswith("big-pickle")]
    if not report["model_listed"]:
        raise BackendUnavailable(
            f"{target} is not in the catalog. Free models present: {report['free_models'] or 'none'}. "
            "If the catalog is empty, the provider is unavailable for this build/network."
        )
    if "#" in MODEL:
        report["variant"] = MODEL.split("#", 1)[1]
    return report


def _clean(text: str) -> str:
    return _ANSI.sub("", text).strip()


def ask(system_prompt: str, user_prompt: str, max_tokens: int | None = None) -> str:
    """
    One completion from the free model. `max_tokens` is the harness's reasoning budget; the
    CLI does not expose a per-run output cap, so it is ignored here (the free model's own
    metadata caps the reply) and only logged by the caller.
    """
    message = f"{system_prompt}\n\n---\n\n{user_prompt}"
    if len(message) > MAX_MESSAGE_CHARS:
        raise BackendUnavailable(
            f"prompt is {len(message)} chars, over the {MAX_MESSAGE_CHARS} single-argument "
            "limit; shrink the context card before retrying"
        )

    args = [binary(), "run"]
    if STANDALONE:
        args.append("--standalone")
    args += ["-m", MODEL, "--archived", "--title", f"openrbx-decompile-{int(time.time())}"]
    if AGENT:
        args += ["--agent", AGENT]
    args.append(message)

    try:
        res = _run(args, TIMEOUT)
    except subprocess.TimeoutExpired:
        raise BackendUnavailable(f"opencode run exceeded {TIMEOUT}s")

    out = _clean(res.stdout or "")
    err = _clean(res.stderr or "")
    haystack_err = err.lower()
    haystack_out = out.lower()

    if CLIENT_GATE_MARKER in haystack_err or CLIENT_GATE_MARKER in haystack_out:
        raise BackendUnavailable(
            "gateway answered 'free tier can only be used from within OpenCode', so the request "
            "did not carry the client identity (usually a stale or wrapped binary)"
        )

    quota = any(marker in haystack_err for marker in QUOTA_MARKERS)
    if not quota and res.returncode != 0:
        quota = any(marker in haystack_out for marker in QUOTA_MARKERS)
    if quota:
        raise QuotaExhausted(f"free-tier allowance refused the request: {(err or out)[:400]}")

    if res.returncode != 0:
        raise BackendUnavailable(
            f"opencode run rc={res.returncode}: {(err or out or '<no output>')[:400]}"
        )
    if not out:
        raise BackendUnavailable(f"opencode produced an empty reply (stderr: {err[:200]})")
    return out


def _main() -> int:
    import sys

    if "--preflight" in sys.argv:
        try:
            report = preflight()
        except BackendUnavailable as exc:
            print(f"FAIL: {exc}")
            return 1
        print(json.dumps(report, indent=2))
        return 0

    if "--ask" in sys.argv:
        prompt = sys.argv[sys.argv.index("--ask") + 1] if len(sys.argv) > sys.argv.index("--ask") + 1 else "ping"
        try:
            print(ask("You are a terse test responder.", prompt))
        except QuotaExhausted as exc:
            print(f"QUOTA: {exc}")
            return 3
        except BackendUnavailable as exc:
            print(f"FAIL: {exc}")
            return 1
        return 0

    print(__doc__)
    return 2


if __name__ == "__main__":
    raise SystemExit(_main())
