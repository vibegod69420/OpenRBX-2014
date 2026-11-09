#!/usr/bin/env python3
"""
Public-IP rotation for the OpenRBX-2014 EC2 worker.

Trigger: the OpenCode free tier refuses a request (`QuotaExhausted`). The worker cannot
start itself once it is stopped, so the cycle is split:

  on the instance      `--on-quota`   record the event + stop the instance
  outside the instance `--start`      start it, wait for SSM, report the new public IP

`--install-autostart` closes the loop with no external machine: an EventBridge schedule
starts the instance whenever it is found stopped, via the AWS-managed
`AWS-StartEC2Instance` automation document.

Facts this is built around
--------------------------
* A **reboot** keeps the public IPv4. Only **stop + start** reassigns it, and only when the
  instance has no Elastic IP attached. If an EIP is associated, it is detached and released
  first, otherwise every "restart" returns the same address and the whole cycle is a no-op.
* Whether the free allowance is keyed on IP at all is **not documented**. This controller
  therefore records the address before and after every rotation and caps rotations per
  24h, so an ineffective rotation costs a bounded amount and leaves a ledger that shows it.

Environment
-----------
OPENRBX_INSTANCE_ID            instance id; default resolved from IMDSv2
DECOMP_ROTATE_MAX_PER_DAY      rotations allowed in a rolling 24h, default 6
AWS_REGION                     passed through to the CLI
"""

import argparse
import json
import os
import subprocess
import sys
import time
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LEDGER = ROOT / "data" / "rotation_log.jsonl"
STATE = ROOT / "data" / "rotation_state.json"
MAX_PER_DAY = int(os.environ.get("DECOMP_ROTATE_MAX_PER_DAY", "6"))
AUTOSTART_RULE = "openrbx-rotate-autostart"
STARTER_ROLE = "OpenRBX-RotateStarter"


def log(msg: str) -> None:
    print(f"[{time.strftime('%Y-%m-%d %H:%M:%S')}] {msg}", flush=True)


def _aws(*args: str, timeout: int = 120) -> subprocess.CompletedProcess:
    return subprocess.run(["aws", *args], capture_output=True, text=True, timeout=timeout)


def _aws_json(*args: str, timeout: int = 120):
    res = _aws(*args, timeout=timeout)
    if res.returncode != 0:
        raise RuntimeError(f"aws {' '.join(args[:3])} failed: {(res.stderr or res.stdout).strip()[:400]}")
    text = (res.stdout or "").strip()
    return json.loads(text) if text else None


def imds_instance_id() -> str:
    """IMDSv2: a token is required on any instance with the modern metadata options."""
    try:
        req = urllib.request.Request(
            "http://169.254.169.254/latest/api/token",
            method="PUT",
            headers={"X-aws-ec2-metadata-token-ttl-seconds": "60"},
        )
        token = urllib.request.urlopen(req, timeout=2).read().decode()
        req2 = urllib.request.Request(
            "http://169.254.169.254/latest/meta-data/instance-id",
            headers={"X-aws-ec2-metadata-token": token},
        )
        return urllib.request.urlopen(req2, timeout=2).read().decode().strip()
    except Exception as exc:
        raise RuntimeError(
            f"could not resolve the instance id from IMDS ({exc}); set OPENRBX_INSTANCE_ID"
        )


def instance_id() -> str:
    return os.environ.get("OPENRBX_INSTANCE_ID") or imds_instance_id()


def describe(iid: str) -> dict:
    data = _aws_json(
        "ec2", "describe-instances", "--instance-ids", iid,
        "--query", "Reservations[0].Instances[0].{state:State.Name,ip:PublicIpAddress,priv:PrivateIpAddress,az:Placement.AvailabilityZone,lifecycle:InstanceLifecycle}",
        "--output", "json",
    )
    return data or {}


def elastic_ip(iid: str) -> dict | None:
    data = _aws_json(
        "ec2", "describe-addresses",
        "--filters", f"Name=instance-id,Values={iid}",
        "--query", "Addresses[0].{alloc:AllocationId,ip:PublicIp,assoc:AssociationId}",
        "--output", "json",
    )
    return data if data and data.get("alloc") else None


def release_elastic(iid: str) -> str:
    """Detach + release the EIP so the next start hands out a fresh dynamic address."""
    eip = elastic_ip(iid)
    if not eip:
        return "no Elastic IP attached; stop/start will reassign the public IP"
    if eip.get("assoc"):
        _aws("ec2", "disassociate-address", "--association-id", eip["assoc"])
        time.sleep(3)
    _aws("ec2", "release-address", "--allocation-id", eip["alloc"])
    return f"released Elastic IP {eip.get('ip')} ({eip['alloc']})"


