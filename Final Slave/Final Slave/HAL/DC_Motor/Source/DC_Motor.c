/*
 * DC_Motor.c
 *
 * Created: 2/16/2023 2:15:59 PM
 *  Author: LEGION
 */ 

/**************************************************_Includes_*********************************************/
#include "DC_Motor.h"


/**************************************************_Functions_Definitions_*********************************************/

void DCMOTOR_Init()
{
	DIO_PinDir(MotorR1_Port,MotorR1_Pin,DIO_OUTPUT);
	DIO_PinDir(MotorR2_Port,MotorR2_Pin,DIO_OUTPUT);
	DIO_PinDir(MotorL1_Port,MotorL1_Pin,DIO_OUTPUT);
  	DIO_PinDir(MotorL2_Port,MotorL2_Pin,DIO_OUTPUT);
	PWM0_Init();
}

void DCMOTOR_SetDir(uint16 M_Dir,uint8 No)
{
	switch (No)
	{
		case A :			//MOTOR A
		     switch(M_Dir)
			 {
			     case CLW :
			          DIO_PinVal(MotorR1_Port,MotorR1_Pin,DIO_HIGH);
			          DIO_PinVal(MotorR2_Port,MotorR2_Pin,DIO_LOW);
					 break;
			     case ACLW:
                      DIO_PinVal(MotorR1_Port,MotorR1_Pin,DIO_LOW);	
			          DIO_PinVal(MotorR2_Port,MotorR2_Pin,DIO_HIGH);
					 break;
			    case STOP :
			       DIO_PinVal(MotorR1_Port,MotorR1_Pin,DIO_LOW);
	               DIO_PinVal(MotorR2_Port,MotorR2_Pin,DIO_LOW);
					break;

		  	   default:
					break;
		    }
		        break;
	    case B:					//MOTOR B
		     switch(M_Dir)
			 {
			     case CLW :
			          DIO_PinVal(MotorL1_Port,MotorL1_Pin,DIO_HIGH);
			          DIO_PinVal(MotorL2_Port,MotorL2_Pin,DIO_LOW);
			          break;
			     case ACLW:
					  DIO_PinVal(MotorL1_Port,MotorL1_Pin,DIO_LOW);
					  DIO_PinVal(MotorL2_Port,MotorL2_Pin,DIO_HIGH);
				      break;
				case STOP:
					DIO_PinVal(MotorL1_Port,MotorL1_Pin,DIO_LOW);
					DIO_PinVal(MotorL2_Port,MotorL2_Pin,DIO_LOW);
				    break;
				default:
					break;
			}
			break;
	default:
			break;
	}

}

void DCMOTOR_SetSpeed(uint8 speed)
{
	PWM0_SetDutyCycle(speed);
}

void DCMOTOR_Start()
{
	PWM0_Start();
}

void DCMOTOR_Stop()
{
	PWM0_Stop();
}

void Forward()
	{
	LCD_cmd(0X01);       //for clearing the LCD
	DCMOTOR_SetDir(CLW,A);
	DCMOTOR_SetDir(CLW,B);
	LCD_print("Forward");
}

void Backward()
{
	LCD_cmd(0X01);	
	DCMOTOR_SetDir(ACLW,A);
	DCMOTOR_SetDir(ACLW,B);
    LCD_print("Backward");
}


void Right()
{
	LCD_cmd(0X01);	
	DCMOTOR_SetDir(ACLW,A);
	DCMOTOR_SetDir(CLW,B);
	LCD_print("Right");   
}

void Left()
{
	LCD_cmd(0X01);	
	DCMOTOR_SetDir(CLW,A);
	DCMOTOR_SetDir(ACLW,B);
	LCD_print("Left");  
}

void Stop()
{	
	LCD_cmd(0X01);	
	DCMOTOR_SetDir(STOP,A);
	DCMOTOR_SetDir(STOP,B);
	LCD_print("CAR STOPPED");
}