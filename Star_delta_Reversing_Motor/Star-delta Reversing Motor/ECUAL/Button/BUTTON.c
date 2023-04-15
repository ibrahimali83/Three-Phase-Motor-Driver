/*
 * BUTTON.c
 *
 * Created: 4/14/2023 5:14:26 PM
 *  Author: IBRAHIM
 */ 

#include "BUTTON.h"

/* Initialize button pin as input Pull-up */
void ButtonInit(u8 buttonPort, u8 buttonPin)
{
	DIO_init(buttonPort, buttonPin, IN);
	DIO_write(buttonPort, buttonPin, HIGH);
}

/* Read Buttons Pins Status */
u8 ButtonStatus(void)
{
	u8 ButtonValue;
	u8 A0 = DIO_read(PORTA, PIN0);
	u8 A1 = DIO_read(PORTA, PIN1);
	u8 A2 = DIO_read(PORTA, PIN2);
    if (A0 == 0 && A1 == 1 && A2 == 1) 
	ButtonValue = 0;
	else if (A0 == 1 && A1 == 0 && A2 == 1)
	ButtonValue = 1;
	else if (A0 == 1 && A1 == 1 && A2 == 0)
	ButtonValue = 2;
	else
	ButtonValue = 3;

	return ButtonValue;
}