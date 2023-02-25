/*
 * ADC_HW.h
 *
 * Created: 2/15/2023 8:49:26 PM
 *  Author: LEGION
 */ 


#ifndef ADC_HW_H_
#define ADC_HW_H_
/*************************************************_INCLUDES_********************************************/

#include "Bit_Math.h"
#include "Std_Types.h"

/************************************************Modes********************************************/


#define ADC_refrence			AVCC_external   //Internal_V		//AREF_internal
#define ADC_Adjust				Left_Adjust		//High_Read         //Right_Adjust
#define PRESSCALER	              128				//64


/**************************************************_MACROS_*********************************************/

#define AREF_internal		        1
#define AVCC_external				2
#define Reserved				    3
#define Internal_V					4
#define Left_Adjust					5
#define Right_Adjust				6
#define High_Read					7
#define SINGLE						8
#define FREE_RUN					9
#define TRIGGERED					10


/************************************************Addresses********************************************/

#define ADMUX			(*(volatile uint8*)0x27)
#define ADCSRA			(*(volatile uint8*)0x26)
#define SFIOR			(*(volatile uint8*)0x50)
#define ADCH			(*(volatile uint8*)0x25)
#define ADCL			(*(volatile uint8*)0x24)


/************************************************Structure********************************************/
typedef enum {

	FERR_RUNNING_MODE,
	ANALOG_COMPARATOR,
	EXTERNAL_INTERRUPT_REQUEST,
	TIMMER0_COMPARE_MATCH,
	TIMMER0_OVER_FLOW,
	TIMMER1_COMPARE_MATCH,
	TIMMER1_OVER_FLOW,
	TIMMER1_CAPTURE_EVENT

}ADC_MODE;




#endif /* ADC_HW_H_ */