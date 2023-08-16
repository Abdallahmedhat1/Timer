/*
 * EXTI_Private.h
 *
 * Created: 7/15/2023 5:49:49 PM
 *  Author:  Abdallah Medhat
 */ 


#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_


#define MCUCR_REG   *((volatile u8 *)0x55)
#define MCUCSR_REG  *((volatile u8 *)0x54)
#define GICR_REG    *((volatile u8 *)0x5B)
#define GIFR_REG    *((volatile u8 *)0x5A)

#define NULL 0



#endif /* EXTI_PRIVATE_H_ */