/*
 * CONTACTOR.h
 *
 * Created: 4/14/2023 9:22:25 PM
 *  Author: IBRAHIM
 */ 


#ifndef CONTACTOR_H_
#define CONTACTOR_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/Timer/TIMER.h"

/* Set Contactor pin to output */
void ContInit(u8 ledPort, u8 ledPin);

/* Start Motor Right */
void MotorRight (void);

/* Start Motor Left */
void MotorLeft (void);

/* Stop Left Motor */
void StopMotor_L (void);

/* Stop Right Motor */
void StopMotor_R (void);

/* Read Contactor Pins Status */
u8 ContStatus(void);

#endif /* CONTACTOR_H_ */