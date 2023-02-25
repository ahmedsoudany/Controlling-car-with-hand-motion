/*
 * UART.c
 *
 * Created: 2/15/2023 9:36:51 PM
 *  Author: LEGION
 */ 

/*************************************************_INCLUDES_********************************************/

#include "UART.h"

/**************************************************_Functions_Definitions_****************************************/

void UART_Init()
{
	// Setting our Mode Speed
	#if SPEED_MODE == NORMAL
	 UCSRA &=~(1<<1);
	#elif SPEED_MODE == DOUBLE
	UCSRA |= (1<<1);
	#endif
    // Setting our Mode Condition
	#if UART_MODE == TRANSCIEVER
	UCSRB |=(3<<3);
	#elif UART_MODE == RECIEVER
	UCSRB |=(1<<4);
	#elif UART_MODE == TRANSMITTER
	UCSRB |=(1<<3);
	#endif

	uint8 Local_u8UCSRC=0;
	#if DATA_LEN == EIGHT
	Local_u8UCSRC |= (3<<1);
	#endif

	#if PARITY_STATE == NO_PARITY
	Local_u8UCSRC &= ~ (3<<4);
	#endif

	#if STOP_STATE == ONE_STOP_BIT
	Local_u8UCSRC |= (1<<3);
	#endif

	#if CLOCK_MODE == ASYCH
	Local_u8UCSRC &=~(1<<6);
	#endif

	Local_u8UCSRC |=(1<<7);
	UCSRC = Local_u8UCSRC;

	//for calculating the BAUDRATE
	uint16 Local_u16UBRR = BUAD(BAUDRATE);

	Local_u16UBRR &=~(1<<15);

	UBRRL  = (uint8)Local_u16UBRR;
	UBRRH  = (Local_u16UBRR>>8);
}

void UART_SendChar(uint8 ch)
{
	while (!((UCSRA>>UDRE)&1));
	UDR = ch;
	
}

void UART_RecieveChar(uint8 *ch)
{
	while (!((UCSRA>>RXC)&1));
	*ch = UDR;
}
void UART_SendString(const char *st)
{
	while (*st != 0)
	{
		while (!((UCSRA>>UDRE)&1));
		UDR = *st;
		st++;
	}
}
void UART_RecieveString(char *st)
{
	uint8 i=0;
	while (!((UCSRA>>RXC)&1));
	char RX = UDR;

	while (!((UCSRA>>UDRE)&1));
		UDR = RX;

	while (RX != '\r' && RX != '\n' && RX != '\0')
	{
		
		st[i++]= RX;
		while (!((UCSRA>>RXC)&1));
		RX = UDR;

		while (!((UCSRA>>UDRE)&1));
			UDR = RX;
	}
	st[i]= '\0';

}