/*
 * GccApplication6.c
 *
 * Created: 10-05-2019 11:18:28
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRC|=(1<<PC0);
	DDRD&=(1<<PD0);
    while (1) 
    {
		if((PIND&(1<<PD0))==0){
			PORTC|=(1<<PC0);
			_delay_ms(3000);
			PORTC&=~(1<<PC0);
			//_delay_ms(1000);
		}
    }
}

