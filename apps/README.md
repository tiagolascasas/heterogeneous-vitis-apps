# apps — shared Makefile reference

All per-app Makefiles set a handful of variables and then `include ../Makefile`.
The shared Makefile provides every build target described below.

> **Tip:** You can run `make help` in any app directory to see a quick summary of the available build targets and what they do.

> **Note:** For information on how to run these applications across the pure SW, mocked HW, and true HW execution boundaries, please see [Execution Modes](execution_modes.md).

---

## Prerequisites & Dependencies

To ensure reproducibility, please verify your development environment matches the following:

- **Vitis Unified Software Platform:** Version 2024.2 (Ensure `source /tools/Xilinx/Vitis/2024.2/settings64.sh` is executed in your shell).
- **Xilinx Runtime (XRT):** Required for compiling the host code and running the Alveo U250 `hw_emu` flow. 
- **Platforms:**
  - Zynq: `xilinx_zcu102_base_202420_1`
  - Alveo: `xilinx_u250_gen3x16_xdma_4_1_202210_1`
- **Zynq Cross-Compilation Toolchain:** When targeting the ZCU102 (`TARGET=zcu102`), you must download the Xilinx ZynqMP Common Image for Vitis 2024.2.
  - Extract the `sysroot` and the boot components (`rootfs.ext4`, `Image`).
  - By default, the `Makefile` expects them at `/home/tls/xilinx/sysroots/xilinx-zynqmp-common-v2024.2`. If your paths differ, **you must export the following environment variables** before running `make`:
    ```bash
    export SYSROOT=/path/to/your/sysroots/cortexa72-cortexa53-xilinx-linux
    export COMMON_IMAGE_DIR=/path/to/your/xilinx-zynqmp-common-v2024.2
    ```

---

## Summary of Make Targets

The following table provides a quick reference for all major Makefile targets and their compatibility with the Edge (ZCU102) and PCIe (U250) workflows.

| Target | Description | ZCU102 | U250 |
|---|---|:---:|:---:|
| `host` | Compiles the host application ELF (supports variants). | ✅ | ✅ |
| `synthesis` | Runs Vitis HLS synthesis to generate HDL. | ✅ | ✅ |
| `impl` | Runs Vitis HLS implementation to generate the `.xo` kernel object. | ✅ | ✅ |
| `link-hw` | Links the `.xo` into a bitstream for real hardware execution. | ✅ | ✅ |
| `link-hwemu` | Links the `.xo` into a simulated bitstream for hardware emulation. | ✅ | ✅ |
| `emconfig` | Generates `emconfig.json` for XRT native x86 emulation. | ❌ | ✅ |
| `setup-hwemu` | Builds the QEMU base image (rootfs, kernel, boot script). | ✅ | ❌ |
| `package-hwemu` | Packages the application ELF and `.xclbin` into the QEMU image. | ✅ | ❌ |
| `inject-hwemu` | Fast-injects updated binaries into the existing QEMU FAT image. | ✅ | ❌ |
| `run-hwemu` | Launches hardware emulation (via QEMU or native x86 XRT). | ✅ | ✅ |
| `run-sw` | Runs the software-only fallback implementation natively (XRT). | ❌ | ✅ |
| `run-hw-mocked` | Runs memory-mapped DMA simulation via software kernel (XRT). | ❌ | ✅ |
| `run-hw` | Runs the application natively on the actual hardware board (XRT). | ❌ | ✅ |
| `clean` / `clean-all` | Removes local application build artifacts. | ✅ | ✅ |
| `clean-hwemu-base` | Removes the shared QEMU emulation image folder. | ✅ | ❌ |

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
| `emconfig` | Creates `emconfig.json` in `apps/_common/package_hw_emu_<target>/`. Shared across all apps — only needs the platform name. |
| `setup-hwemu` | Builds the full QEMU base image (rootfs + kernel + `launch_hw_emu.sh`) in `apps/_common/package_hw_emu_<target>/`. Requires at least one hw_emu xclbin to exist — auto-discovers any `cluster_hw_emu.xclbin` under `apps/`. Override with `SEED_XCLBIN=<path>`. Idempotent: skips if image already exists. |

---

## Hardware emulation per-app

| Target | What it does |
|---|---|
| `inject-hwemu` | Fast path (after base image exists): uses `mcopy` to replace only the xclbin and ELF in the shared FAT image. No rootfs processing. |
| `package-hwemu` | Ensures the base image exists (runs `v++ -p` once if not), then runs `inject-hwemu`. |
| `run-hwemu` | Runs `package-hwemu` then launches QEMU via `launch_hw_emu.sh`. |

---

## Zynq vs. Alveo Platforms

The Makefile supports two distinct classes of platforms, and the hardware emulation workflow differs significantly between them:

1. **Zynq Edge Platforms (e.g., ZCU102)**
   * Uses an ARM-based host architecture (`aarch64`).
   * Hardware emulation requires packaging a bootable SD card image and booting a full Linux system inside **QEMU**.
   * You will use targets like `setup-hwemu`, `package-hwemu`, and `inject-hwemu`.
2. **Alveo PCIe Platforms (e.g., `xilinx_u250_gen3x16_xdma_4_1_202210_1`)**
   * Uses an x86 host architecture.
   * Hardware emulation runs your compiled host binary *natively* on your x86 machine while the FPGA kernel is simulated. There is no QEMU involved.
   * You only need to use `emconfig` and `run-hwemu`.

The `make help` command will automatically adjust its output based on your current `TARGET` variable to show only the relevant hardware emulation commands.

---

## Cleanup

| Target | What it does |
|---|---|
| `clean` | Removes app-local build artifacts (`build/`, `vitis/`, object files, logs). Does **not** touch the shared emulator image. |
| `clean-hwemu-base` | Removes `apps/_common/package_hw_emu_<target>/` entirely. Explicit opt-in since it's shared across all apps. |

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
| `TARGET` | `zcu102` | Set to `u250` or `zcu102` to select the target platform (`PLATFORM` will be set automatically). |
| `PLATFORM` | `xilinx_zcu102_base_202420_1` | Vitis platform for linking and packaging. Automatically derived from `TARGET`. |
| `SHARED_EMU_DIR` | `apps/_common/package_hw_emu_<target>/` | Where the shared QEMU base image lives. |
| `SEED_XCLBIN` | *(empty)* | Override xclbin used by `setup-hwemu`. Auto-detected if not set. |
