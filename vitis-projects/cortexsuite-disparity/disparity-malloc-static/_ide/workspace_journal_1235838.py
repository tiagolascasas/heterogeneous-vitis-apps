# 2025-03-27T02:49:10.257690
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-static")

vitis.dispose()