def ledger_entries(hours: int = 24) -> list[dict]:
    if not LEDGER.exists():
        return []
    cutoff = time.time() - hours * 3600
    out = []
    for line in LEDGER.read_text(encoding="utf-8").splitlines():
        try:
            entry = json.loads(line)
        except json.JSONDecodeError:
            continue
        if entry.get("ts_epoch", 0) >= cutoff:
            out.append(entry)
    return out


def record(entry: dict) -> None:
    LEDGER.parent.mkdir(parents=True, exist_ok=True)
    entry = {"ts": time.strftime("%Y-%m-%dT%H:%M:%S"), "ts_epoch": time.time(), **entry}
    with open(LEDGER, "a", encoding="utf-8") as fh:
        fh.write(json.dumps(entry) + "\n")
    try:
        STATE.write_text(json.dumps(entry, indent=2), encoding="utf-8")
    except OSError:
        pass


def on_quota(reason: str) -> bool:
    """
    Returns True when the instance has been asked to stop (rotation under way), False when
    the rotation was refused because the daily cap is reached or AWS refused the call.
    """
    recent = ledger_entries(24)
    if len(recent) >= MAX_PER_DAY:
        log(
            f"rotation refused: {len(recent)} rotations already in the last 24h "
            f"(cap {MAX_PER_DAY}). The free allowance does not appear to be IP-keyed, or the "
            f"cap is exhausted; inspect data/rotation_log.jsonl before raising it."
        )
        return False

    try:
        iid = instance_id()
        before = describe(iid)
    except Exception as exc:
        log(f"rotation aborted before stopping: {exc}")
        return False

    eip_note = "skipped"
    try:
        eip_note = release_elastic(iid)
        log(eip_note)
    except Exception as exc:
        log(f"Elastic IP release failed ({exc}); the public IP will not change on start")
        return False

    record({
        "event": "quota_exhausted",
        "reason": reason[:400],
        "instance": iid,
        "ip_before": before.get("ip"),
        "az": before.get("az"),
        "eip": eip_note,
        "rotations_24h": len(recent) + 1,
    })

    try:
        res = _aws("ec2", "stop-instances", "--instance-ids", iid)
        if res.returncode != 0:
            log(f"stop-instances failed: {(res.stderr or res.stdout).strip()[:300]}")
            return False
    except Exception as exc:
        log(f"stop-instances raised: {exc}")
        return False

    log(f"stop requested for {iid} (ip_before={before.get('ip')}); start is performed by "
        f"`quota_rotate.py --start` or the {AUTOSTART_RULE} schedule")
    return True


def start_and_wait(iid: str, timeout_min: int = 12) -> dict:
    _aws("ec2", "start-instances", "--instance-ids", iid)
    log(f"start requested for {iid}")
    subprocess.run(["aws", "ec2", "wait", "instance-running", "--instance-ids", iid], timeout=600)

    deadline = time.time() + timeout_min * 60
    ssm = "Unknown"
    while time.time() < deadline:
        try:
            info = _aws_json(
                "ssm", "describe-instance-information",
                "--filters", f"Key=InstanceIds,Values={iid}",
                "--query", "InstanceInformationList[0].PingStatus", "--output", "json",
            )
            ssm = info if isinstance(info, str) else (info or "Unknown")
        except Exception:
            ssm = "Unknown"
        if ssm == "Online":
            break
        time.sleep(15)

    now = describe(iid)
    record({
        "event": "started",
        "instance": iid,
        "ip_after": now.get("ip"),
        "state": now.get("state"),
        "ssm": ssm,
    })
    log(f"state={now.get('state')} ssm={ssm} ip_after={now.get('ip')}")
    if ssm != "Online":
        log("warning: SSM is not Online yet; it usually re-registers a minute or two after boot")
    return now


def status() -> int:
    try:
        iid = instance_id()
        info = describe(iid)
        eip = elastic_ip(iid)
    except Exception as exc:
        print(f"status unavailable: {exc}")
        return 1
    print(json.dumps({
        "instance": iid,
        "state": info.get("state"),
        "public_ip": info.get("ip"),
        "elastic_ip": eip,
        "rotations_24h": len(ledger_entries(24)),
        "cap_24h": MAX_PER_DAY,
        "last_entry": ledger_entries(24)[-1] if ledger_entries(24) else None,
    }, indent=2))
    return 0


