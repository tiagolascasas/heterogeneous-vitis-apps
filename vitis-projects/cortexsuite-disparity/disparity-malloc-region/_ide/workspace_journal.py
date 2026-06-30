# 2025-03-27T18:10:24.063501
import vitis

client = vitis.create_client()
client.set_workspace(path="disparity-malloc-region")

comp = client.get_component(name="disparity_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

