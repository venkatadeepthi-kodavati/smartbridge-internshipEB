/*
 * 7 SEGMENT DISPLAY.c
 *
 * Created: 14/05/2019 9:42:55 AM
 * Author : Kodavati
 */ 
#ifndef F_CPU
#define F_CPU 1600000UL
#endif

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRA=0XFF;
    while (1) 
    {
		
		PORTA=0b01111110;//0
		_delay_ms(1000);
		PORTA=0b00000110;//1
		_delay_ms(1000);
		PORTA=0b01101101;//2
		_delay_ms(1000);
		PORTA=0b01111001;//3
		_delay_ms(1000);
		PORTA=0b00110011;//4
		_delay_ms(1000);
		PORTA=0b01011011;//5
		_delay_ms(1000);
		PORTA=0b01011111;//6
		_delay_ms(1000);
		PORTA=0b01111000;//7
		_delay_ms(1000);
		PORTA=0b01111111;//8
		_delay_ms(1000);
		PORTA=0b01111011;//9
		_delay_ms(1000);
		PORTA=0b01110111;//A
		_delay_ms(1000);
		PORTA=0b00011111;//b
		_delay_ms(1000);
		PORTA=0b01001110;//c
		_delay_ms(1000);
		PORTA=0b00111101;//d
		_delay_ms(1000);
		PORTA=0b01001111;//E
		_delay_ms(1000);
		PORTA=0b01000111;//f
		_delay_ms(1000);
		PORTA=0b00110111;//h
		_delay_ms(1000);
		PORTA=0b00001110;//L
		_delay_ms(1000);
		PORTA=0b01100111;//p
		_delay_ms(1000);
		
    }
}

