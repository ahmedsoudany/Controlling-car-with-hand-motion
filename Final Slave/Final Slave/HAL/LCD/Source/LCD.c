/*
 * LCD.c
 *
 * Created: 2/16/2023 2:14:41 PM
 *  Author: LEGION
 */ 


/**************************************************_Includes_*********************************************/
#include "DIO.h"
#include "LCD.h"
#include "Clock.h"

/**************************************************_Functions_Definitions_*********************************************/
#ifdef LCD_8bit

void LCD_en(void)
{
	Set_Bit(PORTB,LCD_E);
	_delay_ms(2);
	Clr_Bit(PORTB,LCD_E);
	_delay_ms(2);
}

void LCD_cmd(uint8 cmd)
{
	Clr_Bit(PORTB,LCD_Rs);
	PORTA = cmd;
	LCD_en();
}
void LCD_data(uint8 data)
{
	Set_Bit(PORTB,LCD_Rs);
	PORTA = data;
	LCD_en();
}
void LCD_init(void)
{
	Clr_Bit(PORTB,LCD_Rw);
	DDRA = 0xFF;
	DDRB = 0x07;
	Clr_Bit(PORTB,LCD_E);
	LCD_cmd(0x33);
	LCD_cmd(0x32);
	LCD_cmd(0x38);
	LCD_cmd(0x0E);
	LCD_cmd(0x01);
	_delay_ms(2);
}
void LCD_print(uint8* dataptr)
{
	uint8  i = 0;
	while(dataptr[i] != 0)
	{
		LCD_data(dataptr[i]);
		i++;
	}	
}

#elif defined LCD_4bit
void LCD_en(void)
{
	Set_Bit(PORTB,LCD_E);
	_delay_ms(2);
	Clr_Bit(PORTB,LCD_E);
	_delay_ms(2);
}
void LCD_init(void)
{
	Clr_Bit(PORTB,LCD_Rw);  // clear R/W to write
	DDRA = 0xF0;
	DDRB |= 0x07;
	Clr_Bit(PORTB,LCD_E);
	LCD_cmd(0x33);
	LCD_cmd(0x32);
	LCD_cmd(0x28);
	LCD_cmd(0x0E);
	LCD_cmd(0x01);
	_delay_ms(2);
}
void LCD_cmd(uint8 cmd)
{
	Clr_Bit(PORTB,LCD_Rs);
	PORTA &= 0x0F;
	PORTA |= cmd & 0xF0;
	
	LCD_en();
	PORTA &= 0x0F;
	PORTA |= (cmd << 4) ;
	
	LCD_en();
}
void LCD_data(uint8 data)
{
	Set_Bit(PORTB,LCD_Rs);
	PORTA &= 0x0F;
	PORTA |= data & 0xF0;
	LCD_en();
	
	PORTA &= 0x0F;
	PORTA |= (data << 4) ;
	LCD_en();
	
}
void LCD_print(uint8* dataptr)
{
	uint8  i = 0;
	while(dataptr[i] != 0)
	{
		LCD_data(dataptr[i]);
		i++;
	}
}
#endif
