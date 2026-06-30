# 2025-06-05T03:10:41.902289
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "Sysroot", value = "/home/tls/zcu102/sysroots/cortexa72-cortexa53-xilinx-linux")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "KernelImage", value = "/home/tls/zcu102/Image")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "RootFS", value = "/home/tls/zcu102/rootfs.ext4")

comp = client.get_component(name="hello_world_host")
comp.build(target="x86sim")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "hw",comp_name = ["hello_world_host", "hello_world_vadd"],build_comps = False)

comp.build(target="hw")

comp.build(target="hw")

comp.build(target="hw")

vitis.dispose()

