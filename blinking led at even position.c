/*
 * GccApplication3.c
 *
 * Created: 10-05-2019 09:48:31
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRA=0XFF;
	
    while (1) 
	{
		PORTA=0x55;
		
	}
}

