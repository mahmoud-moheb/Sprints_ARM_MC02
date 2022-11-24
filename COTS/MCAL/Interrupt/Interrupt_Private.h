/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 12-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : SysTick_Private.h	         */
/*****************************************/

#include "STD_TYPES.h"
#ifndef _SYSTICK_PRIVATE_H_
#define _SYSTICK_PRIVATE_H_

#define SysTickBaseAddress 0xE000E000
#define STCTRL      *((volatile u32*)(SysTickBaseAddress+0x010))  /*SysTick Control and Status*/
#define STRELOAD    *((volatile u32*)(SysTickBaseAddress+0x014))  /*SysTick Reload Value      */
#define STCURRENT   *((volatile u32*)(SysTickBaseAddress+0x018))  /*SysTick Current Value     */

/*SysTick clock source*/
#define InternalOscillatorDivBy4 0
#define SystemClock              1

#endif
