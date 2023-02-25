/*
 * PWM.h
 *
 * Created: 2/16/2023 2:07:57 PM
 *  Author: LEGION
 */ 


#ifndef PWM_H_
#define PWM_H_

/*************************************************_INCLUDES_********************************************/

#include "PWM_HW.h"


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
void PWM0_Init();

void PWM0_SetDutyCycle(uint8 duty_cycle);

void PWM0_Start();

void PWM0_Stop();


#endif /* PWM_H_ */