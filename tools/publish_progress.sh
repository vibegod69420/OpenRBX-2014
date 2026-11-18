#!/bin/bash
# Publishes the AWS worker's output to GitHub Pages.
#
# Why this exists: the harness runs as root from a root-owned systemd unit with
# DECOMP_PUSH=0, and its git history predates the annotation reset, so it cannot push to
# main itself. This job runs as the unprivileged ubuntu user with a repo-scoped deploy key,
# mirrors the worker's *committed* Client/ tree plus its current docs/ data onto main, and
# lets the repo's existing "Deploy Live Progress to GitHub Pages" workflow take it live.
#
# Install: run every 5 minutes from the ubuntu crontab.
#   */5 * * * * /opt/openrbx/publisher/publish.sh

set -euo pipefail

SRC="${DECOMP_SRC:-/opt/openrbx/OpenRBX-2014}"
DST="${DECOMP_PUBLISHER:-/opt/openrbx/publisher}"
KEY="${DECOMP_DEPLOY_KEY:-$HOME/.ssh/openrbx_deploy}"
LOG="${DECOMP_PUBLISH_LOG:-$HOME/publish.log}"

# Applies to fetch and push alike; scoping it to push alone leaves fetch unauthenticated.
export GIT_SSH_COMMAND="ssh -i $KEY -o IdentitiesOnly=yes -o BatchMode=yes"

# One publisher at a time; skip the tick rather than queue behind a slow push.
exec 9>/tmp/openrbx-publish.lock
flock -n 9 || exit 0

mkdir -p "$(dirname "$LOG")"
if [ -f "$LOG" ] && [ "$(stat -c %s "$LOG")" -gt 2000000 ]; then
    : > "$LOG"
fi
exec >> "$LOG" 2>&1

echo "--- $(date -u +%Y-%m-%dT%H:%M:%SZ) ---"

cd "$DST"
git fetch -q --depth 1 origin main
# The publisher is `git init`-ed in place (this script already lives in the directory), so it
# starts with no local branch named main; pin one to the fetched tip before committing.
git checkout -q -B main FETCH_HEAD
git reset -q --hard FETCH_HEAD

# Sources come from the worker's last commit, so a half-written candidate from the batch
# currently in flight is never published. docs/ is copied live because it is written
# atomically at the end of each batch.
tmp="$(mktemp -d)"
trap 'rm -rf "$tmp"' EXIT
git -C "$SRC" archive HEAD Client | tar -x -C "$tmp"

rsync -a --delete "$tmp/Client/" "$DST/Client/"
rsync -a --delete "$SRC/docs/" "$DST/docs/"
cp -f "$SRC/ROBLOXSTUDIOPROGRESS.json" "$SRC/ROBLOXSTUDIOPROGRESS.SVG" "$DST/" 2>/dev/null || true

git add -A
if git diff --cached --quiet; then
    echo "no changes"
    exit 0
fi

matched="$(python3 -c "import json;print(json.load(open('docs/progress.json'))['perfect_100_count'])" 2>/dev/null || echo "?")"
git -c user.name="OpenRBX worker" -c user.email="harness@openrbx.local" \
    commit -q -m "Worker sync: ${matched} byte-exact functions"

if git push -q origin main; then
    echo "pushed ($matched matched)"
else
    # A concurrent push to main raced us; the next tick resets onto it and retries.
    echo "push rejected; will retry on the next run"
    exit 0
fi
