# 2025-03-27T15:00:13.426271
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-static")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="IMPLEMENTATION")

