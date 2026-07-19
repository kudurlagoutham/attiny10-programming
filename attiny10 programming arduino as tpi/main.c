/*
 * attiny10_Blink_trimmer.c
 *
 * Created: 12-07-2026 11:12:04
 * Author : PC
 */ 
#define F_CPU 8000000UL


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	/*PB0 AS OUTPUT*/
	DDRB |=(1 << PB0);
	
	TCCR0A = (1 << COM0A1) | (1 << WGM00);
	TCCR0B = (1 << WGM02) | (1 << CS00);
	
	uint8_t brightness = 0;
	int8_t fadeamount = 1;
	
	
	
    /* Replace with your application code */
    while (1) 
    {
		
		OCR0A = brightness;
		
		brightness += fadeamount;
		
		if(brightness == 0 || brightness == 255){
			fadeamount = -fadeamount;
		}
		_delay_ms(20);
    }
}

