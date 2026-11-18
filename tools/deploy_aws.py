#!/usr/bin/env python3
"""
Launch and operate the OpenRBX-2014 decompilation worker on EC2, through the AWS CLI.

Actions
-------
  compare    Price the candidate instance types across every region the pricing API knows
             and print the cheapest region for each (this is how the default was chosen).
  plan       Resolve the AMI, key pair, security group and disk for the default launch.
  launch     Create the key pair / security group if needed, then launch the instance.
  sync       Copy this working tree to /opt/openrbx/OpenRBX-2014 and install the secret env file.
  provision  Run tools/provision_linux.sh on the instance (MSVC 11 under Wine, ~10-20 min).
  fetch      Download RobloxStudioBeta.exe into robloxbin/ (not tracked by git).
  service    Install and start the systemd unit.
  status     Instance state, public IP, unit state and the last harness log lines.
  stop       Stop the instance (keeps the disk and the public IP behaviour of a stop/start).
  terminate  Terminate the instance and delete its security group.

Defaults come from the price comparison plus the account's plan eligibility: this AWS account
is on the Free plan, which only permits free-tier-eligible instance types. The best of those is
`m7i-flex.large` (2 vCPU, 8 GiB, current-gen Intel), and us-east-1 / us-west-2 / us-east-2 are
its cheapest regions at $0.0958/hr. Override with --region / --instance-type.

Nothing secret is written into the repository: the DeepAI key is read from DEEPAI_API_KEY
in the environment and installed as /etc/openrbx/deepai.env (0600) on the instance.
"""

from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
import tempfile
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
STATE = ROOT / "data" / "ec2_state.json"
SECRETS = ROOT / "secrets"
BINARY_URL = (
    "https://archive.roblonium.com/Client/Windows/RobloxStudio/main%20%28roblox.com%29/"
    "2014/8.2014/August%2020%20%280.164.0.50577%29/version-56db56d41a444c41/RobloxStudioBeta.exe"
)
BINARY_SHA256 = "49c3c60717be968a14792d827a57ab517e47d61982b83619b38a82163c5b2703"
REMOTE_DIR = "/opt/openrbx/OpenRBX-2014"

# Free-plan-eligible on this account (describe-instance-types --filters free-tier-eligible=true).
CANDIDATES = ["m7i-flex.large", "c7i-flex.large", "t3.small", "t3.micro"]
SPECS = {  # vCPU, GiB
    "m7i-flex.large": (2, 8),
    "c7i-flex.large": (2, 4),
    "t3.small": (2, 2),
    "t3.micro": (2, 1),
}

DEFAULT_REGION = os.environ.get("OPENRBX_REGION", "us-east-1")
DEFAULT_TYPE = os.environ.get("OPENRBX_INSTANCE_TYPE", "m7i-flex.large")
DEFAULT_KEY = "openrbx-harness"
DEFAULT_SG = "openrbx-harness"


# --------------------------------------------------------------------------- helpers
def log(msg: str) -> None:
    print(f"[{time.strftime('%H:%M:%S')}] {msg}", flush=True)


def aws(*args: str, region: str | None = None, check: bool = True) -> str:
    cmd = ["aws", *args]
    if region:
        cmd += ["--region", region]
    res = subprocess.run(cmd, capture_output=True, text=True, encoding="utf-8", errors="replace")
    if check and res.returncode != 0:
        raise RuntimeError(f"aws {' '.join(args[:2])} failed: {(res.stderr or res.stdout).strip()[:600]}")
    return res.stdout


def aws_json(*args: str, region: str | None = None, check: bool = True):
    out = aws(*args, "--output", "json", region=region, check=check)
    return json.loads(out) if out.strip() else {}


def load_state() -> dict:
    try:
        return json.loads(STATE.read_text(encoding="utf-8"))
    except Exception:
        return {}


def save_state(state: dict) -> None:
    STATE.parent.mkdir(parents=True, exist_ok=True)
    STATE.write_text(json.dumps(state, indent=2), encoding="utf-8")


def bash(command: str, check: bool = True) -> subprocess.CompletedProcess:
    shell = shutil.which("bash") or "bash"
    res = subprocess.run([shell, "-lc", command], cwd=str(ROOT), capture_output=True, text=True,
                         encoding="utf-8", errors="replace")
    if check and res.returncode != 0:
        raise RuntimeError((res.stderr or res.stdout).strip()[:900])
    return res


