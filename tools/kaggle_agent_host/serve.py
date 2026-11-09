#!/usr/bin/env python3
"""
High-Performance Kaggle AI Model Hosting Server
Optimized for Frontier Vibe Coding & Agentic Tool Execution
Model: Qwen3.8-35B-A3B-Distill-Abliterated (IsValorum APEX-I Quantization)
Base: empero-ai/Qwen3.8-35B-A3B-Distill (Uncensored / Abliterated)
Architecture: Hybrid Gated DeltaNet MoE (35B total / 3B active per token, 40 layers)
Inference Engine: llama-server (CUDA 12.8) with Jinja Chat & DeepSeek Reasoning Format
Hardware: Dual Tesla T4s (30.72 GB VRAM) | Flash Attention | 4-bit KV Cache | Up to 256K Context
Strict Mode: Single Model Dedicated Server (Zero extraneous models/projectors)
"""

import os
import re
import sys
import glob
import time
import json
import shutil
import urllib.request
import subprocess

# Force unbuffered stdout for instant streaming to Kaggle log collector
sys.stdout.reconfigure(line_buffering=True)
sys.stderr.reconfigure(line_buffering=True)
os.environ["PATH"] = f"/usr/local/bin:/usr/bin:{os.environ.get('PATH', '')}"

# Model Specification: Single Dedicated Abliterated Frontier MoE
MODEL_REPO = "IsValorum/Qwen3.8-35B-A3B-Distill-MTP-APEX-I-MiniPlus-V2.1-Abliterated-GGUF"
MODEL_FILE = "Qwen3.8-35B-A3B-Distill.APEX-I-MiniPlus-V2.1-Abliterated.gguf"

DOWNLOAD_URL = f"https://huggingface.co/{MODEL_REPO}/resolve/main/{MODEL_FILE}"

PRIMARY_ALIAS = "qwen3.8:35b-a3b-abliterated"
ALIASES = [
    "qwen3.8:35b-a3b",
    "qwen3.8-35b-a3b-abliterated",
    "qwen3.8:27b",
    "qwen3.8:27b-abliterated",
    "qwen3.8",
    "default",
    "claude-sonnet-4-6",
    "claude-opus-4-6",
    "claude-haiku-4-5-20251001",
    "claude-3-7-sonnet-latest",
    "claude-3-5-sonnet-latest",
    "claude-3-5-haiku-latest",
]

SERVER_PORT = 11434
CLOUDFLARED_LOG = "/tmp/tunnel.log"
SERVER_LOG = "/tmp/server.log"
LOCAL_GGUF = "/tmp/model.gguf"

# Engine configuration (llama-server primary, ollama fallback)
LLAMA_TAG = "b12063"
LLAMA_BIN_DIR = "/tmp/llama_dist"
ENGINE_TYPE = "llama-server"
SERVER_BIN = None

# Global tunnel holder
TUNNEL_URL = None


def print_banner(msg):
    sep = "=" * 72
    print(f"\n{sep}\n  {msg}\n{sep}\n", flush=True)


def run_cmd(cmd, check=True, shell=True, env=None):
    merged = os.environ.copy()
    if env:
        merged.update(env)
    print(f"[EXEC] {cmd}", flush=True)
    res = subprocess.run(cmd, shell=shell, check=check, env=merged, text=True, capture_output=True)
    if res.stdout.strip():
        print(res.stdout.strip(), flush=True)
    if res.stderr.strip():
        print(res.stderr.strip(), file=sys.stderr, flush=True)
    return res


def clean_environment():
    print_banner("PHASE 1: STORAGE & PROCESS PURGE (STRICT SINGLE-MODEL)")
    run_cmd("pkill -9 -f llama-server", check=False)
    run_cmd("pkill -9 -f ollama", check=False)
    run_cmd("pkill -9 -f cloudflared", check=False)
    time.sleep(1)

    # Purge old models and temporary caches to release 100% of /tmp disk
    run_cmd("rm -rf /tmp/ollama /tmp/*.gguf /tmp/tunnel.log /tmp/*.log /tmp/llama* /tmp/cudart*", check=False)

    try:
        run_cmd("nvidia-smi --query-gpu=name,memory.total,memory.free,driver_version --format=csv")
    except Exception as e:
        print(f"[WARN] nvidia-smi failed: {e}", file=sys.stderr, flush=True)

    print("\nInitial disk space:")
    run_cmd("df -h /tmp")


