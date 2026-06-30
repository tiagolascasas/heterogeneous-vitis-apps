# apps — shared Makefile reference

All per-app Makefiles set a handful of variables and then `include ../Makefile`.
The shared Makefile provides every build target described below.

---

## Host binary

| Target | What it does |
|---|---|
| `host` *(default)* | Builds the aarch64 host ELF(s). If `HOST_VARIANTS` is set (e.g. vadd's `xrt opencl axi`), builds all variants; otherwise builds the single default ELF. |
| `host-xrt` / `host-opencl` / `host-axi` | Build a specific variant with the matching runtime bridge and compile flags. |
| `build-host` | Low-level alias that builds `$(ELF_PATH)` directly. |

---

## Kernel / HLS

| Target | What it does |
|---|---|
| `synthesis` | Runs `v++ --compile --mode hls` — HLS synthesis only (no RTL implementation). Produces a status sentinel. |
| `impl` | Runs `vitis-run --mode hls --impl` after synthesis — produces the `.xo` kernel object. |
| `update_cfg` | Patches `hls_config.cfg` to set the correct top function name (helper, run automatically). |

---

## Hardware link

| Target | What it does |
|---|---|
| `link-hw` | Links the `.xo` against the ZCU102 platform for real board deployment → `build/cluster.xclbin`. |
| `link-hwemu` | Links the `.xo` for hardware emulation → `build/cluster_hw_emu.xclbin`. Wraps `gcc` to work around a C23/xelab incompatibility. |

---

## Hardware emulation setup (shared, once per platform)

| Target | What it does |
|---|---|
| `emconfig` | Creates `emconfig.json` in `apps/package_hw_emu_<platform>/`. Shared across all apps — only needs the platform name. |
| `setup-hwemu` | Builds the full QEMU base image (rootfs + kernel + `launch_hw_emu.sh`) in `apps/package_hw_emu_<platform>/`. Requires at least one hw_emu xclbin to exist — auto-discovers any `cluster_hw_emu.xclbin` under `apps/`. Override with `SEED_XCLBIN=<path>`. Idempotent: skips if image already exists. |

---

## Hardware emulation per-app

| Target | What it does |
|---|---|
| `inject-hwemu` | Fast path (after base image exists): uses `mcopy` to replace only the xclbin and ELF in the shared FAT image. No rootfs processing. |
| `package-hwemu` | Ensures the base image exists (runs `v++ -p` once if not), then runs `inject-hwemu`. |
| `run-hwemu` | Runs `package-hwemu` then launches QEMU via `launch_hw_emu.sh`. |

---

## Cleanup

| Target | What it does |
|---|---|
| `clean` | Removes app-local build artifacts (`build/`, `vitis/`, object files, logs). Does **not** touch the shared emulator image. |
| `clean-hwemu-base` | Removes `apps/package_hw_emu_<platform>/` entirely. Explicit opt-in since it's shared across all apps. |

---

## Typical workflows

```sh
# First time on a new platform:
make link-hwemu        # (from any app) build hw_emu xclbin
make setup-hwemu       # (from any app) create the shared QEMU image

# Per app thereafter:
make run-hwemu         # injects xclbin+ELF, launches QEMU

# Board deployment:
make impl              # HLS → .xo
make link-hw           # .xo → cluster.xclbin for real hardware
```

---

## Key variables

| Variable | Default | Description |
|---|---|---|
| `APPNAME` | `app` | Used in the output ELF filename. |
| `TOP` | `cluster` | HLS top function and xclbin base name. |
| `RUNTIME` | `xrt` | `xrt`, `opencl`, or `axi` — selects compile flags and runtime libs. |
| `HOST_VARIANTS` | *(empty)* | Space-separated list of variants to build (e.g. `xrt opencl axi`). |
| `PLATFORM` | `xilinx_zcu102_base_202420_1` | Vitis platform for linking and packaging. |
| `SHARED_EMU_DIR` | `apps/package_hw_emu_<platform>/` | Where the shared QEMU base image lives. |
| `SEED_XCLBIN` | *(empty)* | Override xclbin used by `setup-hwemu`. Auto-detected if not set. |
