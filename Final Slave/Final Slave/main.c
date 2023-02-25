/*
 * Final Slave.c
 *
 * Created: 2/16/2023 1:58:47 PM
 * Author : LEGION
 */ 






#include "DIO.h"
#include "LCD.h"
#include "UART.h"
#include "DC_Motor_HW.h"

#include <string.h>

#define f   70   //for high speed (forward and backward motion)
#define s   40   //for low speed  (right and left motion)
/*********************************************************************Slave******************************************************/

int main()
{
	DCMOTOR_Init();
	UART_Init();  
	LCD_init();
	DIO_PinDir(DIO_PortD,DIO_PIN0,DIO_INPUT); 		// SET RX AS INPUT
	DCMOTOR_Start();

	uint8 data;  
	
	while (1)
	{
		_delay_ms(500);		//to make the receiver more accurate
		DCMOTOR_Start();	
        data = UART_Rx();   //receiving the data from Master
		if(data == 'f')
		{
			DCMOTOR_SetSpeed(f);
			Forward();
		}
		else if(data == 'b')
		{
			DCMOTOR_SetSpeed(f);	   
			Backward();
		}

		else if(data == 'r')
		{
			DCMOTOR_SetSpeed(s);
			Right();
		}
	
		else if(data == 'l')
		{
			DCMOTOR_SetSpeed(s);
			Left();
		}
		else if(data == 's')
		{    
			Stop();
		}	
	}
	
}