def posix_path(path: str | Path) -> str:
    """Git Bash mangles `D:\\Work\\...` into `D:Work...`; OpenSSH accepts forward slashes."""
    return str(path).replace("\\", "/")


def ssh_args(state: dict) -> list[str]:
    key = Path(state.get("key_path", ""))
    return [
        "ssh",
        "-i", posix_path(key),
        "-o", "StrictHostKeyChecking=no",
        "-o", "UserKnownHostsFile=/dev/null",
        "-o", "ConnectTimeout=12",
        "-o", "ServerAliveInterval=20",
        f"ubuntu@{state['public_ip']}",
    ]


def ssh(state: dict, command: str, timeout: int = 120) -> subprocess.CompletedProcess:
    res = subprocess.run(ssh_args(state) + [command], capture_output=True, text=True,
                         encoding="utf-8", errors="replace", timeout=timeout)
    return res


def ssh_stream(state: dict, command: str, timeout: int = 3600) -> int:
    """Run a long remote command with its output attached to this terminal."""
    res = subprocess.run(ssh_args(state) + [command], timeout=timeout)
    return res.returncode


def caller_ip() -> str:
    res = subprocess.run(
        ["curl", "-sS", "-m", "15", "https://checkip.amazonaws.com"], capture_output=True,
        text=True, encoding="utf-8", errors="replace",
    )
    return (res.stdout or "").strip() or "0.0.0.0"


# --------------------------------------------------------------------------- actions
def action_compare(args) -> int:
    rows: dict[str, list[tuple[str, float]]] = {}
    for itype in CANDIDATES:
        out = aws(
            "pricing", "get-products", "--service-code", "AmazonEC2", "--region", "us-east-1",
            "--output", "json",
            "--filters",
            f"Type=TERM_MATCH,Field=instanceType,Value={itype}",
            "Type=TERM_MATCH,Field=operatingSystem,Value=Linux",
            "Type=TERM_MATCH,Field=tenancy,Value=Shared",
            "Type=TERM_MATCH,Field=preInstalledSw,Value=NA",
            "Type=TERM_MATCH,Field=capacitystatus,Value=Used",
            "Type=TERM_MATCH,Field=licenseModel,Value=No License required",
        )
        prices: dict[str, float] = {}
        for item in json.loads(out).get("PriceList", []):
            entry = json.loads(item)
            location = entry["product"]["attributes"].get("location")
            for term in entry.get("terms", {}).get("OnDemand", {}).values():
                for dim in term.get("priceDimensions", {}).values():
                    usd = dim.get("pricePerUnit", {}).get("USD")
                    if usd and float(usd) > 0:
                        prices[location] = min(prices.get(location, 9e9), float(usd))
        rows[itype] = sorted(prices.items(), key=lambda kv: kv[1])

    print(f"{'instance':15s} {'vCPU/RAM':>9s} {'region':30s} {'$/hr':>8s} {'$/730h':>9s}")
    best = None
    recommended = None
    for itype, prices in rows.items():
        cpu, ram = SPECS.get(itype, (0, 0))
        for location, usd in prices[:2]:
            print(f"{itype:15s} {cpu:>4d}/{ram:<4d} {location:30s} {usd:8.4f} {usd * 730:9.2f}")
            if best is None or usd < best[2]:
                best = (itype, location, usd)
            # Wine + a 32-bit cl.exe + ISO extraction does not fit in 2 GiB.
            if ram >= 8 and (recommended is None or usd < recommended[2]):
                recommended = (itype, location, usd)
    if best:
        print(f"\nCheapest absolute: {best[0]} in {best[1]} at ${best[2]:.4f}/hr (${best[2] * 730:.2f}/month).")
    if recommended:
        print(
            f"Recommended:      {recommended[0]} in {recommended[1]} at ${recommended[2]:.4f}/hr "
            f"(${recommended[2] * 730:.2f}/month) -- cheapest option with enough RAM for Wine + MSVC."
        )
    print(
        "\nRegion ids for the cheap locations above: "
        "Asia Pacific (Mumbai)=ap-south-1, Asia Pacific (Hyderabad)=ap-south-2, "
        "US East (N. Virginia)=us-east-1, US East (Ohio)=us-east-2, US West (Oregon)=us-west-2."
    )
    return 0


