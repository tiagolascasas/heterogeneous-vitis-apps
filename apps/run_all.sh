#!/bin/bash
set -o pipefail
# Configuration
APPS=("disparity", "tracking")
TARGET="u250"
DRY_RUN=0 # Set to 1 to mock the build, 0 for actual build
DISCORD_WEBHOOK="https://discord.com/api/webhooks/1523885903972401314/NX7EAVwxvQPhqwqEf0TxRKcS12Jz4iRXwPQF6Wc5lZuu5eItl7IseV0d7jaTxehr2DTx" # <--- PASTE YOUR DISCORD WEBHOOK URL HERE

send_discord() {
    local message=$1
    local file_path=$2
    if [ -n "$DISCORD_WEBHOOK" ]; then
        local json_payload="{\"content\": \"$message\", \"allowed_mentions\": {\"users\": [\"181856952324718594\"]}}"
        if [ -n "$file_path" ] && [ -f "$file_path" ]; then
            curl -F "payload_json=$json_payload" \
                 -F "file=@$file_path" \
                 "$DISCORD_WEBHOOK" &> /dev/null
        else
            curl -H "Content-Type: application/json" \
                 -X POST \
                 -d "$json_payload" \
                 "$DISCORD_WEBHOOK" &> /dev/null
        fi
    fi
}

echo "Starting batch build for all applications..."

for app in "${APPS[@]}"; do
    echo "============================================================"
    echo "Starting build for $app at $(date)"
    echo "============================================================"
    
    cd "$app" || { echo "Failed to enter directory $app"; continue; }
    
    # Ensure a clean state before starting the build
    if [ "$DRY_RUN" -eq 0 ]; then
        echo "Cleaning previous build artifacts for $app..."
        make clean-all > /dev/null 2>&1
    fi
    
    # Create a log file specifically for this app's run
    LOG_FILE="build_log_${app}.txt"
    
    # Run the build, capturing both stdout and stderr
    # We use stdbuf to unbuffer output so the log is written in real time
    if [ "$DRY_RUN" -eq 1 ]; then
        echo "[DRY RUN] Mocking build process for $app..." | tee "$LOG_FILE"
        echo "[DRY RUN] Build finished successfully." | tee -a "$LOG_FILE"
        sleep 1 # simulate some time passing
    else
        make link-hw TARGET=$TARGET 2>&1 | tee "$LOG_FILE"
    fi
    
    if [ $? -eq 0 ]; then
        STATUS="SUCCESS"
        echo "$app build completed SUCCESSFULLY."
        
        # Backup the vitis folder and log to preserve reports before they are cleaned
        TIMESTAMP=$(date +%Y%m%d_%H%M%S)
        mkdir -p backups
        cp -r vitis backups/vitis_$TIMESTAMP 2>/dev/null || true
        cp "$LOG_FILE" backups/build_log_${TIMESTAMP}.txt 2>/dev/null || true
    else
        STATUS="FAILED"
        echo "$app build FAILED. Check $LOG_FILE for details."
    fi
    
    # Send Discord notification with log attachment (uncompressed as requested)
    if [ "$STATUS" == "SUCCESS" ]; then
        send_discord "✅ <@181856952324718594> **$app** build completed SUCCESSFULLY!" "$LOG_FILE"
    else
        send_discord "❌ <@181856952324718594> **$app** build FAILED! Check the attached log file for details." "$LOG_FILE"
    fi
    
    # Clean up intermediate files (leaving bitstream intact thanks to updated Makefile)
    if [ "$DRY_RUN" -eq 0 ]; then
        echo "Cleaning up intermediate files to save disk space..."
        make clean > /dev/null 2>&1
    fi
    
    # Go back to the apps directory for the next iteration
    cd ..
done

echo "Batch build completed at $(date)."
send_discord "🏁 <@181856952324718594> **Batch build for all applications completed!**"
