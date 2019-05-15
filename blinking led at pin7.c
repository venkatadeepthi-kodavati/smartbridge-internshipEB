/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 14:14:56
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL  //16MHz clock speed
#endif


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA=0XFF;
	DDRB=0XFF;
	DDRC=0XFF;
	DDRD=0XFF;
	while(1){
		PORTA=1<< PA7;
		PORTB=1<< PB7;
		PORTC=1<< PC7;
		PORTD=1<< PD7;
		//_delay_ms(500);
		//PORTA=0X00;
	//	_delay_ms(500);
	
	

    }
}

