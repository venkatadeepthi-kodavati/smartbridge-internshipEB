/*
 * GccApplication9.c
 *
 * Created: 10-05-2019 12:37:51
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRA=0XFF;
	
    while (1)
	    {
			PORTA=1<<PA0;
			_delay_ms(1000);
			PORTA=1<<PA1;
			_delay_ms(1000);
			PORTA=1<<PA2;
			_delay_ms(1000);
			PORTA=1<<PA3;
			_delay_ms(1000);
			PORTA=1<<PA4;
			_delay_ms(1000);
			PORTA=1<<PA5;
			_delay_ms(1000);
			PORTA=1<<PA6;
			_delay_ms(1000);
			PORTA=1<<PA7;
			_delay_ms(1000);
			PORTA=1<<PA7;
			_delay_ms(1000);
			PORTA<<PA6;
			_delay_ms(1000);
			PORTA=1<<PA5;
			_delay_ms(1000);
			PORTA=1<<PA4;
			_delay_ms(1000);
			PORTA=1<<PA3;
			_delay_ms(1000);
			PORTA=1<<PA2;
			_delay_ms(1000);
			PORTA=1<<PA1;
			_delay_ms(1000);
		}
}

