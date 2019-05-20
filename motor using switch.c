/*
 * DC MOTOR using switch.c
 *
 * Created: 15-05-2019 15:47:51
 * Author : Kodavati
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include<util/delay.h>

void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
}

int main(void)
{
	/* Replace with your application code */
	DDRD=0xff;
	DDRD&=~(1<<PD0);
	DDRD&=~(1<<PD1);
	DDRB=0xff;
	
	PWM_init();
	while (1)
	{
			
			if((PIND&(1<<PD0))==0){
				PORTB=(1<<PB3);
				PORTB&=~(1<<PB0);
				OCR0=150;
			_delay_ms(1000);
			}
			if((PIND&(1<<PD1))==0){
				PORTB=(1<<PB3);
				PORTB&=~(1<<PB0);
				OCR0=200;
			_delay_ms(1000);
			}
	}
}









