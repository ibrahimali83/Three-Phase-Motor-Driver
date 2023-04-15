/*
 * BIT_MANIPULATE.h
 *
 * Created: 4/14/2023 5:23:50 PM
 *  Author: IBRAHIM
 */ 

#ifndef BIT_MANIPULATE_H_
#define BIT_MANIPULATE_H_

#define SET_BIT(VAR,BITNO) (VAR) |=  (1 << (BITNO))
#define CLR_BIT(VAR,BITNO) (VAR) &= ~(1 << (BITNO))
#define TOG_BIT(VAR,BITNO) (VAR) ^=  (1 << (BITNO))
#define GET_BIT(VAR,BITNO) (((VAR) >> (BITNO)) & 0x01)

#endif /* BIT_MANIPULATE_H_ */