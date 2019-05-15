 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#define RS 7
#define E 5


#include <avr/io.h>
#include <util/delay.h>

	void send_command(unsigned char command)
	{
		PORTC= command;
		PORTD&=~(1<<RS);
		PORTD|=(1<<E);
		_delay_ms(50);
		PORTD &=~(1<<E);
		PORTC=0;
	}
	void send_character(unsigned char character)
	{
		PORTC= character;
		PORTD |=(1<<RS);
		PORTD |=(1<<E);
		_delay_ms(50);
		PORTD &=~(1<<E);
		PORTC=0;
	}


int main()
{
	DDRC=0XFF;
	DDRD=0XFF;
	_delay_ms(50);

	send_command(0X01);
	send_command(0X38);
	send_command(0X0E);  
	
	send_character(0X4B);
    send_character(0X61);
    send_character(0X69);
	send_character(0X6C);
	send_character(0X65);
	send_character(0X73);
	send_character(0X77);
	send_character(0X61);
	send_character(0X72);
	send_character(0X69);
	
}

