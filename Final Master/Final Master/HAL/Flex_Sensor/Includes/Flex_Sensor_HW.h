/*
 * Flex_Sensor_HW.h
 *
 * Created: 2/25/2023 8:38:24 PM
 *  Author: LEGION
 */ 


#ifndef FLEX_SENSOR_HW_H_
#define FLEX_SENSOR_HW_H_




/*************************************************_Sensors_Pin_********************************************/

uint16  Sensor_1; /*PA4*/	 // Only this High and rest low for forward cmd
uint16  Sensor_2; /*PA3*/    // Only this High and rest low for backward cmd
uint16  Sensor_3; /*PA2*/    // Only this High and rest low for right cmd
uint16  Sensor_4; /*PA1*/    // Only this High and rest low for left cmd
uint16  Sensor_5; /*PA0*/    // Only this High and rest low for stop cmd 

#endif /* FLEX_SENSOR_HW_H_ */