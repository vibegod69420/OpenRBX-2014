#!/usr/bin/env python3
"""
DeepAI `deepai_code` backend for the OpenRBX-2014 decompilation harness.

DeepAI exposes an OpenAI-compatible surface at

    https://api.deepai.org/deepai_code/chat/completions
    https://api.deepai.org/deepai_code/models

with three differences from a stock OpenAI endpoint that this module handles:

* authentication is the `Api-Key` header (the OpenAI `Authorization: Bearer`
  form is not accepted), plus the `X-DeepAI-Code-Theos` /
  `X-DeepAI-Code-Instance` client headers;
* there is no `/v1` path segment, so the base URL is used verbatim;
* reasoning is streamed as `delta.reasoning` (and `delta.reasoning_details`),
  not as `delta.reasoning_content`.

The harness talks to `deepseek-v4.1-flash`, which serves a 320K-token context
window and 131,072 output tokens, and honours `reasoning_effort: "max"` — the
highest thinking level the catalog advertises for it.

Environment
-----------
DEEPAI_API_KEY            API key (alternatively set it in an env file, below)
DEEPAI_ENV_FILE           extra env file to read the key from
DEEPAI_MODEL              default `deepseek-v4.1-flash`
DEEPAI_BASE_URL           default `https://api.deepai.org/deepai_code`
DEEPAI_REASONING_EFFORT   off | low | medium | high | max (default `max`)
DEEPAI_TIMEOUT            per-request wall clock seconds, default 1800
DEEPAI_MAX_ATTEMPTS       transient-failure retries, default 4
DEEPAI_THEOS              `X-DeepAI-Code-Theos` value, default 7
DEEPAI_INSTANCE           `X-DeepAI-Code-Instance` value
"""

from __future__ import annotations

import json
import os
import re
import threading
import time
import urllib.error
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# The harness passes this sentinel instead of an HTTP URL to mean "use this module".
SENTINEL = "deepai://http"

DEFAULT_BASE_URL = "https://api.deepai.org/deepai_code"
DEFAULT_MODEL = "deepseek-v4.1-flash"
DEFAULT_INSTANCE = "6f1c0d9a4b7e2f83a5c61d0e9b47f2ac"

BASE_URL = os.environ.get("DEEPAI_BASE_URL", DEFAULT_BASE_URL).rstrip("/")
MODEL = os.environ.get("DEEPAI_MODEL", os.environ.get("DECOMP_MODEL", DEFAULT_MODEL))
REASONING_EFFORT = os.environ.get("DEEPAI_REASONING_EFFORT", "max")
TIMEOUT = int(os.environ.get("DEEPAI_TIMEOUT", "1800"))
MAX_ATTEMPTS = int(os.environ.get("DEEPAI_MAX_ATTEMPTS", "4"))
THEOS = os.environ.get("DEEPAI_THEOS", "7")
INSTANCE = os.environ.get("DEEPAI_INSTANCE", DEFAULT_INSTANCE)
ENV_FILE = os.environ.get("DEEPAI_ENV_FILE", "")

USAGE_LEDGER = ROOT / "data" / "llm_usage.jsonl"

# The gateway answers these when the account has no allowance left. Transient
# 429s ("rate limit") are retried instead, so they are deliberately absent.
QUOTA_MARKERS = (
    "insufficient",
    "quota",
    "credit balance",
    "out of theos",
    "no theos",
    "free usage limit",
    "usage limit reached",
    "payment required",
)

_ANSI = re.compile(r"\x1b\[[0-9;?]*[ -/]*[@-~]")


class QuotaExhausted(RuntimeError):
    """The account is refusing further requests; retrying will not help."""


class BackendUnavailable(RuntimeError):
    """The endpoint is misconfigured, unreachable, or refusing this model."""


def _env_candidates() -> list[Path]:
    candidates = []
    if ENV_FILE:
        candidates.append(Path(ENV_FILE))
    candidates += [Path("/etc/openrbx/deepai.env"), ROOT / ".deepai.env"]
    return candidates


def _read_env_file(path: Path) -> dict[str, str]:
    values: dict[str, str] = {}
    try:
        for line in path.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line or line.startswith("#") or "=" not in line:
                continue
            name, _, value = line.partition("=")
            values[name.strip()] = value.strip().strip('"').strip("'")
    except OSError:
        pass
    return values


KEYS_FILE = os.environ.get("DEEPAI_KEYS_FILE", "/opt/openrbx/deepai_keys.txt")
_KEY_LOCK = threading.Lock()
_KEY_CURSOR = 0
_KEY_COOLDOWN: dict[str, float] = {}
_KEY_CACHE: tuple[float, list[str]] = (0.0, [])


