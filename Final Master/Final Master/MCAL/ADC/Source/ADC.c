/*
 * ADC.c
 *
 * Created: 2/15/2023 8:49:40 PM
 *  Author: LEGION
 */ 

/*************************************************_INCLUDES_********************************************/
#include "ADC.h"

/**************************************************_Functions_Definitions_****************************************/

void ADC_Init()
{
	//Setting our ADC reference
	#if ADC_refrence == AREF_internal
	ADMUX &=~ (3<<6);
	#elif ADC_refrence == AVCC_external
	ADMUX |= (1<<6);
    
	#elif ADC_refrence == Internal_V
	ADMUX |= (3<<6);
    
	#endif
    //Setting our ADC Adjust
	#if ADC_Adjust == Right_Adjust
    ADMUX &=~ (1<<5);
    #elif ADC_Adjust == Left_Adjust
	ADMUX |= (1<<5);
	#endif
    //Setting our Clock Prescalar
	#if PRESSCALER == 128
	ADCSRA |= (7<<0);
    
	#elif PRESSCALER == 64
	ADCSRA |= (6<<0);

	#endif

	ADCSRA |= (1<<7);
	
	ADCSRA &=~ (1<<5);

}
void ADC_Start_Conversion(uint8 CH)
{
	if (CH <= 7 && CH >= 0) 
	{

		ADCSRA |= (1<<6);
		ADMUX &=~ (7<<0);
		ADMUX  |= (CH<<0);
	}
}

void ADC_Get_Result(uint16 *Result)
{
	if(ADC_Adjust == Right_Adjust)
	{

		while(!((ADCSRA>>6)&1));
		*Result = ADCL;
		*Result |= ((uint16)ADCH<<8);
	}
	else if (ADC_Adjust == Left_Adjust)
	{

		while((ADCSRA>>6)&1);
		*Result = (ADCL >>6);
		*Result |= ((uint16)ADCH<<2);
	}
	
}


void ADC_Set_Auto_Trigger(uint8 copy_source)
{
	if (copy_source <= 7 && copy_source >= 0)
	{
		ADCSRA &=~ (1<<5);
		ADCSRA  |= (1<<5);

		SFIOR  &=~ (7<<5);
		SFIOR  |=  (copy_source << 5);
	}
}

void ADC_Disable_Auto_Trigger()
{
	ADCSRA &=~ (1<<5);
}

void ADC_Enable_Entrrupt()
{
	ADCSRA &=~ (1<<3);
	ADCSRA |=  (1<<3);
}


void ADC_Disable_Entrrupt()
{
	ADCSRA &=~ (1<<3);
}

