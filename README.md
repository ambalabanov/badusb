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

This core can be installed using the boards manager. 

1. File --> Preferences, enter the above URL in "Additional boards manager URLs"
   
`http://drazzy.com/package_drazzy.com_index.json`

![image](https://github.com/user-attachments/assets/a72f8496-3f36-468f-ad02-d3fb005e1992)
   
2. Tools -> Board -> Boards Manager...
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

1. File --> Open...
2. Sketch --> Upload Using Programmer

## Test connection
```
sudo dmesg --follow
[50149.578603] usb 1-2: new low-speed USB device number 23 using xhci_hcd
[50149.726654] usb 1-2: New USB device found, idVendor=16c0, idProduct=27db, bcdDevice= 1.00
[50149.726663] usb 1-2: New USB device strings: Mfr=1, Product=2, SerialNumber=0
[50149.726666] usb 1-2: Product: DigiKey
[50149.726669] usb 1-2: Manufacturer: digistump.com
[50149.730418] input: digistump.com DigiKey as /devices/pci0000:00/0000:00:14.0/usb1/1-2/1-2:1.0/0003:16C0:27DB.0007/input/input19
[50149.785621] hid-generic 0003:16C0:27DB.0007: input,hidraw2: USB HID v1.01 Keyboard [digistump.com DigiKey] on usb-0000:00:14.0-2/input0

lsusb
Bus 001 Device 023: ID 16c0:27db Van Ooijen Technische Informatica Keyboard

```
