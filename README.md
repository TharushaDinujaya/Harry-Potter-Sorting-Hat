# Sorting Hat using Arduino Pro Mini

## Components Required

1. **Arduino Pro Mini**
   - ![Arduino Pro Mini](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/Arduino-Promini.jpeg)
2. **Stereo Amplifier**
   - ![Stereo Amplifier](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/Amplifier.jpg)
3. **DFPlayer Mini MP3 Player Module**
   - ![DFPlayer Mini](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/DFPlayer.jpeg)
4. **TP4056 LiPo Battery Charger Module**
   - ![TP4056 Charger Module](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/TP4056.jpeg)
5. **Ultrasonic Sensor**
   - ![Ultrasonic Sensor](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/ultrasonic-sensor.jpeg)
6. **LiPo Battery**
7. **Speakers**
8. **Connecting Wires and Breadboard (optional for testing)**

## Circuit Schematic Diagram

![Circuit Schematic Diagram](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/Schematic_Sorting-Hat_2024-06-03.png)

## PCB Component Diagram

![PCB Component Diagram](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/Schematics.png)

## PCB 2D View

![PCB 2D View](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/2DVIew.png)

## PCB 3D View

![PCB 3D View](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/3DView.png)

## Final Design

![Final Design](https://github.com/TharushaDinujaya/Harry-Potter-Sorting-Hat/blob/main/docs/FinalDesign.jpg)

## How to Work

### Assembly

1. Assemble the circuit as per the schematic diagram.
2. Connect the components to the PCB as shown in the PCB component diagram.
3. Ensure all connections are secure.

### Programming

1. Connect the switch to UNO programming mode.
2. Connect the **TX**, **RX**, **RST**, and **GND** pins of the Arduino Pro Mini to the **TX**, **RX**, **RST**, and **GND** pins on the Arduino UNO board respectively.
3. Connect the Arduino UNO to your PC using a USB Type B cable.
4. Open the Arduino IDE and select **Arduino Pro Mini** as the board.
5. Choose the correct port.
6. Upload your code to the Arduino Pro Mini.
7. Once the upload is complete, disconnect the cables from the UNO and toggle the switch to switch off programming mode.

### Operation

1. Insert a micro SD card with the audio files into the DFPlayer module. You can use any MP3 or WAV audio files. For details on the DFPlayer module and audio file naming, refer to the [DFRobot DFPlayer Mini Manual](https://www.manualslib.com/manual/1731781/Dfrobot-Dfplayer-Mini.html?page=1#manual).
2. Power on the circuit using the LiPo battery.
3. The ultrasonic sensor will detect when a person is near, triggering the audio playback through the speakers.
4. Once an audio starts playing, it will not start another audio until the current audio is finished.

For any queries or support, please open an issue in this repository or contact us at tharushad.21@cse.rt.ac.lk
