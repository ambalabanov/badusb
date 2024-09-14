# Digispark ATtiny85 BadUSB

## Clone repo
```
git clone --recurse-submodules https://github.com/ambalabanov/badusb.git
```
## Software
- Arduino IDE 2.3.2
  
## Hardware
- Digispark ATtiny85
- AVR USBASP 2.0 programmer
  
## Boards Manager Installation

This core can be installed using the boards manager. The boards manager URL is:

`http://drazzy.com/package_drazzy.com_index.json`

1. File->Preferences on a PC, or Arduino->Preferences on a Mac, enter the above URL in "Additional Boards Manager URLs"
2. Tools -> Boards -> Boards Manager...
3. Select "ATTinyCore by Spence Konde" and click "Install"

![image](https://github.com/user-attachments/assets/4d2b08db-ca7a-43cb-9056-6c654d3edba4)


## Libraries Installation

```
mkdir -p ~/Arduino/libraries
cp -r DigistumpArduino/digistump-avr/libraries/* ~/Arduino/libraries/
```

## Setup udev rules 

```
sudo cp 99-USBasp.rules /etc/udev/rules.d/
sudo udevadm control --reload
```
## Connect Digispark to USBASP
![digi-pins-1024x403](https://github.com/user-attachments/assets/47889380-2f17-469f-9ef7-e213471dde2a)

## Configure Board in Arduino IDE
![board-setup](https://github.com/user-attachments/assets/4f8a271c-ca0d-447e-9936-66559471af9c)

## Compile & Upload Digispark-badusb.ino sketch

```
File --> Open...
Sketch --> Upload Using Programmer
```
