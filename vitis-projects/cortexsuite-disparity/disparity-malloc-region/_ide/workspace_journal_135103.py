# 2025-03-27T16:33:37.230252
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-region")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

