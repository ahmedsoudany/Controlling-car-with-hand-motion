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

typedef enum
{
	DIO_PortA = 0,
	DIO_PortB,
	DIO_PortC,
	DIO_PortD
	}DIO_PORT;

typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
	}DIO_Pin;

typedef enum
{
	DIO_INPUT = 0,
	DIO_OUTPUT
	
	}DIO_State;
	
typedef enum
{
	DIO_LOW = 0,
	DIO_HIGH
	}DIO_Level;

#define DIO_BIT_MASK 1


/************************************************Addresses********************************************/


#define PORTA 		*((volatile uint8*)0x3B)
#define DDRA 		*((volatile uint8*)0x3A)
#define PINA 		*((volatile uint8*)0x39)

#define PORTB 		*((volatile uint8*)56)
#define DDRB 		*((volatile uint8*)0x37)
#define PINB 		*((volatile uint8*)0x36)

#define PORTC 		*((volatile uint8*)0x35)
#define DDRC 		*((volatile uint8*)0x34)
#define PINC 		*((volatile uint8*)0x33)

#define PORTD 		*((volatile uint8*)0x32)
#define DDRD 		*((volatile uint8*)0x31)
#define PIND 		*((volatile uint8*)0x30)


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
