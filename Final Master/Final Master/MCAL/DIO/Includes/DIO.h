/*
 * DIO.h
 *
 * Created: 2/15/2023 6:59:38 PM
 *  Author: LEGION
 */ 


#ifndef DIO_H_
#define DIO_H_

/*************************************************_INCLUDES_********************************************/

#include "DIO_HW.h"

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void DIO_WritePin(DIO_PIN Pin,STD_Level Write);
STD_Level DIO_ReadPin(DIO_PIN Pin);
void DIO_WritePort(DIO_PORT Port,uint8 Port_Value);
uint8 DIO_ReadPort(DIO_PORT Port);
void DIO_ToggleChannel(DIO_PIN Pin);


















/*
void DIO_ChannelDir(DIO_Port Port,DIO_PIN Pin,DIO_Dir Dir);
DIO_State DIO_ChannelRead(DIO_Port Port,DIO_PIN Pin);
void DIO_ChannelWrite(DIO_Port Port,DIO_PIN Pin,DIO_State State);
void DIO_ChannelToggle(DIO_Port Port,DIO_PIN Pin);
void DIO_PortWrite(DIO_Port Port,uint8 Value);
uint8 DIO_PortRead(DIO_Port Port);
*/
#endif /* DIO_H_ */