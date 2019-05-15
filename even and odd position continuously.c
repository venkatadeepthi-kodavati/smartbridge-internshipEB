/*
 * GccApplication8.c
 *
 * Created: 10-05-2019 12:29:38
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
	PORTA=0XFF;
    while (1) 
    {
		PORTA=0X55;
		_delay_ms(1000);
		PORTA=0XAA;
		_delay_ms(1000);
    }
}

