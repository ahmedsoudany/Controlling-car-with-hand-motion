/*
 * DIO_HW.h
 *
 * Created: 2/15/2023 6:59:49 PM
 *  Author: LEGION
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_
/*************************************************_INCLUDES_********************************************/
#include "Bit_Math.h"
#include "Std_Types.h"


/**************************************************_Enums_*********************************************/

typedef enum{
	
	DIO_PINA0 = 0,
	DIO_PINA1,
	DIO_PINA2,
	DIO_PINA3,
	DIO_PINA4,
	DIO_PINA5,
	DIO_PINA6,
	DIO_PINA7,
	
	DIO_PINB0,
	DIO_PINB1,
	DIO_PINB2,
	DIO_PINB3,
	DIO_PINB4,
	DIO_PINB5,
	DIO_PINB6,
	DIO_PINB7,
	
	DIO_PINC0,
	DIO_PINC1,
	DIO_PINC2,
	DIO_PINC3,
	DIO_PINC4,
	DIO_PINC5,
	DIO_PINC6,
	DIO_PINC7,
	
	DIO_PIND0,
	DIO_PIND1,
	DIO_PIND2,
	DIO_PIND3,
	DIO_PIND4,
	DIO_PIND5,
	DIO_PIND6,
	DIO_PIND7
	
}DIO_PIN;


typedef enum{
	Input,
	Output,
}DIO_Dir;

typedef enum{

	DIO_PORTA = 0,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}DIO_PORT;



typedef enum{
	STD_Low,
	STD_High,
}STD_Level;

/************************************************Addresses********************************************/

#define  PORTA_REG	(*(volatile uint8 *) 0x3B)
#define  DDRA_REG	(*(volatile uint8 *) 0x3A)
#define  PINA_REG	(*(volatile uint8 *) 0x39)

#define  PORTB_REG	(*(volatile uint8 *) 0x38)
#define  DDRB_REG	(*(volatile uint8 *) 0x37)
#define  PINB_REG	(*(volatile uint8 *) 0x36)

#define  PORTC_REG	(*(volatile uint8 *) 0x35)
#define  DDRC_REG	(*(volatile uint8 *) 0x34)
#define  PINC_REG	(*(volatile uint8 *) 0x33)

#define  PORTD_REG	(*(volatile uint8 *) 0x32)
#define  DDRD_REG	(*(volatile uint8 *) 0x31)
#define  PIND_REG	(*(volatile uint8 *) 0x30)
#endif /* DIO_HW_H_ */






























/*
#define DDRA_REG (*(volatile unsigned char *)(0x3A))
#define DDRB_REG (*(volatile unsigned char *)(0x37))
#define DDRC_REG (*(volatile unsigned char *)(0x34))
#define DDRD_REG (*(volatile unsigned char *)(0x31))


#define PORTA_REG (*(volatile unsigned char *)(0x3B))
#define PORTB_REG (*(volatile unsigned char *)(0x38))
#define PORTC_REG (*(volatile unsigned char *)(0x35))
#define PORTD_REG (*(volatile unsigned char *)(0x32))

#define PINA_REG (*(volatile unsigned char *)(0x39))
#define PINB_REG (*(volatile unsigned char *)(0x36))
#define PINC_REG (*(volatile unsigned char *)(0x33))
#define PIND_REG (*(volatile unsigned char *)(0x30))


typedef enum {
	DIO_Low=0,
	DIO_High
} DIO_State;


typedef enum{
	PORT_A=0,
	PORT_B,
	PORT_C,
	PORT_D
} DIO_Port;


typedef enum{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
} DIO_PIN;


typedef enum
{
	DIO_Input = 0,
	DIO_Output
}DIO_Dir;

*/