def start_cloudflare_tunnel():
    global TUNNEL_URL
    print_banner("PHASE 2: CLOUDFLARE QUICK TUNNEL (PARALLEL INITIALIZATION)")

    cloudflared_bin = "/tmp/cloudflared"
    if not os.path.exists(cloudflared_bin):
        print("[INFO] Fetching cloudflared binary...", flush=True)
        run_cmd(f"curl -fsSL https://github.com/cloudflare/cloudflared/releases/latest/download/cloudflared-linux-amd64 -o {cloudflared_bin}")
        run_cmd(f"chmod +x {cloudflared_bin}")

    if os.path.exists(CLOUDFLARED_LOG):
        os.remove(CLOUDFLARED_LOG)

    # Launch cloudflared tunnel multiplexing over HTTP/2 directly to server port
    print(f"[INFO] Exposing http://127.0.0.1:{SERVER_PORT} via Cloudflare Quick Tunnel...", flush=True)
    tunnel_cmd = [
        cloudflared_bin,
        "tunnel",
        "--url", f"http://127.0.0.1:{SERVER_PORT}",
        "--protocol", "http2",
        "--logfile", CLOUDFLARED_LOG
    ]
    proc = subprocess.Popen(tunnel_cmd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

    url_pattern = re.compile(r"https://[a-zA-Z0-9-]+\.trycloudflare\.com")
    for _ in range(60):
        time.sleep(1)
        if os.path.exists(CLOUDFLARED_LOG):
            with open(CLOUDFLARED_LOG, "r") as f:
                matches = url_pattern.findall(f.read())
                if matches:
                    TUNNEL_URL = matches[0]
                    break

    if TUNNEL_URL:
        print(f"\n{'*'*72}\n  >>> PUBLIC OPENAI-COMPATIBLE API ENDPOINT DETECTED <<<\n  URL: {TUNNEL_URL}/v1\n{'*'*72}\n", flush=True)
        try:
            req = urllib.request.Request(
                "https://ntfy.sh/openrbx2014_tunnel_vibegod69420",
                data=f"{TUNNEL_URL}/v1".encode("utf-8"),
                method="POST",
            )
            urllib.request.urlopen(req, timeout=10)
            print("[INFO] Published live tunnel URL to ntfy discovery channel.", flush=True)
        except Exception as e:
            print(f"[WARN] ntfy publish warning: {e}", file=sys.stderr, flush=True)
    else:
        print("[WARN] Cloudflare tunnel URL not detected yet; continuing...", file=sys.stderr, flush=True)

    return proc


def install_and_setup_engine():
    global ENGINE_TYPE, SERVER_BIN
    print_banner("PHASE 3: INFERENCE ENGINE INITIALIZATION (LLAMA-SERVER CUDA 12.8)")

    run_cmd("apt-get update -qq && apt-get install -y -qq zstd curl tar aria2 libgomp1", check=False)

    os.makedirs(LLAMA_BIN_DIR, exist_ok=True)
    bin_tar = f"/tmp/llama-{LLAMA_TAG}.tar.gz"
    cudart_tar = f"/tmp/cudart-{LLAMA_TAG}.tar.gz"

    bin_url = f"https://github.com/ggml-org/llama.cpp/releases/download/{LLAMA_TAG}/llama-{LLAMA_TAG}-bin-ubuntu-cuda-12.8-x64.tar.gz"
    cudart_url = f"https://github.com/ggml-org/llama.cpp/releases/download/{LLAMA_TAG}/cudart-llama-{LLAMA_TAG}-bin-ubuntu-cuda-12.8-x64.tar.gz"

    print(f"[INFO] Fetching high-performance CUDA 12.8 llama-server ({LLAMA_TAG})...", flush=True)
    try:
        run_cmd(f"aria2c -x 16 -s 16 -j 16 -k 2M --file-allocation=none --continue=true '{bin_url}' -o 'llama.tar.gz' --dir='/tmp'", check=False)
        run_cmd(f"aria2c -x 16 -s 16 -j 16 -k 2M --file-allocation=none --continue=true '{cudart_url}' -o 'cudart.tar.gz' --dir='/tmp'", check=False)

        if not os.path.exists("/tmp/llama.tar.gz"):
            run_cmd(f"curl -fsSL '{bin_url}' -o '/tmp/llama.tar.gz'")
        if not os.path.exists("/tmp/cudart.tar.gz"):
            run_cmd(f"curl -fsSL '{cudart_url}' -o '/tmp/cudart.tar.gz'")

        run_cmd(f"tar -xzf /tmp/llama.tar.gz -C {LLAMA_BIN_DIR}")
        run_cmd(f"tar -xzf /tmp/cudart.tar.gz -C {LLAMA_BIN_DIR}")
        run_cmd("rm -f /tmp/llama.tar.gz /tmp/cudart.tar.gz")

        # Locate llama-server binary
        candidate_bins = glob.glob(f"{LLAMA_BIN_DIR}/**/llama-server", recursive=True) + glob.glob(f"{LLAMA_BIN_DIR}/llama-server")
        if candidate_bins:
            SERVER_BIN = candidate_bins[0]
            os.chmod(SERVER_BIN, 0o755)

            # Discover all directories containing shared libraries
            so_dirs = set()
            for so_path in glob.glob(f"{LLAMA_BIN_DIR}/**/*.so*", recursive=True):
                so_dirs.add(os.path.dirname(so_path))
            so_dirs.add("/usr/local/cuda/lib64")
            so_dirs.add("/usr/lib/x86_64-linux-gnu")

            ld_path = ":".join(so_dirs) + ":" + os.environ.get("LD_LIBRARY_PATH", "")
            os.environ["LD_LIBRARY_PATH"] = ld_path

            # Verify binary execution
            test_res = subprocess.run([SERVER_BIN, "--version"], capture_output=True, text=True, env=os.environ)
            if test_res.returncode == 0:
                print(f"[SUCCESS] Native CUDA llama-server ready: {SERVER_BIN}\n{test_res.stdout.strip()}", flush=True)
                ENGINE_TYPE = "llama-server"
                return
    except Exception as e:
        print(f"[WARN] Failed to configure llama-server: {e}. Falling back to Ollama...", file=sys.stderr, flush=True)

    # Fallback to Ollama if llama-server fails
    print("[INFO] Setting up Ollama engine fallback...", flush=True)
    ENGINE_TYPE = "ollama"
    ollama_bin = shutil.which("ollama") or "/usr/local/bin/ollama"
    if not os.path.exists(ollama_bin):
        run_cmd("curl -fsSL https://github.com/ollama/ollama/releases/latest/download/ollama-linux-amd64.tar.zst -o /tmp/ollama.tar.zst")
        run_cmd("tar --zstd -xf /tmp/ollama.tar.zst -C /usr/local")
        run_cmd("rm -f /tmp/ollama.tar.zst")
        run_cmd("ln -sf /usr/local/bin/ollama /usr/bin/ollama", check=False)
        run_cmd("chmod +x /usr/local/bin/ollama")
        ollama_bin = "/usr/local/bin/ollama"
    SERVER_BIN = ollama_bin


def download_model_high_speed():
    print_banner("PHASE 4: MULTI-THREADED GIGABIT MODEL DOWNLOAD (SINGLE MODEL)")
    print(f"[SOURCE] {DOWNLOAD_URL}", flush=True)
    print(f"[TARGET] {LOCAL_GGUF} (~13.65 GB)", flush=True)

    token = os.environ.get("HF_TOKEN", "")
    header_arg = f'--header="Authorization: Bearer {token}"' if token else ""

    # Download single model GGUF using aria2c 16-connection accelerator
    aria2_bin = shutil.which("aria2c")
    download_success = False

    if aria2_bin:
        print("[INFO] Satiating network with aria2c 16-stream parallel chunk accelerator...", flush=True)
        aria_cmd = f"aria2c -x 16 -s 16 -j 16 -k 2M --file-allocation=none --continue=true {header_arg} '{DOWNLOAD_URL}' -o '{os.path.basename(LOCAL_GGUF)}' --dir='/tmp'"
        res = subprocess.run(aria_cmd, shell=True, text=True)
        if res.returncode == 0 and os.path.exists(LOCAL_GGUF):
            download_success = True

    # Fallback to huggingface-cli
    if not download_success:
        print("[INFO] Falling back to huggingface-cli chunked download...", flush=True)
        token_arg = f"--token {token}" if token else ""
        hf_cmd = f"huggingface-cli download {MODEL_REPO} {MODEL_FILE} --local-dir /tmp/hf_dl --local-dir-use-symlinks False {token_arg}"
        res = subprocess.run(hf_cmd, shell=True, text=True)
        dl_path = f"/tmp/hf_dl/{MODEL_FILE}"
        if res.returncode == 0 and os.path.exists(dl_path):
            shutil.move(dl_path, LOCAL_GGUF)
            shutil.rmtree("/tmp/hf_dl", ignore_errors=True)
            download_success = True

    # Fallback to curl
    if not download_success:
        print("[INFO] Falling back to curl with resuming...", flush=True)
        curl_hdr = f'-H "Authorization: Bearer {token}"' if token else ""
        run_cmd(f"curl -L -C - --retry 5 {curl_hdr} '{DOWNLOAD_URL}' -o '{LOCAL_GGUF}'")

    file_size_gb = os.path.getsize(LOCAL_GGUF) / (1024**3)
    print(f"[INFO] Successfully staged single model GGUF: {file_size_gb:.2f} GB on disk.", flush=True)


def launch_inference_server():
    print_banner(f"PHASE 5: LAUNCHING ENGINE ({ENGINE_TYPE.upper()}) ON DUAL TESLA T4")

    all_aliases_str = ",".join([PRIMARY_ALIAS] + ALIASES)

    if ENGINE_TYPE == "llama-server":
        # Candidate configurations tailored for maximum juice and context window
        candidates = [
            # Candidate 1: Full native context 256K (262,144 tokens) with unlimited output (-n -1), 4-bit KV cache & Flash Attention
            [
                SERVER_BIN, "-m", LOCAL_GGUF, "--host", "0.0.0.0", "--port", str(SERVER_PORT),
                "-ngl", "99", "-sm", "layer", "-c", "262144", "-n", "-1", "-np", "1", "-fa", "on",
                "-ctk", "q4_0", "-ctv", "q4_0", "-b", "2048", "-ub", "512", "-t", "4",
                "--jinja", "--reasoning-format", "deepseek",
                "-a", all_aliases_str, "--temp", "0.6", "--top-p", "0.95", "--top-k", "20"
            ],
            # Candidate 2: 128K context (131,072 tokens) with unlimited output (-n -1)
            [
                SERVER_BIN, "-m", LOCAL_GGUF, "--host", "0.0.0.0", "--port", str(SERVER_PORT),
                "-ngl", "99", "-sm", "layer", "-c", "131072", "-n", "-1", "-np", "1", "-fa", "on",
                "-ctk", "q4_0", "-ctv", "q4_0", "-b", "2048", "-ub", "512", "-t", "4",
                "--jinja", "--reasoning-format", "deepseek",
                "-a", all_aliases_str, "--temp", "0.6", "--top-p", "0.95", "--top-k", "20"
            ],
            # Candidate 3: 96K context (98,304 tokens) with unlimited output (-n -1)
            [
                SERVER_BIN, "-m", LOCAL_GGUF, "--host", "0.0.0.0", "--port", str(SERVER_PORT),
                "-ngl", "99", "-sm", "layer", "-c", "98304", "-n", "-1", "-np", "1", "-fa", "on",
                "-ctk", "q4_0", "-ctv", "q4_0", "-b", "2048", "-ub", "512", "-t", "4",
                "--jinja", "--reasoning-format", "deepseek",
                "-a", all_aliases_str, "--temp", "0.6", "--top-p", "0.95", "--top-k", "20"
            ],
            # Candidate 4: 64K context (65,536 tokens) with unlimited output (-n -1)
            [
                SERVER_BIN, "-m", LOCAL_GGUF, "--host", "0.0.0.0", "--port", str(SERVER_PORT),
                "-ngl", "99", "-sm", "layer", "-c", "65536", "-n", "-1", "-np", "1", "-fa", "on",
                "-ctk", "q4_0", "-ctv", "q4_0", "-b", "2048", "-ub", "512", "-t", "4",
                "--jinja", "--reasoning-format", "deepseek",
                "-a", all_aliases_str, "--temp", "0.6", "--top-p", "0.95", "--top-k", "20"
            ]
        ]

        server_started = False
        for idx, cmd in enumerate(candidates, 1):
            cur_cmd = list(cmd)
            print(f"[INFO] Trying llama-server configuration {idx}/{len(candidates)}:\n{' '.join(cur_cmd)}", flush=True)
            with open(SERVER_LOG, "w") as log_f:
                proc = subprocess.Popen(cur_cmd, stdout=log_f, stderr=log_f, env=os.environ)

            # Wait up to 180s for /v1/models readiness (allows VRAM tensor allocation)
            for sec in range(180):
                time.sleep(1)
                if proc.poll() is not None:
                    print(f"[WARN] Config {idx} exited with code {proc.returncode}. Log:", file=sys.stderr)
                    if os.path.exists(SERVER_LOG):
                        with open(SERVER_LOG) as lf:
                            print(lf.read()[-1000:], file=sys.stderr)
                    break
                try:
                    req = urllib.request.urlopen(f"http://127.0.0.1:{SERVER_PORT}/v1/models", timeout=2)
                    if req.status == 200:
                        print(f"[SUCCESS] Config {idx} initialized and serving in {sec+1}s!", flush=True)
                        server_started = True
                        break
                except urllib.error.HTTPError as e:
                    if e.code == 503:
                        if sec % 10 == 0:
                            print(f"[INFO] Config {idx}: VRAM tensor loading in progress ({sec}s elapsed)...", flush=True)
                except Exception:
                    pass

            if server_started:
                break
            else:
                try:
                    proc.terminate()
                    proc.wait(timeout=3)
                except Exception:
                    pass
                run_cmd("pkill -9 -f llama-server", check=False)
                time.sleep(2)

        if not server_started:
            print("[WARN] All native llama-server configurations failed. Falling back to Ollama...", file=sys.stderr)
            run_cmd("pkill -9 -f llama-server", check=False)
            launch_ollama_fallback()

    else:
        launch_ollama_fallback()


def launch_ollama_fallback():
    all_aliases_str = ",".join([PRIMARY_ALIAS] + ALIASES)
    ollama_bin = shutil.which("ollama") or "/usr/local/bin/ollama"
    if not os.path.exists(ollama_bin):
        run_cmd("curl -fsSL https://github.com/ollama/ollama/releases/latest/download/ollama-linux-amd64.tar.zst -o /tmp/ollama.tar.zst")
        run_cmd("tar --zstd -xf /tmp/ollama.tar.zst -C /usr/local")
        run_cmd("rm -f /tmp/ollama.tar.zst")
        run_cmd("ln -sf /usr/local/bin/ollama /usr/bin/ollama", check=False)
        run_cmd("chmod +x /usr/local/bin/ollama")
        ollama_bin = "/usr/local/bin/ollama"

    ollama_env = {
        "PATH": f"/usr/local/bin:/usr/bin:{os.environ.get('PATH', '')}",
        "OLLAMA_HOST": f"0.0.0.0:{SERVER_PORT}",
        "OLLAMA_ORIGINS": "*",
        "OLLAMA_KEEP_ALIVE": "-1",
        "OLLAMA_NUM_PARALLEL": "1",
        "OLLAMA_FLASH_ATTENTION": "1",
        "OLLAMA_KV_CACHE_TYPE": "q4_0",
        "OLLAMA_MODELS": "/tmp/ollama/models",
        "CUDA_VISIBLE_DEVICES": "0,1"
    }
    with open(SERVER_LOG, "w") as log_f:
        subprocess.Popen([ollama_bin, "serve"], stdout=log_f, stderr=log_f, env={**os.environ, **ollama_env})
    time.sleep(3)

    modelfile_path = "/tmp/Modelfile"
    with open(modelfile_path, "w") as f:
        f.write(f"""FROM {LOCAL_GGUF}
PARAMETER num_predict 16384
PARAMETER num_ctx 131072
PARAMETER num_batch 2048
PARAMETER temperature 0.6
PARAMETER top_p 0.95
PARAMETER stop "<|im_end|>"
PARAMETER stop "<|endoftext|>"
""")
    subprocess.run([ollama_bin, "create", PRIMARY_ALIAS, "-f", modelfile_path], check=True)
    for alias in ALIASES:
        try:
            subprocess.run([ollama_bin, "cp", PRIMARY_ALIAS, alias], check=False)
        except Exception:
            pass

    for i in range(120):
        try:
            req = urllib.request.urlopen(f"http://127.0.0.1:{SERVER_PORT}/v1/models", timeout=2)
            if req.status == 200:
                print(f"[SUCCESS] Ollama fallback initialized and serving in {i+1}s!", flush=True)
                return
        except Exception:
            time.sleep(1)


def warmup_and_benchmark():
    print_banner("PHASE 6: GPU WARMUP & REAL-TIME SPEED BENCHMARK")
    print(f"[INFO] Executing live benchmark request for {PRIMARY_ALIAS} on Dual T4...", flush=True)

    benchmark_prompt = "Write a complete python implementation of Dijkstra's shortest path algorithm using a min-heap."
    payload = json.dumps({
        "model": PRIMARY_ALIAS,
        "messages": [
            {"role": "system", "content": "You are a concise expert coding assistant."},
            {"role": "user", "content": benchmark_prompt}
        ],
        "temperature": 0.6,
        "max_tokens": 512,
        "stream": False
    }).encode("utf-8")

    t0 = time.time()
    try:
        req = urllib.request.Request(
            f"http://127.0.0.1:{SERVER_PORT}/v1/chat/completions",
            data=payload,
            headers={"Content-Type": "application/json", "Authorization": "Bearer ollama"}
        )
        with urllib.request.urlopen(req, timeout=180) as resp:
            data = json.loads(resp.read().decode("utf-8"))
            elapsed = time.time() - t0
            
            usage = data.get("usage", {})
            prompt_tokens = usage.get("prompt_tokens", 0)
            completion_tokens = usage.get("completion_tokens", 0)
            reasoning_tokens = usage.get("reasoning_tokens", 0)

            tps = completion_tokens / max(elapsed, 0.01)

            print(f"\n{'-'*72}")
            print(f"  PERFORMANCE BENCHMARK RESULTS (Dual Tesla T4s - {ENGINE_TYPE}):")
            print(f"  * Prompt Tokens       : {prompt_tokens}")
            print(f"  * Completion Tokens   : {completion_tokens} (Reasoning: {reasoning_tokens})")
            print(f"  * Total Latency       : {elapsed:.2f}s")
            print(f"  * Generation Speed    : {tps:.1f} tokens/sec")
            print(f"{'-'*72}\n", flush=True)
    except Exception as e:
        print(f"[WARN] Benchmark request: {e}", flush=True)

    run_cmd("df -h /tmp")


def display_dashboard(cf_url):
    api_url = f"{cf_url}/v1"
    try:
        req = urllib.request.Request(
            "https://ntfy.sh/openrbx2014_tunnel_vibegod69420",
            data=api_url.encode("utf-8"),
            method="POST",
        )
        urllib.request.urlopen(req, timeout=10)
    except Exception:
        pass
    banner = f"""
========================================================================
    FRONTIER AGENTIC CODING SERVER IS LIVE (QWEN3.8 35B-A3B ABLITERATED)
========================================================================

  Public OpenAI-Compatible Base URL:
  --> {api_url}

  Active Dedicated Model (Strict Single-Model Mode):
  --> {PRIMARY_ALIAS}
      Base: empero-ai/Qwen3.8-35B-A3B-Distill (IsValorum Abliterated Release)
      Architecture: 35B MoE (3B active/token, 40 layers) + DeltaNet Hybrid
      Context Window: Maximum VRAM allocation (up to 256K / 128K context)
      Reasoning: Full DeepSeek-style native reasoning (<think> tokens)
      Aliases: {', '.join(ALIASES)}

------------------------------------------------------------------------
  HOW TO CONFIGURE PI (AUTOMATED):
------------------------------------------------------------------------
Run in your local terminal:
  python configure_pi.py {api_url} {PRIMARY_ALIAS}

Pi is fully configured with 7 thinking levels:
  /thinking off       --> Ultra-fast direct coding (zero think latency)
  /thinking low       --> Concise, brief planning
  /thinking medium    --> Standard reasoning (Recommended)
  /thinking xhigh     --> Deep architectural validation

------------------------------------------------------------------------
  HOW TO CONFIGURE OPENCODE:
------------------------------------------------------------------------
In C:\\Users\\BluB\\.config\\opencode\\opencode.json:
  "baseURL": "{api_url}"
  "model": "kaggle/{PRIMARY_ALIAS}"

------------------------------------------------------------------------
  QUICK CURL INFERENCE TEST:
------------------------------------------------------------------------
curl {api_url}/chat/completions \\
  -H "Content-Type: application/json" \\
  -d '{{
    "model": "{PRIMARY_ALIAS}",
    "messages": [{{"role": "user", "content": "Write a python quicksort"}}],
    "stream": true
  }}'

========================================================================
"""
    print(banner, flush=True)


def keep_alive_loop(cf_proc):
    print_banner("PHASE 7: ACTIVE MONITORING & HEALTH CHECK LOOP")
    start_time = time.time()

    while True:
        time.sleep(60)
        elapsed = int(time.time() - start_time)
        hours = elapsed // 3600
        mins = (elapsed % 3600) // 60

        if cf_proc.poll() is not None:
            print("[WARN] Cloudflare tunnel exited; restarting...", file=sys.stderr, flush=True)
            cf_proc = start_cloudflare_tunnel()

        try:
            req = urllib.request.urlopen(f"http://127.0.0.1:{SERVER_PORT}/v1/models", timeout=5)
            status = "HEALTHY" if req.status == 200 else f"STATUS_{req.status}"
        except Exception as e:
            status = f"ERROR: {e}"

        print(f"[HEARTBEAT | Uptime: {hours:02d}h {mins:02d}m] Engine: {ENGINE_TYPE} | Model: {PRIMARY_ALIAS} | Status: {status}", flush=True)


def main():
    print_banner("INITIALIZING FRONTIER QWEN3.8 35B-A3B ABLITERATED ON KAGGLE DUAL T4")
    clean_environment()
    cf_proc = start_cloudflare_tunnel()
    install_and_setup_engine()
    download_model_high_speed()
    launch_inference_server()
    warmup_and_benchmark()
    if TUNNEL_URL:
        display_dashboard(TUNNEL_URL)
    keep_alive_loop(cf_proc)


if __name__ == "__main__":
    main()
