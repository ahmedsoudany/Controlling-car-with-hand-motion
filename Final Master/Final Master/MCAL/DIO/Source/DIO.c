/*
 * DIO.c
 *
 * Created: 2/15/2023 7:00:00 PM
 *  Author: LEGION
 */ 

/**************************************************_Includes_*********************************************/

#include "DIO.h"

/**************************************************_Functions_Definitions_****************************************/

void DIO_WritePinDir(DIO_PIN Pin,DIO_Dir Dir)
{
	{
		DIO_PORT Port = Pin / 8;
		DIO_PIN  Pin_No =   Pin % 8;
		
		switch(Port)
		{
			case DIO_PORTA:
			if(Dir == Output)
			{
				SetBit(PORTA_REG,Pin_No);
			}
			else
			{
				ClrBit(PORTA_REG,Pin_No);
			}
			break;
			case DIO_PORTB:
			if(Dir == Output)
			{
				SetBit(PORTB_REG,Pin_No);
			}
			else
			{
				ClrBit(PORTB_REG,Pin_No);
			}
			break;
			
			case DIO_PORTC:
			if(Dir == Output)
			{
				SetBit(PORTC_REG,Pin_No);
			}
			else
			{
				ClrBit(PORTC_REG,Pin_No);
			}
			break;
			case DIO_PORTD:
			if(Dir == STD_High)
			{
				SetBit(PORTD_REG,Pin_No);
			}
			else
			{
				ClrBit(PORTD_REG,Pin_No);
			}
			break;
		}
	}
}
void DIO_WritePin(DIO_PIN Pin,STD_Level Level)
{
	DIO_PORT Port = Pin / 8;
	DIO_PIN  Pin_No =   Pin % 8;
	
	switch(Port)
	{
		case DIO_PORTA:
		if(Level == STD_High)
		{
			SetBit(PORTA_REG,Pin_No);
		}
		else
		{
			ClrBit(PORTA_REG,Pin_No);
		}
		break;
		case DIO_PORTB:
		if(Level == STD_High)
		{
			SetBit(PORTB_REG,Pin_No);
		}
		else
		{
			ClrBit(PORTB_REG,Pin_No);
		}
		break;
		
		case DIO_PORTC:
		if(Level == STD_High)
		{
			SetBit(PORTC_REG,Pin_No);
		}
		else
		{
			ClrBit(PORTC_REG,Pin_No);
		}
		break;
		case DIO_PORTD:
		if(Level == STD_High)
		{
			SetBit(PORTD_REG,Pin_No);
		}
		else
		{
			ClrBit(PORTD_REG,Pin_No);
		}
		break;
	}
}
STD_Level DIO_ReadPin(DIO_PIN Pin)
{
	
	uint8 Port = Pin / 8;
	uint8 Pin_No  = Pin % 8;
	STD_Level Value = 0x00;
	switch(Port)
	{
		case DIO_PORTA: Value = GetBit(PINA_REG,Pin_No); break;
		case DIO_PORTB: Value = GetBit(PINB_REG,Pin_No); break;
		case DIO_PORTC: Value = GetBit(PINC_REG,Pin_No); break;
		case DIO_PORTD: Value = GetBit(PINB_REG,Pin_No); break;
	}
	
	return Value;
}

void DIO_WritePort(DIO_PORT Port,uint8 Port_Value)
{
	switch(Port)
	{
		case DIO_PORTA: PORTA_REG = Port_Value; break;
		case DIO_PORTB: PORTB_REG = Port_Value; break;
		case DIO_PORTC: PORTC_REG = Port_Value; break;
		case DIO_PORTD: PORTD_REG = Port_Value; break;
	}
}

uint8 DIO_ReadPort(DIO_PORT Port)
{
	uint8 Data = 0x00;
	switch(Port)
	{
		case DIO_PORTA: Data = PORTA_REG; break;
		case DIO_PORTB:	Data = PORTB_REG; break;
		case DIO_PORTC: Data = PORTC_REG; break;
		case DIO_PORTD:	Data = PORTD_REG; break;
	}
	return Data;
}

void DIO_ToggleChannel(DIO_PIN Pin)
{
	DIO_PORT Port = Pin / 8;
	DIO_PIN Pin_No =   Pin % 8;
	
	switch(Port)
	{
		case DIO_PORTA: TogBit(PINA_REG,Pin_No);
		break;
		case DIO_PORTB: TogBit(PINB_REG,Pin_No);
		break;
		case DIO_PORTC: TogBit(PINC_REG,Pin_No);
		break;
		case DIO_PORTD: TogBit(PINB_REG,Pin_No);
		break;
	}
	
}
