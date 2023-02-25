/*
 * PWM.c
 *
 * Created: 2/16/2023 2:08:24 PM
 *  Author: LEGION
 */ 

/**************************************************_Includes_*********************************************/

#include "PWM.h"

/**************************************************_Functions_Definitions_*********************************************/

void PWM0_Init()
{
	
	DDRB |=(1<<3);		//set OC0 as PWM output
	#if PWM_MODE == Fast_PWM
	TCCR0 |=(1<<3);
	TCCR0 |=(1<<6);

	#elif PWM_MODE == PHASE_CORRECT_PWM
	TCCR0 &=~(1<<3);
	TCCR0 |=(1<<6);

	#endif
	#if Compare_Output_Mode == NON_INVERTED
	TCCR0 &=~(1<<4);
	TCCR0 |=(1<<5);
	#elif Compare_Output_Mode == INVERTED
	TCCR0 |=(1<<4);
	TCCR0 |=(1<<5);
	#endif
	
}

void PWM0_SetDutyCycle(uint8 duty_cycle)
{
	
	#if PWM_MODE == Fast_PWM

	#if Compare_Output_Mode == NON_INVERTED
	     if(duty_cycle <= 100 && duty_cycle >0){
		OCR0=(((duty_cycle *255)/100)-1);
	}

	#elif Compare_Output_Mode == INVERTED
	if(duty_cycle < 100 && duty_cycle >=0){
		OCR0 = (254-((duty_cycle * 255)/100));
	}
	#endif
	#elif PWM_MODE == PHASE_CORRECT_PWM
	#if Compare_Output_Mode == NON_INVERTED
	if(duty_cycle <= 100 && duty_cycle >=0){
		OCR0=((duty_cycle *255)/100);
	}

	#elif Compare_Output_Mode == INVERTED
	if(duty_cycle <= 100 && duty_cycle >=0){
		OCR0 = 255-((duty_cycle * 255)/100);
	}
	#endif
#endif
	
}

void PWM0_Start()
{
	
	#if TIMER0_PRESCALER == 1024
	TCCR0 |=(5<<0);
	#elif TIMER0_PRESCALER == 256
	TCCR0 |=(4<<0);
	#elif TIMER0_PRESCALER == 64
	TCCR0 |=(3<<0);
	#elif TIMER0_PRESCALER == 8
	TCCR0 |=(2<<0);
	#elif TIMER0_PRESCALER == No_prescaling
	TCCR0 &=~(1<<0);
	#endif
	
}

void PWM0_Stop()
{
	TCCR0 &=~(7<<0);	
}
