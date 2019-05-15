/*
 * GccApplication12.c
 *
 * Created: 13-05-2019 09:52:18
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>

#define LED_OUTPUT 
#define PIR_Input PINC

int main(void)
{
    
	DDRC=0x00;
	DDRB=0xff;
    while (1) 
    {
		LED_OUTPUT=PIR_Input;
    }
}

