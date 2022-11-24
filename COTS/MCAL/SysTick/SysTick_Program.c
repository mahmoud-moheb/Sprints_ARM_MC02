/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 12-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : SysTick_Program.c	         */
/*****************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SysTick_Private.h"
#include "SysTick_Configuration.h"
#include "SysTick_Interface.h"


void SysTick_Init(void)
{
	#if   SCLK_SCR == SystemClock
		SET_BIT(STCTRL,2);
	#elif SCR == InternalOscillatorDivBy4
		RESET_BIT(STCTRL,2);
	#endif
	RESET_BIT(STCTRL,0);                 			   /*      Disable SysTick      */
	RESET_BIT(STCTRL,1);                 			   /* Disable SysTick Interrupt */
	STRELOAD  = 0x00FFFFFF&ReloadValue;                /*      Set Reload Value      */
	STCURRENT = 0;                                     /*    Reset Count Register    */
}

void SysTick_Enable(void)
{
	SET_BIT(STCTRL,0);                 	    /*       Enable SysTick       */
}

void SysTick_Disable(void)
{
	RESET_BIT(STCTRL,0);                 	 /*      Disable SysTick      */
}

void SysTickI_Enable(void)
{
	SET_BIT(STCTRL,1);                   	 /*  Enable SysTick Interrupt */
}

void SysTickI_Disable(void)
{
	RESET_BIT(STCTRL,1);                 	 /* Disable SysTick Interrupt */
}
/***********************************************************************************************************/
static void (*SysTick_CallBack) (void);  
void SysTick_SetCallBack(void (*fun_ptr) (void));  	   						   /*       Prototype          */
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