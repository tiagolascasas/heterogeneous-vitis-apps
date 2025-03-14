# 2025-02-20T16:51:08.961897
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "Sysroot", value = "/home/tls/zcu102/sysroots/cortexa72-cortexa53-xilinx-linux")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "KernelImage", value = "/home/tls/zcu102/Image")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "RootFS", value = "/home/tls/zcu102/rootfs.ext4")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "sw_emu",build_comps = False)

proj.build(target = "sw_emu",build_comps = False)

comp = client.get_component("hello_world_host")

status = comp.set_sysroot(sysroot="/opt/Xilinx/xilinx-zynqmp-common-v2024.2/rootfs")

proj = proj.update_platform(platform="/tools/Xilinx/Vitis/2024.2/base_platforms/xilinx_zcu102_base_202420_1/xilinx_zcu102_base_202420_1.xpfm")

proj.build(target = "sw_emu",build_comps = False)

proj.build(target = "hw_emu",build_comps = False)

vitis.dispose()

