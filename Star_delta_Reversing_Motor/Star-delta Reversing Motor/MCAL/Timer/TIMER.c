/*
 * TIMER.c
 *
 * Created: 4/14/2023 5:15:58 PM
 *  Author: IBRAHIM
 */ 

#include "TIMER.h"

/* Set Timer_0 for 5 sec Delay */
void TIM0_Start5SDelay(void)
{
	u8 OverFlowCounter = 0;
	/* Select Normal Mode */
	TCCR0_Register &= ~(1<<3);
	TCCR0_Register &= ~(1<<6);
	/* Set Starting Value */
	TCNT0_Register = 11;
	/* start Timer & Pre-scalar Select (1024) */
	TCCR0_Register |= (1<<0);
	TCCR0_Register &= ~(1<<1);
	TCCR0_Register |= (1<<2);
	while (OverFlowCounter<20)
	{
	/* Checking Timer OVF Flag Status */
	while (!GET_BIT(TIFR_Register, 0) && GET_BIT(PINA_Register, 2));
	/* Clear Timer OVF flag */
	TIFR_Register |= (1<<0);
	OverFlowCounter++;
	}
	OverFlowCounter = 0;
	/* Stop Timer */
	TCCR0_Register &= ~(1<<0);
	TCCR0_Register &= ~(1<<1);
	TCCR0_Register &= ~(1<<2);
}

/* Set Timer_0 for 5 sec Delay at Stop_R */
void TIM0Stop_R5SDelay(void)
{
	u8 OverFlowCounter = 0;
	/* Select Normal Mode */
	TCCR0_Register &= ~(1<<3);
	TCCR0_Register &= ~(1<<6);
	/* Set Starting Value */
	TCNT0_Register = 11;
	/* start Timer & Pre-scalar Select (1024) */
	TCCR0_Register |= (1<<0);
	TCCR0_Register &= ~(1<<1);
	TCCR0_Register |= (1<<2);
	while (OverFlowCounter<20)
	{
	/* Checking Timer OVF Flag Status */
	while (!GET_BIT(TIFR_Register, 0) && GET_BIT(PINA_Register, 0));
	/* Clear Timer OVF flag */
	TIFR_Register |= (1<<0);
	OverFlowCounter++;
	}
	OverFlowCounter = 0;
	/* Stop Timer */
	TCCR0_Register &= ~(1<<0);
	TCCR0_Register &= ~(1<<1);
	TCCR0_Register &= ~(1<<2);	
}

/* Set Timer_0 for 5 sec Delay at Stop_L */
void TIM0Stop_L5SDelay(void)
{
	u8 OverFlowCounter = 0;
	/* Select Normal Mode */
	TCCR0_Register &= ~(1<<3);
	TCCR0_Register &= ~(1<<6);
	/* Set Starting Value */
	TCNT0_Register = 11;
	/* start Timer & Pre-scalar Select (1024) */
	TCCR0_Register |= (1<<0);
	TCCR0_Register &= ~(1<<1);
	TCCR0_Register |= (1<<2);
	while (OverFlowCounter<20)
	{
	/* Checking Timer OVF Flag Status */
	while (!GET_BIT(TIFR_Register, 0) && GET_BIT(PINA_Register, 1));
	/* Clear Timer OVF flag */
	TIFR_Register |= (1<<0);
	OverFlowCounter++;
	}
	OverFlowCounter = 0;
	/* Stop Timer */
	TCCR0_Register &= ~(1<<0);
	TCCR0_Register &= ~(1<<1);
	TCCR0_Register &= ~(1<<2);	
}