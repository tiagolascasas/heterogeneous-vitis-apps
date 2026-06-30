# 2025-02-21T00:05:37.221602
import vitis

client = vitis.create_client()
client.set_workspace(path="spam-filter-with-debugging")

comp = client.get_component(name="spam-filter_cluster")
comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="SYNTHESIS")

comp.run(operation="IMPLEMENTATION")

vitis.dispose()

