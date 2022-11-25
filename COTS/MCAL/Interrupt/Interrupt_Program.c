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

void IntPrioruty_Init()
{
	SYSPRI1 |=(UsageFaultPriority<<21);
	SYSPRI1 |=(BusFaultPriority<<13);
	SYSPRI1 |=(MemoryManagementFaultPriority<<5); 
	SYSPRI2 |=(SVCallPriority<<29);
	SYSPRI3 |=(SysTickExceptionPriority<<29);
	SYSPRI3 |=(PendSVPriority<<21);
	SYSPRI3 |=(DebugPriority<<5);
}


void GeneralIntEnable()
{
	/*reset bit 0 in PRIMASK register  */
	__asm("CPSIE i");
        
	/*reset bit 0 in FAULTMASK register*/
	__asm("CPSIE f");
	
	/*unmask all interrupts            */
	__asm("LDR R4, =0x00000000");
	__asm("MSR BASEPRI, R4");
	
}
void GeneralIntDisable()
{
	/*reset bit 0 in PRIMASK register   */
	__asm("CPSID i");
	
	/*reset bit 0 in FAULTMASK register*/
	__asm("CPSID f");
	
	/*mask all interrupts              */
	__asm("LDR R4, =0x00000020");
	__asm("MSR BASEPRI, R4");
}	

void IntPrioritySet(u8 Interrupt,u8 Priority)
{
	if(Interrupt == UsageFault)
	{
		SYSPRI1 |=(Priority<<21);
	}
	else if(Interrupt == BusFault)
	{
		SYSPRI1 |=(Priority<<13);
	}
	else if(Interrupt == MemoryManagementFault)
	{
		SYSPRI1 |=(Priority<<5); 
	}
	else if(Interrupt == SVCall)
	{
		SYSPRI2 |=(Priority<<29);
	}
	else if(Interrupt == SysTickException)
	{
		SYSPRI3 |=(Priority<<29);
	}
	else if(Interrupt == PendSV)
	{
		SYSPRI3 |=(Priority<<21);
	}
	else if(Interrupt == Debug)
	{
		SYSPRI3 |=(Priority<<5);
	}
}
