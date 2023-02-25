/*
 * UART.h
 *
 * Created: 2/15/2023 9:36:24 PM
 *  Author: LEGION
 */ 


#ifndef UART_H_
#define UART_H_

/*************************************************_INCLUDES_********************************************/

#include "UART_HW.h"

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void UART_Init(void);
void UART_SendChar(uint8 ch);
void UART_RecieveChar(uint8 *ch);
void UART_SendString(const char* st);
uint8 UART_Rx(void);



#endif /* UART_H_ */