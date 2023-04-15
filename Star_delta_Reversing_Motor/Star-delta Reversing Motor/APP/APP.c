/*
 * APP.c
 *
 * Created: 4/14/2023 5:13:35 PM
 *  Author: IBRAHIM
 */ 

#include "APP.h"

u8 ButtonValue;
u8 ContValue;
u8 Mode = 0;

/* Initialize Application */
void AppInit (void)
{
	/* Initialize button pins as input Pull-up */
	ButtonInit(PORTA, PIN0);
	ButtonInit(PORTA, PIN1);
	ButtonInit(PORTA, PIN2);
	
	/* Set Contactor pins to Output/ Low */
	ContInit(PORTD, PIN0);
	ContInit(PORTD, PIN1);
	ContInit(PORTD, PIN2);
	ContInit(PORTD, PIN3);
}

/* Starting Application */
void AppStart (void)
{
	ButtonValue = ButtonStatus ();
	ContValue = ContStatus ();
	if ((ButtonValue == 0) && (ContValue == 0))
	Mode = 1;
	else if ((ButtonValue == 1) && (ContValue == 0))
	Mode = 2;
	else if ((ButtonValue == 2) && (ContValue == 1))
	Mode = 3;
	else if ((ButtonValue == 2) && (ContValue == 2))
	Mode = 4;
	
	switch (Mode)
	{
	case 1: 
	MotorRight ();
	Mode = 0;
	break;
	
	case 2:	
	MotorLeft (); 
	Mode = 0;
	break;
	
	case 3:	
	StopMotor_R (); 
	Mode = 0;
	break;
	
	case 4:
	StopMotor_L ();
	Mode = 0;
	break;
	
	default: break;
	}
}

