/*
 * DIO.h
 *
 * Created: 4/14/2023 5:15:11 PM
 *  Author: IBRAHIM
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Service/REGISTERS.h"
#include "../../Service/BIT_MANIPULATE.h"
#include "../../Service/STD_TYPES.h"

/* Port Defines */
#define PORTA    0
#define PORTD    1

/* PIN Defines */
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

/* Direction Defines */
#define IN 0
#define OUT 1

/* Value Defines */
#define LOW 0
#define HIGH 1

/* Set Pin Direction */
void DIO_init(u8 portNumber, u8 pinNumber, u8 direction);

/* Set Pin Value */
void DIO_write(u8 portNumber, u8 pinNumber, u8 value);

/* Get Pin Value */
u8 DIO_read(u8 portNumber, u8 pinNumber);

#endif /* DIO_H_ */