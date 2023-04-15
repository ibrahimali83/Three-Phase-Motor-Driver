/*
 * BUTTON.h
 *
 * Created: 4/14/2023 5:14:12 PM
 *  Author: IBRAHIM
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/Timer/TIMER.h"

/* Initialize button pin as input Pull-up */
void ButtonInit(u8 buttonPort, u8 buttonPin);

/* Read Buttons Pins Status */
u8 ButtonStatus(void);

#endif /* BUTTON_H_ */