def _pool_file_keys() -> list[str]:
    """Extra keys from a root-only text file, one per line. Re-read when it changes."""
    global _KEY_CACHE
    try:
        mtime = Path(KEYS_FILE).stat().st_mtime
    except OSError:
        return []
    if _KEY_CACHE[0] != mtime:
        found = []
        try:
            for line in Path(KEYS_FILE).read_text(encoding="utf-8", errors="ignore").splitlines():
                line = line.strip()
                if line and not line.startswith("#"):
                    found.append(line)
        except OSError:
            return []
        _KEY_CACHE = (mtime, found)
    return _KEY_CACHE[1]


def all_keys() -> list[str]:
    keys: list[str] = []
    env = os.environ.get("DEEPAI_API_KEY", "").strip()
    if env:
        keys.append(env)
    for path in _env_candidates():
        value = _read_env_file(path).get("DEEPAI_API_KEY")
        if value:
            keys.append(value)
    keys.extend(_pool_file_keys())
    seen: set[str] = set()
    out: list[str] = []
    for key in keys:
        if key not in seen:
            seen.add(key)
            out.append(key)
    return out


def api_key() -> str:
    """Round-robins the key pool so concurrent subagents spend separate rate limits."""
    global _KEY_CURSOR
    keys = all_keys()
    if not keys:
        raise BackendUnavailable(
            "DEEPAI_API_KEY is not set. Export it, or write DEEPAI_API_KEY=... to "
            "/etc/openrbx/deepai.env (the systemd unit reads that file)."
        )
    now = time.time()
    with _KEY_LOCK:
        for _ in range(len(keys)):
            key = keys[_KEY_CURSOR % len(keys)]
            _KEY_CURSOR += 1
            if _KEY_COOLDOWN.get(key, 0.0) <= now:
                return key
    return min(keys, key=lambda k: _KEY_COOLDOWN.get(k, 0.0))


def retire_key(key: str, seconds: int = 3600) -> bool:
    """Cools one key down. Returns False when it is the only key, so the caller can park."""
    if len(all_keys()) <= 1:
        return False
    _KEY_COOLDOWN[key] = time.time() + seconds
    return True


def _headers(key: str | None = None) -> dict[str, str]:
    return {
        "Content-Type": "application/json",
        "Accept": "text/event-stream",
        "Api-Key": key or api_key(),
        "X-DeepAI-Code-Theos": THEOS,
        "X-DeepAI-Code-Instance": INSTANCE,
        "User-Agent": "OpenRBX-Harness/4.0",
    }


def _clean(text: str) -> str:
    return _ANSI.sub("", text or "").strip()


def _request(path: str, payload: dict | None = None, timeout: int | None = None, key: str | None = None):
    url = BASE_URL + path
    body = json.dumps(payload).encode("utf-8") if payload is not None else None

    req = urllib.request.Request(
        url, data=body, headers=_headers(key), method="POST" if body else "GET"
    )
    return urllib.request.urlopen(req, timeout=timeout or TIMEOUT)


def models() -> list[dict]:
    try:
        with _request("/models", timeout=60) as resp:
            data = json.loads(resp.read().decode("utf-8", "ignore"))
    except urllib.error.HTTPError as exc:
        detail = _clean(exc.read().decode("utf-8", "ignore"))[:300]
        raise BackendUnavailable(f"GET /models -> HTTP {exc.code}: {detail}")
    except Exception as exc:
        raise BackendUnavailable(f"GET /models failed: {exc}")
    return data.get("models") or []


def preflight() -> dict:
    """Request-free readiness report. Raises BackendUnavailable with the reason."""
    key = api_key()
    catalog = models()
    match = next((m for m in catalog if m.get("id") == MODEL), None)
    if not match:
        ids = ", ".join(sorted(m.get("id", "?") for m in catalog))[:600]
        raise BackendUnavailable(f"{MODEL} is not offered by this gateway. Available: {ids}")
    return {
        "base_url": BASE_URL,
        "model": MODEL,
        "name": match.get("name", MODEL),
        "reasoning_effort": REASONING_EFFORT,
        "context_window": match.get("contextWindow"),
        "max_tokens": match.get("maxTokens"),
        "theos_per_request": match.get("theosPerRequest"),
        "key_suffix": key[-4:],
        "catalog_size": len(catalog),
    }


def _record_usage(entry: dict) -> None:
    try:
        USAGE_LEDGER.parent.mkdir(parents=True, exist_ok=True)
        with open(USAGE_LEDGER, "a", encoding="utf-8") as fh:
            fh.write(json.dumps(entry, separators=(",", ":")) + "\n")
    except OSError:
        pass


