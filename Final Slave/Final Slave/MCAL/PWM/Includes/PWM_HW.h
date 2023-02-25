/*
 * PWM_HW.h
 *
 * Created: 2/16/2023 2:08:09 PM
 *  Author: LEGION
 */ 


#ifndef PWM_HW_H_
#define PWM_HW_H_
/*************************************************_INCLUDES_********************************************/

#include "Bit_Math.h"
#include "Std_Types.h"


/************************************************Modes********************************************/

#define Compare_Output_Mode		NON_INVERTED  //NON_INVERTED,INVERTED


#define PWM_MODE				Fast_PWM   //Fast_PWM,PHASE_CORRECT_PWM

/************************************************Addresses********************************************/
#define TCNT0	     *((volatile uint8*)0x52)
#define TCCR0	     *((volatile uint8*)0x53)
#define TIMSK	     *((volatile uint8*)0x59)
#define OCR0 		 *((volatile uint8*)0x5C)

#define SREG 		 *((volatile uint8*)0x5F)
#define DDRB 		 *((volatile uint8*)0x37)
#define DDRD 		 *((volatile uint8*)0x31)
/**************************************************_MACROS_*********************************************/
#define F_OSC				16


#define TIMER0_PRESCALER	1024  //[1024,256,64,8,No_prescaling]

#define No_prescaling		0

#define Fast_PWM			1
#define PHASE_CORRECT_PWM	2

#define NON_INVERTED		3
#define INVERTED			4



#endif /* PWM_HW_H_ */