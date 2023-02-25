/*
 * LCD.h
 *
 * Created: 2/16/2023 2:14:16 PM
 *  Author: LEGION
 */ 


#ifndef LCD_H_
#define LCD_H_
/*************************************************_INCLUDES_********************************************/

#include "LCD_HW.h"

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void LCD_en(void);
void LCD_init(void);
void LCD_cmd(uint8 cmd);
void LCD_data(uint8 data);
void LCD_print(uint8* dataptr);



#endif /* LCD_H_ */