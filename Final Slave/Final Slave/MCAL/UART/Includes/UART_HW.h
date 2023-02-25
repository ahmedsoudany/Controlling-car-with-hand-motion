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
#include <util/delay.h>


/*************************************************_MODES_********************************************/

#define SPEED_MODE		NORMAL          //Speed: NORMA/DOUBLE

#define UART_MODE		RECIEVER     //TRANSMITTER/RECIEVER/TRANSCIEVER

#define BAUDRATE		9600Ul          //Baud rate

#define CLOCK_MODE		ASYCH           //Asych or Sych


#define DATA_LEN		EIGHT

#define PARITY_STATE	NO_PARITY

#define STOP_STATE		ONE_STOP_BIT

#define BUAD(BAUDRATE)		(uint16)(F_CPU/(SPEED_MODE * 8 * BAUDRATE)-1)





/**************************************************_MACROS_*********************************************/


#define DOUBLE		1
#define NORMAL		2

#define TRANSMITTER 	0
#define RECIEVER		3
#define TRANSCIEVER		4

#define	FIVE			5
#define EIGHT			8

#define NO_PARITY		6
#define ODD_PARITY		7
#define EVEN_PARITY		9

#define ONE_STOP_BIT	10
#define TWO_STOP_BIT	11

#define ASYCH		    13
#define SYCH		    14

/************************************************Addresses********************************************/
#define UDR			(*( uint8*)0x2C)
#define UCSRA		(*( uint8*)0x2B)
#define UCSRB		(*( uint8*)0x2A)
#define UCSRC		UBRRH
#define UBRRL		(*( uint8*)0x29)
#define UBRRH		(*( uint8*)0x40)
#define UDRE		5
#define RXC			7


#endif /* UART_HW_H_ */