# Custom 65% Keyboard PCB
![KiCad](https://img.shields.io/badge/KiCad-FFFFFF?style=flat-square&logo=kicad&logoColor=blue)
![QMK](https://img.shields.io/badge/QMK-111111?style=flat-square)
![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Fusion 360](https://img.shields.io/badge/Fusion_360-F37021?style=flat-square&logo=autodesk&logoColor=white)

<img width="1998" height="628" alt="Untitled design" src="https://github.com/user-attachments/assets/49b0c581-1046-4984-af14-0e053fa2ca6a" />



## Repository Structure

```text
├── Hardware/          # Schematic, PCB, and gerber files
├── Firmware/          # Firmware files
└── Libraries_And_Datasheets/              # Datasheets and libraries (from ai03) for keyboard parts. 
```

## Purpose & Motivation

When I was 15, I bought my first custom mechanical keyboard: a QK60 from Qwertykeys alongside Gateron yellow switches and some cheap keycaps I found on amazon. However, I encountered a problem when I accidently took out the PCB with the JST connector still plugged in, ripping the socket on the daughterboard (where the usb-c connecter was). Devastated, this experience essentially drove me into PCB design through online guides and communities. 2 years later, I with more PCB design experience, I decided to create my own 65% keyboard (my personal favorite form factor, who uses the numpad anyways, am I right!?).     

## Design

### Component List (BOM)
1. ATmega32U4 8-bit AVR Microcontroller ([Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7766-8-bit-AVR-ATmega16U4-32U4_Datasheet.pdf))
2. ECS-160 16.000MHz SMD Crystal 3225 4-Pin ([Datasheet](https://ecsxtal.com/store/pdf/ECX-32.pdf))
3. GCT USB4105-GF-A USB-C Receptacle 16P SMD RA ([Datasheet](https://gct.co/files/drawings/usb4105.pdf))
4. Keyboard Switches (MX, taken from ai03's library)
5. 1N4148 / 1N4148W Switching Diodes
6. Passives & Miscellaneous Hardware:
   - Capacitors (0805, Ceramic)
   - Resistors (0805)
   - Tactile Push Button (Reset Switch)

### PCB, Schematic, 3D Render

The full PCB was designed with KiCAD

<img width="1717" height="1180" alt="Screenshot 2026-09-26 211233" src="https://github.com/user-attachments/assets/83821787-8404-47f2-b2bc-27140c5ec284" />
<img width="1740" height="1191" alt="Screenshot 2026-09-26 211316" src="https://github.com/user-attachments/assets/7f4ce022-f7bd-473e-a125-6ead5dcbe6cc" />
<img width="1752" height="607" alt="Screenshot 2026-09-26 211807" src="https://github.com/user-attachments/assets/34a8a07c-26a6-4ea7-9a42-f1c6bba7e6c9" />
<img width="2005" height="647" alt="Screenshot 2026-09-26 211910" src="https://github.com/user-attachments/assets/7e07ea34-a3ec-432c-85e4-c757e3fc0d7e" />

## Firmware

The firmware for this keyboard is built using QMK. While the framework is C-based, configuring the board primarily involved utilizing the standard QMK file structure to define the hardware and layout:
* **`info.json` & `config.h`:** Keyboard matrix, MCU definitions, and hardware config.
* **`rules.mk`:** Bootloader selection.
* **`keymap.c`:** Keymap and layer definitions (able to change config with VIA) .

