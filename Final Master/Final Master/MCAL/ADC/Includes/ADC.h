/*
 * ADC.h
 *
 * Created: 2/15/2023 8:49:14 PM
 *  Author: LEGION
 */ 


#ifndef ADC_H_
#define ADC_H_
/*************************************************_INCLUDES_********************************************/
#include "ADC_HW.h"

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
void ADC_Init();
void ADC_Start_Conversion(uint8 CH);
void ADC_Get_Result(uint16 *Result);
void ADC_Set_Auto_Trigger(uint8 copy_source);
void ADC_Disable_Auto_Trigger();
void ADC_Enable_Entrrupt();
void ADC_Disable_Entrrupt();



#endif /* ADC_H_ */