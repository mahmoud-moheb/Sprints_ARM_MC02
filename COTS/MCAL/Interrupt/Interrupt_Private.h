/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 24-12-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : Interrupt_Private.h	     */
/*****************************************/

#include "STD_TYPES.h"
#ifndef _INTERRUPT_PRIVATE_H_
#define _INTERRUPT_PRIVATE_H_

#define SCBBaseAddress  0xE000E000
#define ACTLR           *((volatile u32*)(SCBBaseAddress+0x008))
#define CPUID           *((volatile u32*)(SCBBaseAddress+0xD00))
#define INCTRL          *((volatile u32*)(SCBBaseAddress+0xD04))
#define VTABLE          *((volatile u32*)(SCBBaseAddress+0xD08))
#define APINT           *((volatile u32*)(SCBBaseAddress+0xD0C))
#define SYSCTRL         *((volatile u32*)(SCBBaseAddress+0xD10))
#define CFGCTRL         *((volatile u32*)(SCBBaseAddress+0xD14))
#define SYSPRI1         *((volatile u32*)(SCBBaseAddress+0xD18))
#define SYSPRI2         *((volatile u32*)(SCBBaseAddress+0xD1C))
#define SYSPRI3         *((volatile u32*)(SCBBaseAddress+0xD20))
#define SYSHNDCTRL      *((volatile u32*)(SCBBaseAddress+0xD24))
#define FAULTSTAT       *((volatile u32*)(SCBBaseAddress+0xD28))
#define HFAULTSTAT      *((volatile u32*)(SCBBaseAddress+0xD2C))
#define MMADDR          *((volatile u32*)(SCBBaseAddress+0xD34))
#define FAULTADDR       *((volatile u32*)(SCBBaseAddress+0xD38))

/*              Interrupts                 */
#define UsageFault             				0
#define BusFault               				1
#define MemoryManagementFault  				2
#define SVCall   							3
#define SysTickException   					4
#define PendSV 			   					5
#define Debug   							6

#endif
