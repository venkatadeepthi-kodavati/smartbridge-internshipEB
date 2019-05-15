/*
 * timer0 delay.c
 *
 * Created: 15-05-2019 10:32:15
 * Author : Hp
 */ 

#include <avr/io.h>
#define LED PB0
int main(void)
{
	uint8_t timeroverflowcount= 0;
	DDRB=0xff;
	TCNT0=0x00;
	TCCR0=(1<<CS00)|(1<<CS02);
	while(1)
	{
		while((TIFR&0x01)==0);
		TCNT0=0X00;
		TIFR=0X01;
		timeroverflowcount++;
		if(timeroverflowcount>=100){
			PORTB^=(0X01<<LED);
			timeroverflowcount=0;
			
		}
	}
}

