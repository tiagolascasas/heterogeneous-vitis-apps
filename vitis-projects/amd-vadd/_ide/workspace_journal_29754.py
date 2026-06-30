# 2025-06-10T02:40:20.487204
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "Sysroot", value = "/home/tls/zcu102/sysroots/cortexa72-cortexa53-xilinx-linux")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "KernelImage", value = "/home/tls/zcu102/Image")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "RootFS", value = "/home/tls/zcu102/rootfs.ext4")

proj = client.get_sys_project(name="hello_world")

proj.build(target = "hw",build_package = True,build_comps = False)

proj.build(target = "hw",build_package = True,build_comps = False)

