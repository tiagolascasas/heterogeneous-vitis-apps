# 2025-02-20T22:18:06.485505
import vitis

client = vitis.create_client()
client.set_workspace(path="llama2-everything")

comp = client.get_component(name="llama2_cluster")
comp.run(operation="IMPLEMENTATION")