def _is_quota(status: int, body: str) -> bool:
    lowered = body.lower()
    if status == 402:
        return True
    return any(marker in lowered for marker in QUOTA_MARKERS)


def ask(
    system_prompt: str,
    user_prompt: str,
    max_tokens: int = 65536,
    effort: str | None = None,
    temperature: float = 0.0,
) -> str:
    """
    One completion. Streams the reply so a long thinking chain cannot trip an
    idle-read timeout, merges `reasoning` + `content`, and returns only the
    content (falling back to the reasoning text when the model emitted no final
    answer).

    `max_tokens` is the completion budget, which includes the thinking tokens.
    """
    effort = effort or REASONING_EFFORT
    payload = {
        "model": MODEL,
        "messages": [
            {"role": "system", "content": system_prompt},
            {"role": "user", "content": user_prompt},
        ],
        "max_tokens": max_tokens,
        "temperature": temperature,
        "stream": True,
        "stream_options": {"include_usage": True},
    }
    if effort and effort != "off":
        payload["reasoning_effort"] = effort

    last_error = ""
    for attempt in range(1, MAX_ATTEMPTS + 1):
        started = time.time()
        content_parts: list[str] = []
        reasoning_parts: list[str] = []
        usage: dict = {}
        key = api_key()
        try:
            with _request("/chat/completions", payload, key=key) as resp:
                for raw_line in resp:
                    line = raw_line.decode("utf-8", "ignore").strip()
                    if not line.startswith("data:"):
                        continue
                    data_str = line[len("data:"):].strip()
                    if data_str == "[DONE]":
                        break
                    try:
                        chunk = json.loads(data_str)
                    except json.JSONDecodeError:
                        continue
                    if chunk.get("usage"):
                        usage = chunk["usage"]
                    for choice in chunk.get("choices") or []:
                        delta = choice.get("delta") or {}
                        if delta.get("content"):
                            content_parts.append(delta["content"])
                        piece = delta.get("reasoning") or delta.get("reasoning_content")
                        if piece:
                            reasoning_parts.append(str(piece))
        except urllib.error.HTTPError as exc:
            body = _clean(exc.read().decode("utf-8", "ignore"))[:1200]
            if _is_quota(exc.code, body):
                # One key hitting its allowance must not stop the pool: bench it and retry
                # the same request on the next key.
                if retire_key(key):
                    last_error = f"key benched: {body[:200]}"
                    continue
                raise QuotaExhausted(f"HTTP {exc.code} from DeepAI: {body[:400]}")
            last_error = f"HTTP {exc.code}: {body[:400]}"
            if exc.code in (401, 403) and retire_key(key):
                last_error = f"key rejected (HTTP {exc.code}); benched"
                continue
            if exc.code in (400, 401, 403, 404):
                raise BackendUnavailable(last_error)
        except Exception as exc:
            last_error = f"{type(exc).__name__}: {exc}"

        content = "".join(content_parts).strip()
        reasoning = "".join(reasoning_parts).strip()
        if content:
            details = (usage or {}).get("completion_tokens_details") or {}
            _record_usage({
                "ts": time.strftime("%Y-%m-%dT%H:%M:%S"),
                "model": MODEL,
                "effort": effort,
                "ok": True,
                "latency_s": round(time.time() - started, 1),
                "attempt": attempt,
                "prompt_tokens": (usage or {}).get("prompt_tokens"),
                "completion_tokens": (usage or {}).get("completion_tokens"),
                "reasoning_tokens": details.get("reasoning_tokens"),
                "content_chars": len(content),
                "key_suffix": key[-4:],
            })
            return content

        if reasoning and "```" in reasoning:
            # Some runs put the whole answer, fence and all, inside the thinking stream.
            _record_usage({
                "ts": time.strftime("%Y-%m-%dT%H:%M:%S"),
                "model": MODEL,
                "effort": effort,
                "ok": True,
                "latency_s": round(time.time() - started, 1),
                "attempt": attempt,
                                    "note": "answer recovered from reasoning stream",
                    "key_suffix": key[-4:],
                })
            return reasoning

        last_error = last_error or "empty reply"
        if attempt < MAX_ATTEMPTS:
            time.sleep(min(30, 2 ** attempt))

    raise BackendUnavailable(f"DeepAI request failed after {MAX_ATTEMPTS} attempts: {last_error}")


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
        i = sys.argv.index("--ask")
        prompt = sys.argv[i + 1] if len(sys.argv) > i + 1 else "ping"
        try:
            print(ask("You are a terse test responder.", prompt, max_tokens=2048))
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
