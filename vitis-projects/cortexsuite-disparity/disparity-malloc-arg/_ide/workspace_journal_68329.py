# 2025-03-27T15:12:36.175431
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-arg")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

