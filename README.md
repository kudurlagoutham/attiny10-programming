# attiny10-programming
This repo consists only programming methods that I encountered to program a attiny10 controller
1. Using Arduino Uno
2. Using USBasp programmer
3. ISP programmer.

Before proceeding check out the pin description and features of attiny10. which might give you an idea of what you are going to deal with.

1. Programming attiny10 using Arduino Uno:
This method of programming attiny10 requires:
   1. Arduino Uno
   2. 220E resistors 1/4w -4
   3. 1k resistor 1/4w
   4. LED
   5. Attiny10
   6. some wires
   7. Arduino IDE 1.8.9
   8. A zip file consisting programmer code for Uno
  
The attiny-arduino file mensions all the procedure you have to follow.
I have tried this procedure on three computers which are
1. intel dual core i5 7th gen laptop which has failed repeatedly. I don't know why?
2. intel core 2 quad q9550 pc which has worked perfectly. I got repeated success for this time.
3. intel core 2 duo desktop pc which has worked perfectly.

you can also write your code for attiny10 in atmel studio and export that .hex file to upload into attiny10. This would drastically reduce the code size. These can be seen in the photos that I have taken while doing it.

reference links:
https://youtu.be/71K1L3ZJR8g?si=tS4gFDydE-_W939v[
 https://kimio-kosaka.github.io/bitDui](https://github.com/kimio-kosaka/bitDuino10-arduinoTPI)
https://github.com/kimio-kosaka/avrboy/releases/download/v1.0.1/ATtiny4_5_9_10_20_40Programmer_2.zip


2. USBASP programmer:
This is stright forward way to upload your code. load avr dude connect your usbasp to attiny10 as shown in the following video.
components required:
1. Attiny10
2. USBASP programmer
3. some wires.

reference link:
https://youtu.be/92TCZe4MUig?si=aPFcLFuM2QmMywOe

3. ISP programmer:
This one might be little tricky. If you got the ISP programmer then you are good to proceed.
components requried:
1. Attiny10
2. ISP programmer

reference link:
https://youtu.be/ra7bT74EGUs?si=GUgLtFgwmmgdOjQc
