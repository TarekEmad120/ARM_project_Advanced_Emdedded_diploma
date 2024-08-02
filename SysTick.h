/******************************************************************************
 *
 * Module: SYSTICK
 *
 * File Name: SYSTICK.h
 *
 * Description: Header file for the ARM Cortex M4 SYSTICK driver
 *
 * Author: Tarek Emad
 *
 *******************************************************************************/


#ifndef SYSTICK_H_
#define SYSTICK_H_

/************************************ Systick Timer Driver ************************************/

/* this is driver for systick timer in tm4c123gh6pm microcontroller for tiva c launchpad */

#include "tm4c123gh6pm_registers.h"
#include "std_types.h"


/*******************************************************************************
 *                           Functions prototypes                              *
 *******************************************************************************/

/* this function is used to initialize the systick timer */
/* Description: Initialize the SysTick timer with the specified time in milliseconds 
using interrupts. This function is used to setup the timer to generate periodic 
interrupts every specified time in milliseconds.
*/
void SysTick_Init(uint16 a_TimeInMilliSeconds);

/* this function will use busy wait techinque */
/*Description: Initialize the SysTick timer with the specified time in milliseconds 
using polling or busy-wait technique. The function should exit when the time is 
elapsed and stops the timer at the end.*/
void SysTick_StartBusyWait(uint16 a_TimeInMilliSeconds);

/* this function will use interrupts */
/* Description: Handler for SysTick interrupt use to call the call-back function.*/
void SysTick_Handler(void);

/* Description: Function to setup the SysTick Timer call back to be executed in the SysTick Handler.*/

void SysTick_SetCallBack(volatile void (*Ptr2Func) (void));

/* Description: Function to stop the SysTick Timer.*/
void SysTick_Stop(void);

/* Description: Function to resume the SysTick Timer.*/
void SysTick_Start(void);

/* Description: Function to Deinitialize the SysTick Timer.*/
 void SysTick_DeInit(void);





#endif /* SYSTICK_H_ */
