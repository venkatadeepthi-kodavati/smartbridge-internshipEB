/*
 * servomotor.c
 *
 * Created: 16-05-2019 14:54:22
 * Author : Kodavati
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);
	TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10);
	ICR1=4999;
	DDRD|=(1<<PD5);
    while (1) 
    {
		OCR1A=97;
		_delay_ms(500);
		
		OCR1A=280;
		_delay_ms(500);
		
		OCR1A=535;
		_delay_ms(500);
    }
}



















