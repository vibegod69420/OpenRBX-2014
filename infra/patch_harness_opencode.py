#!/usr/bin/env python3
"""
Adds the `opencode` generation backend to autonomous_harness.py.

Idempotent and anchor-checked: every patch must match exactly once, patches already applied
are skipped, and a missing anchor aborts instead of silently writing a half-patched file.
Handles both LF and CRLF copies, because the checkout on the instance and the copy on the
Windows workstation do not agree.

Usage:
    python infra/patch_harness_opencode.py [path/to/autonomous_harness.py]
"""

import re
import sys
from pathlib import Path

DEFAULT = Path(__file__).resolve().parent.parent / "OpenRBX-2014" / "tools" / "autonomous_harness.py"

OPENCODE_IMPORT = "import opencode_backend  # noqa: E402\n"

SENTINEL = 'OPENCODE_SENTINEL = "opencode://cli"\n'

CALL_GUARD = (
    '    if base_url.startswith(OPENCODE_SENTINEL):\n'
    '        return opencode_backend.ask(system_prompt, user_prompt, max_tokens=max_tokens)\n'
)

QUOTA_RERAISE = (
    "        except opencode_backend.QuotaExhausted:\n"
    "            raise\n"
)

HELPERS = '''_OPENCODE_READY: bool | None = None


def opencode_ready() -> bool:
    """One-time readiness check for the logged-out free tier. Never raises."""
    global _OPENCODE_READY
    if _OPENCODE_READY is None:
        try:
            report = opencode_backend.preflight()
            log(
                f"OpenCode free tier ready: v{report['version']} | "
                f"{report['model']} | logged out"
            )
            _OPENCODE_READY = True
        except Exception as exc:
            log(f"OpenCode backend unavailable ({exc}); deterministic synthesis only")
            _OPENCODE_READY = False
    return _OPENCODE_READY


def rotate_after_quota(reason: str) -> bool:
    """
    Stops this instance so the next start hands out a new public IP (tools/quota_rotate.py).
    Declines when the rolling 24h cap is spent, so a limit that is not IP-keyed cannot turn
    into an endless stop/start loop.
    """
    try:
        import quota_rotate
    except Exception as exc:
        log(f"Rotation controller unavailable: {exc}")
        return False
    try:
        return quota_rotate.on_quota(reason)
    except Exception as exc:
        log(f"Rotation failed: {exc}")
        return False


'''

QUOTA_HANDLER = '''        except opencode_backend.QuotaExhausted as exc:
            log(f"OpenCode free-tier quota reached: {exc}")
            if rotate_after_quota(str(exc)):
                log("Instance stop requested; quota_rotate.py --start (or the EventBridge schedule) restarts it on a new public IP")
                break
            log("Rotation not performed (24h cap reached or AWS refused); parking 1h before retrying")
            time.sleep(3600)
            continue
'''

MODEL_LOG_PATTERN = (
    r'^[ \t]+if base_url:[ \t]*\r?\n'
    r'[ \t]+log\(f"Generation backend: \{base_url\} \| Model: \{MODEL_NAME\}"\)[ \t]*\r?\n'
)
MODEL_LOG_NEW = (
    "            if base_url:\n"
    "                shown_model = opencode_backend.MODEL if base_url == OPENCODE_SENTINEL else MODEL_NAME\n"
    "                log(f\"Generation backend: {base_url} | Model: {shown_model}\")\n"
)


class PatchError(RuntimeError):
    pass


def _line_ending(text: str) -> str:
    return "\r\n" if "\r\n" in text else "\n"


def _adapt(block: str, eol: str) -> str:
    return block.replace("\n", eol)


def insert_after(text, name, marker, pattern, block):
    if marker in text:
        print(f"[skip] {name}: already applied")
        return text
    m = re.search(pattern, text, re.MULTILINE)
    if not m:
        raise PatchError(f"{name}: anchor not found: {pattern!r}")
    at = m.end()
    print(f"[ok]   {name}")
    return text[:at] + _adapt(block, _line_ending(text)) + text[at:]


