/*
 * Flex_Sensor.h
 *
 * Created: 2/16/2023 7:32:28 PM
 *  Author: LEGION
 */ 


#ifndef FLEX_SENSOR_H_
#define FLEX_SENSOR_H_

/*************************************************_INCLUDES_********************************************/
#include "Std_Types.h"
#include "Flex_Sensor_HW.h"
#include "ADC.h"
#include "Clock.h"

#define Sensors_No 5      // Sensors number

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
void Sensors_Init(void);
uint16 Sensor_Value();


#endif /* FLEX_SENSOR_H_ */