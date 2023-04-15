/*
 * TIMER.h
 *
 * Created: 4/14/2023 5:16:12 PM
 *  Author: IBRAHIM
 */ 

#ifndef TIMER_H_
#define TIMER_H_

#include "../../Service/REGISTERS.h"
#include "../../Service/BIT_MANIPULATE.h"
#include "../../Service/STD_TYPES.h"

/* Set Timer_0 for 5 sec Delay at Start */
void TIM0_Start5SDelay(void);

/* Set Timer_0 for 5 sec Delay at Stop_R */
void TIM0Stop_R5SDelay(void);

/* Set Timer_0 for 5 sec Delay at Stop_L */
void TIM0Stop_L5SDelay(void);

#endif /* TIMER_H_ */