def resolve_ami(region: str) -> str:
    out = aws_json(
        "ec2", "describe-images", "--owners", "099720109477",
        "--filters",
        "Name=name,Values=ubuntu/images/hvm-ssd-gp3/ubuntu-noble-24.04-amd64-server-*",
        "Name=state,Values=available",
        "--query", "sort_by(Images,&CreationDate)[-1].[ImageId,CreationDate,Name]",
        region=region,
    )
    if not out:
        raise RuntimeError(f"no Ubuntu 24.04 amd64 AMI in {region}")
    return out[0]


def ensure_key(region: str, name: str) -> Path:
    SECRETS.mkdir(parents=True, exist_ok=True)
    path = SECRETS / f"{name}.pem"
    existing = aws_json("ec2", "describe-key-pairs", "--key-names", name, region=region, check=False)
    if existing.get("KeyPairs"):
        if path.exists():
            return path
        raise RuntimeError(
            f"key pair {name} already exists in AWS but {path} is missing. "
            "Pass --key-name with a new name, or restore the .pem."
        )
    material = aws_json("ec2", "create-key-pair", "--key-name", name, "--key-type", "rsa",
                        "--query", "KeyMaterial", region=region)
    path.write_text(material, encoding="utf-8")
    try:
        os.chmod(path, 0o600)
    except OSError:
        pass
    log(f"created key pair {name} -> {path.relative_to(ROOT)}")
    return path


def ensure_security_group(region: str, name: str, ip: str) -> str:
    found = aws_json(
        "ec2", "describe-security-groups", "--filters", f"Name=group-name,Values={name}",
        "--query", "SecurityGroups[0].GroupId", region=region, check=False,
    )
    if found:
        gid = found
    else:
        vpc = aws_json("ec2", "describe-vpcs", "--filters", "Name=isDefault,Values=true",
                       "--query", "Vpcs[0].VpcId", region=region)
        gid = aws_json(
            "ec2", "create-security-group", "--group-name", name,
            "--description", "OpenRBX-2014 decompilation worker (SSH only)",
            "--vpc-id", vpc, "--query", "GroupId", region=region,
        )
        log(f"created security group {gid}")
    try:
        aws("ec2", "authorize-security-group-ingress", "--group-id", gid, "--protocol", "tcp",
            "--port", "22", "--cidr", f"{ip}/32", region=region, check=False)
    except Exception:
        pass
    return gid


def action_plan(args) -> int:
    region = args.region
    ami = resolve_ami(region)
    state = load_state()
    key = Path(state.get("key_path", SECRETS / f"{args.key_name}.pem"))
    print(json.dumps({
        "region": region,
        "availability_zone": f"{region}a",
        "instance_type": args.instance_type,
        "ami": ami,
        "root_volume": f"{args.disk} GiB gp3, delete on termination",
        "key_pair": args.key_name,
        "key_path": str(key),
        "security_group": args.sg_name,
        "ssh_cidr": f"{caller_ip()}/32",
        "remote_dir": REMOTE_DIR,
        "spot": bool(args.spot),
    }, indent=2))
    return 0


