/*
 * Bit_Mathh.h
 *
 * Created: 2/15/2023 6:43:40 PM
 *  Author: LEGION
 */ 


#ifndef BIT_MATHH_H_
#define BIT_MATHH_H_

#define Set_Bit(REG,BIT)    REG |=  (1 << BIT)
#define Clr_Bit(REG,BIT)    REG &= ~(1 << BIT)
#define Tog_Bit(REG,BIT)    REG ^=  (1 << BIT)
#define Get_Bit(REG,BIT)    ((REG >> BIT) & 1)

#endif /* BIT_MATHH_H_ */