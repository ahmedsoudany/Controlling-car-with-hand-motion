/*
 * Bit_Mathh.h
 *
 * Created: 2/15/2023 6:43:40 PM
 *  Author: LEGION
 */ 


#ifndef BIT_MATHH_H_
#define BIT_MATHH_H_



#define SetBit(REG,BIT)    REG |=  (1 << BIT)
#define ClrBit(REG,BIT)    REG &= ~(1 << BIT)
#define TogBit(REG,BIT)    REG ^=  (1 << BIT)
#define GetBit(REG,BIT)    ((REG >> BIT) & 1)



#endif /* BIT_MATHH_H_ */