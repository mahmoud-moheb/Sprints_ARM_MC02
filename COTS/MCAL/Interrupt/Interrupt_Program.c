/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 24-12-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : Interrupt_Program.c	     */
/*****************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Interrupt_Private.h"
#include "Interrupt_Configuration.h"
#include "Interrupt_Interface.h"
/***********************************************************************************************************/
static void (*SysTick_CallBack) (void);  
void SysTick_SetCallBack(void (*fun_ptr) (void))  	   						   /*create pointer to function*/
{
	SysTick_CallBack=fun_ptr;                 /*pointer created equal to pointer that refer to isr function*/
}
void SysTick_Handler(void) __attribute__((used));
void SysTick_Handler(void) 
{
	/*SysTick_Disable();*/
	GET_BITVAL(STCTRL,16);
	SysTick_CallBack();
	/*STCURRENT = 1;
	SysTick_Enable();*/
}

/***********************************************************************************************************/