def action_launch(args) -> int:
    region = args.region
    ami = resolve_ami(region)
    key_path = ensure_key(region, args.key_name)
    ip = caller_ip()
    gid = ensure_security_group(region, args.sg_name, ip)

    tags = (
        f"ResourceType=instance,Tags=[{{Key=Name,Value=openrbx-harness}},"
        f"{{Key=Project,Value=OpenRBX-2014}},{{Key=Role,Value=decompilation-worker}}]"
    )
    cmd = [
        "ec2", "run-instances",
        "--image-id", ami,
        "--instance-type", args.instance_type,
        "--key-name", args.key_name,
        "--security-group-ids", gid,
        "--iam-instance-profile", "Name=openrbx-worker",  # optional; ignored below if absent
    ]
    # Drop the instance profile when the account does not have it: the worker does not
    # need AWS permissions to decompile, only quota_rotate.py does.
    profiles = aws_json("iam", "list-instance-profiles", "--query", "InstanceProfiles[].InstanceProfileName",
                        check=False)
    if "openrbx-worker" not in (profiles or []):
        i = cmd.index("--iam-instance-profile")
        del cmd[i:i + 2]

    cmd += [
        "--block-device-mappings",
        f"DeviceName=/dev/sda1,Ebs={{VolumeSize={args.disk},VolumeType=gp3,DeleteOnTermination=true}}",
        "--metadata-options", "HttpTokens=required,HttpPutResponseHopLimit=2",
        "--tag-specifications", tags,
        "--count", "1",
        "--output", "json",
    ]
    if args.spot:
        cmd += ["--instance-market-options", "MarketType=spot,SpotOptions={SpotInstanceType=one-time}"]

    data = aws_json(*cmd, region=region)
    inst = data["Instances"][0]
    state = {
        "region": region,
        "instance_id": inst["InstanceId"],
        "instance_type": args.instance_type,
        "key_name": args.key_name,
        "key_path": str(key_path),
        "security_group": gid,
        "launched_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
    }
    save_state(state)
    log(f"launched {inst['InstanceId']} in {region}; waiting for running state…")
    aws("ec2", "wait", "instance-running", "--instance-ids", inst["InstanceId"], region=region)

    for _ in range(40):
        info = aws_json("ec2", "describe-instances", "--instance-ids", inst["InstanceId"],
                        "--query", "Reservations[0].Instances[0].[State.Name,PublicIpAddress]",
                        region=region)
        name, public_ip = (info + [None, None])[:2]
        if name == "running" and public_ip:
            state["public_ip"] = public_ip
            save_state(state)
            log(f"running: ubuntu@{public_ip}")
            return 0
        time.sleep(6)
    log("instance is running but has no public IPv4 yet; re-run `status`")
    return 1


def _state_or_die() -> dict:
    state = load_state()
    if not state.get("public_ip"):
        raise SystemExit("no instance in data/ec2_state.json; run `deploy_aws.py launch` first")
    return state


def action_sync(args) -> int:
    state = _state_or_die()
    log(f"syncing working tree to {REMOTE_DIR} on {state['public_ip']}")
    ssh(state, f"sudo mkdir -p {REMOTE_DIR} && sudo chown -R ubuntu:ubuntu /opt/openrbx")
    exclude = "--exclude=./build --exclude=./toolchain --exclude=./secrets --exclude=./.cloud-attachments"
    cmd = (
        f"tar czf - {exclude} -C '{posix_path(ROOT)}' . | "
        + " ".join(ssh_args(state))
        + f" 'tar xzf - -C {REMOTE_DIR}'"
    )
    res = bash(cmd)
    if res.stdout.strip():
        print(res.stdout.strip()[-2000:])

    key = os.environ.get("DEEPAI_API_KEY", "").strip()
    if key:
        with tempfile.NamedTemporaryFile("w", delete=False, encoding="utf-8") as fh:
            fh.write(f"DEEPAI_API_KEY={key}\nDEEPAI_MODEL={args.model}\n")
            tmp = fh.name
        try:
            subprocess.run(
                ["scp", "-q", "-i", posix_path(state["key_path"]), "-o", "StrictHostKeyChecking=no",
                 "-o", "UserKnownHostsFile=/dev/null", tmp, f"ubuntu@{state['public_ip']}:/tmp/deepai.env"],
                check=True,
            )
            ssh(state, "sudo install -d -m 0755 /etc/openrbx && "
                       "sudo install -m 0600 -o root -g root /tmp/deepai.env /etc/openrbx/deepai.env && "
                       "rm -f /tmp/deepai.env")
            log("installed /etc/openrbx/deepai.env (0600)")
        finally:
            os.unlink(tmp)
    else:
        log("DEEPAI_API_KEY not set locally: skipped the remote env file")
    return 0


def action_provision(args) -> int:
    state = _state_or_die()
    log("provisioning MSVC 11.0 under Wine (downloads the 1.5 GiB VS2012 ISO; expect 10-20 min)")
    ssh(state, "sudo git config --system --add safe.directory '*' || true")
    rc = ssh_stream(
        state,
        f"sudo bash {REMOTE_DIR}/tools/provision_linux.sh",
        timeout=args.timeout,
    )
    return rc


def action_fetch(args) -> int:
    state = _state_or_die()
    remote = f"{REMOTE_DIR}/robloxbin"
    cmd = (
        f"mkdir -p {remote} && "
        f"curl -fL --retry 4 --retry-delay 5 -o {remote}/RobloxStudioBeta.exe '{BINARY_URL}' && "
        f"echo '{BINARY_SHA256}  {remote}/RobloxStudioBeta.exe' | sha256sum -c -"
    )
    log("downloading RobloxStudioBeta.exe (21.6 MB) and verifying SHA-256")
    res = ssh(state, cmd, timeout=900)
    print(res.stdout.strip())
    if res.returncode != 0:
        print(res.stderr.strip()[-800:], file=sys.stderr)
    return res.returncode


