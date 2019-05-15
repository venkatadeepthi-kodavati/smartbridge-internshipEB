/*
 * GccApplication4.c
 *
 * Created: 10-05-2019 10:37:46
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRB=0XFF;
    while (1) 
    {
		PORTB=0XAA;
    }
}