def insert_before(text, name, marker, pattern, block):
    if marker in text:
        print(f"[skip] {name}: already applied")
        return text
    m = re.search(pattern, text, re.MULTILINE)
    if not m:
        raise PatchError(f"{name}: anchor not found: {pattern!r}")
    print(f"[ok]   {name}")
    return text[:m.start()] + _adapt(block, _line_ending(text)) + text[m.start():]


def replace_once(text, name, marker, pattern, block):
    if marker in text:
        print(f"[skip] {name}: already applied")
        return text
    m = re.search(pattern, text, re.MULTILINE)
    if not m:
        raise PatchError(f"{name}: anchor not found: {pattern!r}")
    if len(re.findall(pattern, text, re.MULTILINE)) != 1:
        raise PatchError(f"{name}: anchor is ambiguous")
    print(f"[ok]   {name}")
    return text[:m.start()] + _adapt(block, _line_ending(text)) + text[m.end():]


# Anchors end with the line terminator (CRLF-tolerant) so the insertion point is after the
# whole line, never between a stray \r and its \n.
def patch(path: Path) -> int:
    with open(path, "r", encoding="utf-8", newline="") as fh:
        text = fh.read()
    before = text

    text = insert_after(
        text, "import the backend module", "import opencode_backend",
        r"^import next_target[ \t]+# noqa: E402[ \t]*\r?\n", OPENCODE_IMPORT,
    )
    text = insert_after(
        text, "sentinel constant", "OPENCODE_SENTINEL",
        r'^BACKEND = os\.environ\.get\("DECOMP_BACKEND", "deterministic"\)[ \t]*\r?\n', SENTINEL,
    )
    text = insert_after(
        text, "route call_llm_chat to the CLI", "if base_url.startswith(OPENCODE_SENTINEL)",
        r"^def call_llm_chat\(.*\) -> str:[ \t]*\r?\n", CALL_GUARD,
    )
    text = insert_before(
        text, "let quota escape the per-attempt retry loop", "except opencode_backend.QuotaExhausted:",
        r'^[ \t]+except Exception as e:[ \t]*\r?\n[ \t]+log\(f"  \[0x\{addr:08x\} Attempt', QUOTA_RERAISE,
    )
    text = replace_once(
        text, "select the opencode backend", 'if BACKEND == "opencode":',
        r'^[ \t]+if BACKEND == "kaggle":[ \t]*\r?\n',
        '            if BACKEND == "opencode":\n'
        '                base_url = OPENCODE_SENTINEL if opencode_ready() else None\n'
        '            elif BACKEND == "kaggle":\n',
    )
    text = replace_once(
        text, "log the real model for the CLI backend", "shown_model =",
        MODEL_LOG_PATTERN, MODEL_LOG_NEW,
    )
    text = insert_before(
        text, "rotation helpers", "def rotate_after_quota(", r"^def run_forever\(\):[ \t]*\r?\n", HELPERS,
    )
    text = insert_before(
        text, "rotate on quota exhaustion", "rotate_after_quota(str(exc))",
        r'^[ \t]+except KeyboardInterrupt:[ \t]*\r?\n[ \t]+log\("Supervisor interrupted by user\."\)', QUOTA_HANDLER,
    )

    if text == before:
        print("[done] nothing to change")
        return 0
    with open(path, "w", encoding="utf-8", newline="") as fh:
        fh.write(text)
    print(f"[done] wrote {path}")
    return 0


def main() -> int:
    target = Path(sys.argv[1]) if len(sys.argv) > 1 else DEFAULT
    if not target.exists():
        print(f"FATAL: {target} does not exist")
        return 1
    try:
        return patch(target)
    except PatchError as exc:
        print(f"FATAL: {exc}")
        return 1


if __name__ == "__main__":
    sys.exit(main())
