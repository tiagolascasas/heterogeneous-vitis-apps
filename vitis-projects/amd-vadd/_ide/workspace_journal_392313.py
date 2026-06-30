# 2025-06-05T01:07:53.102197
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "Sysroot", value = "/home/tls/zcu102/sysroots/cortexa72-cortexa53-xilinx-linux")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "KernelImage", value = "/home/tls/zcu102/Image")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "RootFS", value = "/home/tls/zcu102/rootfs.ext4")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "sw_emu",comp_name = ["hello_world_vadd", "hello_world_host"],build_comps = False)

comp = client.get_component(name="hello_world_host")
comp.build(target="x86sim")

comp.build(target="x86sim")

vitis.dispose()

