/*
 * Final Master.c
 *
 * Created: 2/15/2023 6:29:47 PM
 * Author : LEGION
 */ 

/*************************************************_INCLUDES_********************************************/

#include "DIO.h"
#include "ADC.h"
#include "UART.h"
#include "Flex_Sensor.h"


// Conditions for Fingers State
#define Open      < 800
#define Closed    > 800


/************************************************MASTER*************************************************************/

int main(void)
{
	Sensors_Init();
	UART_Init();			
    DIO_WritePinDir(DIO_PIND1,Output);  // SET TX AS OUTPUT

	while(1)
	{
	
		Sensor_Value();

		if	       (Sensor_1 Closed && Sensor_2 Open && Sensor_3 Open && Sensor_4 Open && Sensor_5 Open)
		{
			UART_SendChar('f');  //Send Forward motion
		}
       
		else if	   (Sensor_1 Open && Sensor_2 Open && Sensor_3 Open && Sensor_4 Open && Sensor_5 Closed)
		{
			UART_SendChar('b');  //Send Backward motion
		}
		else if	   (Sensor_1 Open && Sensor_2 Open && Sensor_3 Closed && Sensor_4 Open && Sensor_5 Open)
		{
			UART_SendChar('l');  //Send left motion
		}
		else if	   (Sensor_1 Open && Sensor_2 Open && Sensor_3 Open && Sensor_4 Closed && Sensor_5 Open)
		{

			UART_SendChar('r');  //Send right motion
		}
		else if	   (Sensor_1 Open && Sensor_2 Closed && Sensor_3 Open && Sensor_4 Open && Sensor_5 Open)
		{
			UART_SendChar('s');  //Send Stop motion
		}
		_delay_ms(1000);			

	}

}

