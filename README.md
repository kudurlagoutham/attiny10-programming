# attiny10-programming
This repo consists only of programming methods that I encountered to program an attiny10 controller
1. Using Arduino Uno
2. Using a USBasp programmer
3. ISP programmer.

Before proceeding, check out the pin description and features of the attiny10. This might give you an idea of what you are going to deal with.

1. Programming attiny10 using Arduino Uno:
This method of programming the attiny10 requires:
   1. Arduino Uno
   2. 220E resistors 1/4w -4
   3. 1k resistor 1/4w
   4. LED
   5. Attiny10
   6. Some wires
   7. Arduino IDE 1.8.9
   8. A zip file consisting of programmer code for Uno
  
The attiny-arduino file mentions all the procedures you have to follow.
I have tried this procedure on three computers, which are
1. Intel dual-core i5 7th gen laptop, which has failed repeatedly. I don't know why.
2. Intel Core 2 quad q9550 pc, which has worked perfectly. I got repeated success this time.
3. Intel Core 2 Duo desktop pc which has worked perfectly.


There is another resource (attiny10 programming arduino as tpi) which will convert Arduino Uno into a TPI programmer. But this can convert Uno into a permanent TPI programmer, and after this step, if you want to recover your Uno, you will have to burn the bootloader into Arduino Uno. You have to use another Arduino Uno or Nano to burn the programming.

You can also write your code for ATtiny10 in Atmel Studio and export that .hex file to upload into attiny10. This would drastically reduce the code size. These can be seen in the photos that I have taken while doing it.

Reference links:
https://youtu.be/71K1L3ZJR8g?si=tS4gFDydE-_W939v[
 https://kimio-kosaka.github.io/bitDui](https://github.com/kimio-kosaka/bitDuino10-arduinoTPI)
https://github.com/kimio-kosaka/avrboy/releases/download/v1.0.1/ATtiny4_5_9_10_20_40Programmer_2.zip


2. USBASP programmer:
This is a straightforward way to upload your code. load avr dude; connect your USBASP to Attiny10 as shown in the following video.
Components required:
1. Attiny10
2. USBASP programmer
3. Some wires.

Reference link:
https://youtu.be/92TCZe4MUig?si=aPFcLFuM2QmMywOe

3. ISP programmer:
This one might be a little tricky. If you have the ISP programmer, then you are good to proceed.
Components required:
1. Attiny10
2. ISP programmer

Reference link:
https://youtu.be/ra7bT74EGUs?si=GUgLtFgwmmgdOjQc
