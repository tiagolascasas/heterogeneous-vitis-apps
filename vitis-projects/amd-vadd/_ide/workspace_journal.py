# 2025-09-08T11:42:52.317683
import vitis

client = vitis.create_client()
client.set_workspace(path="amd-vadd")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "Sysroot", value = "/home/tls/zcu102/sysroots/cortexa72-cortexa53-xilinx-linux")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "KernelImage", value = "/home/tls/zcu102/Image")

status = client.set_preference(level = "WORKSPACE", device = "ZynqMP", key = "RootFS", value = "/home/tls/zcu102/rootfs.ext4")

