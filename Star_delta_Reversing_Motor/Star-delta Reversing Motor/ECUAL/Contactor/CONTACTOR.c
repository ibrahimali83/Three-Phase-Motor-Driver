/*
 * CONTACTOR.c
 *
 * Created: 4/14/2023 9:22:37 PM
 *  Author: IBRAHIM
 */ 

#include "CONTACTOR.h"

/* Set Contactor pin to Output */
void ContInit(u8 ledPort, u8 ledPin)
{
	DIO_init(ledPort, ledPin, OUT);
}

/* Start Motor Right */
void MotorRight (void)
{
	/* Start Right Contactor */
	DIO_write(PORTD, PIN0, HIGH);
	/* Start Star Contactor for 5 Sec */
	DIO_write(PORTD, PIN2, HIGH);
    TIM0_Start5SDelay();
	/* Stop Star & Start Delta Contactor */
	DIO_write(PORTD, PIN2, LOW);
	DIO_write(PORTD, PIN3, HIGH);
}

/* Start Motor Left */
void MotorLeft (void)
{
    /* Start Left Contactor */
    DIO_write(PORTD, PIN1, HIGH);
    /* Start Star Contactor for 5 Sec */
    DIO_write(PORTD, PIN2, HIGH);
    TIM0_Start5SDelay();
    /* Stop Star & Start Delta */
    DIO_write(PORTD, PIN2, LOW);
    DIO_write(PORTD, PIN3, HIGH);
}

/* Stop Right Motor */
void StopMotor_R (void)
{
	/* Stop Three Contactors */
	DIO_write(PORTD, PIN0, LOW);
    DIO_write(PORTD, PIN2, LOW);
    DIO_write(PORTD, PIN3, LOW);
	/* Delay to Avoid Direct Reverse */
	TIM0Stop_R5SDelay();
}

/* Stop Left Motor */
void StopMotor_L (void)
{
	/* Stop Three Contactors */
	DIO_write(PORTD, PIN1, LOW);
	DIO_write(PORTD, PIN2, LOW);
	DIO_write(PORTD, PIN3, LOW);
	/* Delay to Avoid Direct Reverse */
	TIM0Stop_L5SDelay();
}

/* Read Contactor Pins Status */
u8 ContStatus(void)
{
	u8 ContValue;
	u8 D0 = DIO_read(PORTD, PIN0);
	u8 D1 = DIO_read(PORTD, PIN1);
	if (D0 == 0 && D1 == 0)
	ContValue = 0;
	else if (D0 == 1 || D1 == 0)
	ContValue = 1;
	else if (D0 == 0 || D1 == 1)
	ContValue = 2;
	
	return ContValue;
}

