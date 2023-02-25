/*
 * LCD_HW.h
 *
 * Created: 2/16/2023 2:14:30 PM
 *  Author: LEGION
 */ 


#ifndef LCD_HW_H_
#define LCD_HW_H_


/*************************************************_INCLUDES_********************************************/

#include "Bit_Math.h"
#include "Std_Types.h"
#include "DIO.h"

/*************************************************_LCD_Mode_********************************************/

#define  LCD_4bit

/*************************************************_Control_Pins_********************************************/

#define LCD_Rs               0
#define LCD_Rw               1
#define LCD_E                2

/***********************_Data_PORT_*****************************/

#define LCD                 PORTA



#endif /* LCD_HW_H_ */