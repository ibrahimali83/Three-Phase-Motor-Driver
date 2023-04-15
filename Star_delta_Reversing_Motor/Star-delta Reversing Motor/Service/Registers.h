/*
 * Registers.h
 *
 * Created: 4/14/2023 5:36:07 PM
 *  Author: IBRAHIM
 */ 

/********************************************************/
/*        ATmega32 Micro-controller Registers           */
/********************************************************/

#ifndef REGISTERS_H_
#define REGISTERS_H_

/********************************************************/
/*                 GPIO Registers                       */
/********************************************************/

/* Port-A Registers */
#define PORTA_Register  *((volatile u8*)0x3B)
#define DDRA_Register   *((volatile u8*)0x3A)
#define PINA_Register   *((volatile u8*)0x39)

/* Port-D Registers */
#define PORTD_Register   *((volatile u8*)0x32)
#define DDRD_Register   *((volatile u8*)0x31)
#define PIND_Register   *((volatile u8*)0x30)

/********************************************************/
/*                  Timers Registers                    */
/********************************************************/

/* Timer_0 Registers */
#define TCCR0_Register  *((volatile u8*)0x53)
#define TCNT0_Register  *((volatile u8*)0x52)
#define TIFR_Register  *((volatile u8*)0x58)

#endif /* REGISTERS_H_ */