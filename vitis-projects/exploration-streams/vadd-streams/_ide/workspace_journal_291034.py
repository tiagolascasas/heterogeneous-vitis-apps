# 2025-03-14T23:31:24.277220
import vitis

client = vitis.create_client()
client.set_workspace(path="vadd-streams")

client.sync_git_example_repo(name="vitis_examples")

vitis.dispose()

