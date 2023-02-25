/*
 * DC_Motor.h
 *
 * Created: 2/16/2023 2:15:20 PM
 *  Author: LEGION
 */ 


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

/*************************************************_INCLUDES_********************************************/

#include "DC_Motor_HW.h"
#include "PWM.h"
#include "LCD.h"
#include "Clock.h"

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
void DCMOTOR_Init();
void DCMOTOR_SetDir(uint16 M_Dir,uint8 No);
void DCMOTOR_SetSpeed(uint8 Copy_u8Speed);
void DCMOTOR_Start();
void DCMOTOR_Stop();
void Forward(void);
void Backward(void);
void Left(void);
void Right(void);
void Stop(void);;



#endif /* DC_MOTOR_H_ */