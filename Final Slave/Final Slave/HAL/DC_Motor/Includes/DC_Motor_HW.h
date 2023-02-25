/*
 * DC_Motor_HW.h
 *
 * Created: 2/16/2023 2:15:43 PM
 *  Author: LEGION
 */ 


#ifndef DC_MOTOR_HW_H_
#define DC_MOTOR_HW_H_
/*************************************************_INCLUDES_********************************************/

#include "Bit_Math.h"
#include "Std_Types.h"
#include "DIO.h"

	

/**************************************************_MACROS_*********************************************/


#define A		0   //Motor R    
#define B		1	//Motor L
#define CLW		2  //Clockwise direction
#define ACLW	3	//Anti-clockwise direction
#define STOP	4


/************************************************CFG********************************************/

#define MotorR1_Port			DIO_PortB
#define MotorR1_Pin		        DIO_PIN4
#define MotorR2_Port			DIO_PortB
#define MotorR2_Pin				DIO_PIN5

#define MotorL1_Port		    DIO_PortB
#define MotorL1_Pin				DIO_PIN6
#define MotorL2_Port		    DIO_PortB
#define MotorL2_Pin				DIO_PIN7

#endif /* DC_MOTOR_HW_H_ */