def action_service(args) -> int:
    state = _state_or_die()
    script = f"""
set -e
sudo install -m 0644 {REMOTE_DIR}/tools/openrbx-harness.service /etc/systemd/system/openrbx-harness.service
sudo mkdir -p /var/log/openrbx
sudo git config --system --add safe.directory '{REMOTE_DIR}'
sudo git config --global user.name 'OpenRBX Harness'
sudo git config --global user.email 'harness@openrbx.local'
sudo git config --global init.defaultBranch main
sudo systemctl daemon-reload
sudo systemctl enable openrbx-harness
sudo systemctl restart openrbx-harness
sleep 3
systemctl --no-pager --lines=0 status openrbx-harness | head -12
"""
    res = ssh(state, script, timeout=180)
    print((res.stdout or "").strip())
    if res.returncode != 0:
        print(res.stderr.strip()[-900:], file=sys.stderr)
    return res.returncode


def action_status(args) -> int:
    state = load_state()
    if not state.get("instance_id"):
        raise SystemExit("no instance in data/ec2_state.json")
    info = aws_json("ec2", "describe-instances", "--instance-ids", state["instance_id"],
                    "--query", "Reservations[0].Instances[0].[State.Name,PublicIpAddress,InstanceType,LaunchTime]",
                    region=state["region"])
    name, public_ip, itype, launched = (info + [None] * 4)[:4]
    print(f"instance  {state['instance_id']}  {itype}  {name}  {public_ip or '-'}  launched {launched}")
    if name != "running" or not public_ip:
        return 0
    state["public_ip"] = public_ip
    save_state(state)
    res = ssh(state, "systemctl is-active openrbx-harness; "
                     "tail -n 24 /var/log/openrbx/harness.log 2>/dev/null | sed 's/\\r$//'", timeout=60)
    print(res.stdout.strip() or res.stderr.strip())
    return 0


def action_stop(args) -> int:
    state = _state_or_die()
    aws("ec2", "stop-instances", "--instance-ids", state["instance_id"], region=state["region"])
    log("stop requested; the disk and instance id are kept")
    return 0


def action_terminate(args) -> int:
    state = _state_or_die()
    aws("ec2", "terminate-instances", "--instance-ids", state["instance_id"], region=state["region"])
    log("terminate requested")
    if args.delete_group:
        for _ in range(30):
            try:
                aws("ec2", "delete-security-group", "--group-id", state["security_group"],
                    region=state["region"], check=True)
                log("security group deleted")
                break
            except Exception:
                time.sleep(10)
    return 0


def main() -> int:
    # The Windows console is cp1252; systemd and compiler output are UTF-8 (●, ✓, box drawing).
    for stream in (sys.stdout, sys.stderr):
        try:
            stream.reconfigure(encoding="utf-8", errors="replace")
        except Exception:
            pass
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("action", choices=[
        "compare", "plan", "launch", "sync", "provision", "fetch", "service", "status", "stop", "terminate",
    ])
    p.add_argument("--region", default=DEFAULT_REGION)
    p.add_argument("--instance-type", default=DEFAULT_TYPE)
    p.add_argument("--key-name", default=DEFAULT_KEY)
    p.add_argument("--sg-name", default=DEFAULT_SG)
    p.add_argument("--disk", type=int, default=30, help="root volume GiB (default 30, the free-tier ceiling)")
    p.add_argument("--spot", action="store_true", help="request a one-time Spot instance")
    p.add_argument("--model", default=os.environ.get("DEEPAI_MODEL", "deepseek-v4.1-flash"))
    p.add_argument("--timeout", type=int, default=2400)
    p.add_argument("--delete-group", action="store_true")
    args = p.parse_args()

    actions = {
        "compare": action_compare,
        "plan": action_plan,
        "launch": action_launch,
        "sync": action_sync,
        "provision": action_provision,
        "fetch": action_fetch,
        "service": action_service,
        "status": action_status,
        "stop": action_stop,
        "terminate": action_terminate,
    }
    try:
        return actions[args.action](args)
    except RuntimeError as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
