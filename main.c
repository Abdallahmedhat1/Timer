/*
 * Timer.c
 *
 * Created: 8/13/2023 6:47:23 PM
 * Author : Abdallah Medhat
 */ 

#include "Timer_Interface.h"
#include "EXTI_Interface.h"
#include "DIO_INTERFACE.h"


int main(void)
{
    TIMER0_voidInit();
	
	Dio_SetPinDirection(DIO_PORTA,DIO_PIN0,DIO_PIN_OUTPUT);
	
    while (1) 
    {
		Dio_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_PIN_HIGH);
		
		
    }
}