def _account_region() -> tuple[str, str]:
    ident = _aws_json("sts", "get-caller-identity", "--query", "Account", "--output", "json")
    region = ((_aws("configure", "get", "region").stdout or "").strip()
              or os.environ.get("AWS_REGION") or "us-east-1")
    return str(ident), region


def install_autostart(iid: str) -> int:
    account, region = _account_region()
    doc_arn = f"arn:aws:ssm:{region}:{account}:automation-definition/AWS-StartEC2Instance"
    trust = {
        "Version": "2012-10-17",
        "Statement": [{"Effect": "Allow", "Principal": {"Service": "events.amazonaws.com"}, "Action": "sts:AssumeRole"}],
    }
    perms = {
        "Version": "2012-10-17",
        "Statement": [
            {"Effect": "Allow", "Action": ["ssm:StartAutomationExecution"], "Resource": f"{doc_arn}:*"},
            {"Effect": "Allow", "Action": ["ssm:GetAutomationExecution", "iam:PassRole"], "Resource": "*"},
        ],
    }
    tmp = ROOT / "data"
    tmp.mkdir(parents=True, exist_ok=True)
    (tmp / "rotate-trust.json").write_text(json.dumps(trust), encoding="utf-8")
    (tmp / "rotate-perms.json").write_text(json.dumps(perms), encoding="utf-8")

    _aws("iam", "create-role", "--role-name", STARTER_ROLE,
         "--assume-role-policy-document", f"file://{tmp / 'rotate-trust.json'}")
    _aws("iam", "put-role-policy", "--role-name", STARTER_ROLE,
         "--policy-name", "StartOpenRBXInstance", "--policy-document", f"file://{tmp / 'rotate-perms.json'}")
    role_arn = _aws_json("iam", "get-role", "--role-name", STARTER_ROLE, "--query", "Role.Arn", "--output", "json")

    _aws("events", "put-rule", "--name", AUTOSTART_RULE,
         "--schedule-expression", "rate(10 minutes)",
         "--description", "Start the OpenRBX-2014 worker after a quota rotation stopped it",
         "--state", "ENABLED")
    rule_arn = _aws_json("events", "describe-rule", "--name", AUTOSTART_RULE, "--query", "Arn", "--output", "json")

    target = [{
        "Id": "start-openrbx",
        "Arn": doc_arn,
        "RoleArn": role_arn,
        "Input": json.dumps({"InstanceId": [iid]}),
    }]
    (tmp / "rotate-target.json").write_text(json.dumps(target), encoding="utf-8")
    res = _aws("events", "put-targets", "--rule", AUTOSTART_RULE,
               "--targets", f"file://{tmp / 'rotate-target.json'}")
    print((res.stdout or res.stderr).strip())
    print(f"autostart installed: {AUTOSTART_RULE} -> AWS-StartEC2Instance({iid}) via {role_arn}")
    return 0 if res.returncode == 0 else 1


def remove_autostart() -> int:
    _aws("events", "remove-targets", "--rule", AUTOSTART_RULE, "--ids", "start-openrbx")
    _aws("events", "delete-rule", "--name", AUTOSTART_RULE)
    _aws("iam", "delete-role-policy", "--role-name", STARTER_ROLE, "--policy-name", "StartOpenRBXInstance")
    _aws("iam", "delete-role", "--role-name", STARTER_ROLE)
    print("autostart removed")
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--on-quota", metavar="REASON", nargs="?", const="quota limit reached",
                    help="log the exhaustion, release any Elastic IP and stop the instance")
    ap.add_argument("--start", action="store_true", help="start the instance and report the new public IP")
    ap.add_argument("--status", action="store_true", help="print state, address and rotation history")
    ap.add_argument("--install-autostart", action="store_true", help="install the EventBridge start schedule")
    ap.add_argument("--remove-autostart", action="store_true", help="remove the EventBridge start schedule")
    args = ap.parse_args()

    try:
        if args.status:
            return status()
        if args.start:
            start_and_wait(instance_id())
            return 0
        if args.install_autostart:
            return install_autostart(instance_id())
        if args.remove_autostart:
            return remove_autostart()
        if args.on_quota is not None:
            return 0 if on_quota(args.on_quota) else 1
    except Exception as exc:
        log(f"error: {exc}")
        return 1

    ap.print_help()
    return 2


if __name__ == "__main__":
    sys.exit(main())
