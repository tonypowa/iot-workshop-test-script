# iot-workshop-test-script

## What's this?

This repository contains a test script for PlatformIO-based projects, designed to help you verify whether your operating system can detect a specific USB serial device.

You can simulate the USB serial detection process by using any USB-to-Serial adapter or device with a USB-to-UART chip, such as Arduino board, ESP32 development board, etc 


## How to Run the Test

1. Download and install VSCode
1. Install the PlatformIO extension in VSCode
1. Clone the repo with a test script
   ```git clone https://github.com/tonypowa/iot-workshop-test-script.git```
1. Open the folder in VSCode with PlatformIO extension installed.
1. Wait for PlatformIO to automatically install dependencies, including libraries and board support packages 
1. At the top right corner, click the checkmark icon to Build.
1. Click the arrow icon to try Upload.
1. Use the plug icon to Start Serial Monitor — if a device is connected, you should see the follwing output:

    ```
    ✅ Serial is working! Hello from M5Atom test sketch.
    Looping...
    Looping...
    ```

## Use case recap
- Confirms PlatformIO works
- Confirms VSCode detects ports
- Validates serial monitor
- Simulates firmware upload flow

