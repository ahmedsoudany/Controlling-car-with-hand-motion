/*
 * Flex_Sensor.c
 *
 * Created: 2/16/2023 7:34:21 PM
 *  Author: LEGION
 */ 

#include "Flex_Sensor.h"


void Sensors_Init(void)
{
	ADC_Init();
}

uint16 Sensor_Value()
{
	_delay_ms(300);
	ADC_Start_Conversion(0); 
	ADC_Get_Result(&Sensor_1);    
	_delay_ms(50);
	ADC_Start_Conversion(1);
	ADC_Get_Result(&Sensor_2);
	_delay_ms(50);
	ADC_Start_Conversion(2);
	ADC_Get_Result(&Sensor_3);
	_delay_ms(50);
	ADC_Start_Conversion(3);
	ADC_Get_Result(&Sensor_4);
	_delay_ms(50);
	ADC_Start_Conversion(4);
	ADC_Get_Result(&Sensor_5);
	_delay_ms(50);
}
	