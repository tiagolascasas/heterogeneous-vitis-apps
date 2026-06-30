# 2025-02-26T23:36:49.231020
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "Sysroot", value = "/home/tls/zcu102/sysroots/cortexa72-cortexa53-xilinx-linux")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "KernelImage", value = "/home/tls/zcu102/Image")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "RootFS", value = "/home/tls/zcu102/rootfs.ext4")

comp = client.get_component(name="hello_world_vadd")
comp.run(operation="IMPLEMENTATION")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="IMPLEMENTATION")

