# 2025-03-20T03:05:41.943327
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-static")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="IMPLEMENTATION")

