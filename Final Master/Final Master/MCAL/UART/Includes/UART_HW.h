/*
 * UART_HW.h
 *
 * Created: 2/15/2023 9:36:39 PM
 *  Author: LEGION
 */ 


#ifndef UART_HW_H_
#define UART_HW_H_
/*************************************************_INCLUDES_********************************************/

#include "Bit_Math.h"
#include "Std_Types.h"
#include "Clock.h"

/*************************************************_MODES_********************************************/

#define SPEED_MODE		NORMAL          //Speed: NORMA/DOUBLE

#define UART_MODE		TRANSMITTER     //TRANSMITTER/RECIEVER/TRANSCIEVER

#define BAUDRATE		9600Ul          //Baudrate 

#define CLOCK_MODE		ASYCH           //Asych or Sych


#define DATA_LEN		EIGHT           

#define PARITY_STATE	NO_PARITY

#define STOP_STATE		ONE_STOP_BIT

#define BUAD(BAUDRATE)		(uint16)(F_CPU/(SPEED_MODE * 8 * BAUDRATE)-1)

/**************************************************_MACROS_*********************************************/


#define UDRE		5
#define RXC			7


#define NORMAL		2
#define DOUBLE		1

#define TRANSMITTER 	0
#define RECIEVER		5
#define TRANSCIEVER		9

#define	FIVE			7
#define EIGHT			9

#define NO_PARITY		6
#define ODD_PARITY		7
#define EVEN_PARITY		63

#define ONE_STOP_BIT	86
#define TWO_STOP_BIT	76

#define ASYCH		    45
#define SYCH		    78

/************************************************Addresses********************************************/
#define UDR			(*(volatile uint8*)0x2C)
#define UCSRA		(*(volatile uint8*)0x2B)
#define UCSRB		(*(volatile uint8*)0x2A)
#define UCSRC		UBRRH
#define UBRRL		(*(volatile uint8*)0x29)
#define UBRRH		(*(volatile uint8*)0x40)



#endif /* UART_HW_H_ */