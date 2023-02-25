/*
 * DIO.c
 *
 * Created: 2/15/2023 7:00:00 PM
 *  Author: LEGION
 */ 



#include "DIO.h"

void DIO_PinDir(DIO_PORT Port, DIO_Pin Pin, DIO_State Dir)
{
	if (Port <= DIO_PortD && Pin <= DIO_PIN7 && Dir <= DIO_OUTPUT)
	{
		switch (Dir)
		{
			case DIO_PortA:
			DDRA &= ~(DIO_BIT_MASK << Pin);
			DDRA |=  (Dir << Pin);
			break;
			case DIO_PortB:
			Clr_Bit(DDRB,Pin);
			Set_Bit(DDRB,Pin);
			break;
			case DIO_PortC:
			Clr_Bit(DDRC,Pin);
			Set_Bit(DDRC,Pin);
			break;
			case DIO_PortD:
			Clr_Bit(DDRD,Pin);
			Set_Bit(DDRD,Pin);
			break;
		}
	}
}

void DIO_PinVal(DIO_PORT Port, DIO_Pin Pin, DIO_Level Val)
{
	if (Port <= DIO_PortD && Pin <= DIO_PIN7 && Val <= DIO_HIGH)
	{
		switch (Port)
		{
			case DIO_PortA:
			PORTA &= ~(DIO_BIT_MASK << Pin);
			PORTA |=  (Val << Pin);
			break;
			case DIO_PortB:
			PORTB &= ~(DIO_BIT_MASK << Pin);
			PORTB |=  (Val << Pin);
			break;
			case DIO_PortC:
			PORTC &= ~(DIO_BIT_MASK << Pin);
			PORTC |=  (Val << Pin);
			break;
			case DIO_PortD:
			PORTD &= ~(DIO_BIT_MASK << Pin);
			PORTD |=  (Val << Pin);
			break;
		}
	}
}

void DIO_TogglePinValue(DIO_PORT Port, DIO_Pin Pin)
{
	if (Port <= DIO_PortD && Pin <= DIO_PIN7 )
	{
		switch (Port)
		{
			case DIO_PortA:
			Tog_Bit(PORTA,Pin);
			break;
			case DIO_PortB:
			Tog_Bit(PORTA,Pin);
			break;
			case DIO_PortC:
			Tog_Bit(PORTA,Pin);
			break;
			case DIO_PortD:
			Tog_Bit(PORTD,Pin);
			break;
		}
	}
}

uint8 DIO_GetPinValue(DIO_PORT Port, DIO_Pin Pin, uint8 * Pin_Val)
{
	uint8 data;
	if (Pin_Val != 0)
	{
		if (Port <= DIO_PortD && Pin <= DIO_PIN7)
		{
			switch (Port)
			{
				case DIO_PortA:
				*Pin_Val = Get_Bit(PORTA,Pin);
				break;
				case DIO_PortB:
				*Pin_Val = Get_Bit(PORTB,Pin);
				break;
				case DIO_PortC:
				*Pin_Val = Get_Bit(PORTC,Pin);
				break;
				case DIO_PortD:
				*Pin_Val = Get_Bit(PORTD,Pin);
				break;
			}
		}
	}
	data = &Pin_Val;
	return data;
}
















