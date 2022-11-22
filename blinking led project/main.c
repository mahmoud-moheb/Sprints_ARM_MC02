#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ClockControl_Private.h"
#include "ClockControl_Configuration.h"
#include "ClockControl_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Configuration.h"
#include "GPIO_Interface.h"
#include "SysTick_Private.h"
#include "SysTick_Configuration.h"
#include "SysTick_Interface.h"
static u32 OnTime  = 1;
static u32 OffTime = 1;
static u8 OnStatus = 0;
static u8 OffStatus = 1;
static u32 i = 0;
static u32 j = 0;
void SysTick(void);                                     /*prototype for systick isr*/
extern void SysTick_SetCallBack(void (*fun_ptr) (void));/*extern SysTick_SetCallBack function which defined in another .c file (SysTick_Program.c) */ 
int main(void)
{
	SysTick_SetCallBack(SysTick);
	ClockControl_int();
	GPIO_Init();
  SysTick_Init();
	SysTickI_Enable();
	SysTick_Enable();
	while (1)
	{	
		if(i >= (OffTime*100))
		{
			i = 0;
			OnStatus = 1;
			OffStatus = 0;
			TOGGLE_BIT(PORTF_GPIODATA,1);
		}
		else if(j >= (OnTime*100))
		{
			j = 0;
			OnStatus = 0;
			OffStatus = 1;
			TOGGLE_BIT(PORTF_GPIODATA,1);
		}
		
	}
}

void SysTick(void)
{
	if(OffStatus == 1 && OnStatus == 0)
	{
		i++;
	}
	else if (OffStatus == 0 && OnStatus == 1)
	{
		j++;
	} 
}







