# 2025-03-27T14:59:44.622955
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-static")

vitis.dispose()

