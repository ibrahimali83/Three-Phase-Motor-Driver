#include "DIO.h"

/* Set Pin Direction (IN/ OUT) */
void DIO_init(u8 portNumber, u8 pinNumber, u8 direction)
{
	if (direction == OUT)
	{
	switch (portNumber)
	{
	case PORTA: SET_BIT(DDRA_Register,pinNumber); break;
	case PORTD: SET_BIT(DDRD_Register,pinNumber); break;
	}
	}
	else if (direction == IN)
	{
	switch (portNumber)
	{
	case PORTA: CLR_BIT(DDRA_Register,pinNumber); break;
	case PORTD: CLR_BIT(DDRD_Register,pinNumber); break;
    }
    }
}

/* Set Pin Value (HIGH/ LOW) */
void DIO_write(u8 portNumber, u8 pinNumber, u8 value)
{
	if (value == HIGH)
	{
	switch (portNumber)
	{
    case PORTA: SET_BIT(PORTA_Register,pinNumber); break;
	case PORTD: SET_BIT(PORTD_Register,pinNumber); break;
	}
	}
	else if (value == LOW)
	{
	switch (portNumber)
	{
	case PORTA: CLR_BIT(PORTA_Register,pinNumber); break;
	case PORTD: CLR_BIT(PORTD_Register,pinNumber); break;
    }
	}
}

/* Get Pin Value (IN/ OUT) */
u8 DIO_read(u8 portNumber, u8 pinNumber)
{
	u8 PinValue;
	switch (portNumber)
	{
	case PORTA: PinValue = GET_BIT(PINA_Register,pinNumber); break;
	case PORTD: PinValue = GET_BIT(PIND_Register,pinNumber); break;
	}
	return PinValue;
}