# Digispark ATtiny85 BadUSB

## Clone repo
```
git clone --recurse-submodules https://github.com/ambalabanov/badusb.git
```
## Software
- Arduino IDE 2.3.2
- avrdude version 8.0
  
## Hardware
- Digispark ATtiny85
- AVR USBASP 2.0 programmer
  
## Boards Manager Installation

This core can be installed using the boards manager. The boards manager URL is:

`http://drazzy.com/package_drazzy.com_index.json`

1. File->Preferences on a PC, or Arduino->Preferences on a Mac, enter the above URL in "Additional Boards Manager URLs"
2. Tools -> Boards -> Boards Manager...
3. Select "ATTinyCore by Spence Konde" and click "Install"

## Libraries Installation

```
mkdir -p ~/Arduino/libraries
cp -r DigistumpArduino/digistump-avr/libraries/* ~/Arduino/libraries/
```

## udev rules Setup

```
sudo cp 99-USBasp.rules /etc/udev/rules.d/
sudo udevadm control --reload

```


