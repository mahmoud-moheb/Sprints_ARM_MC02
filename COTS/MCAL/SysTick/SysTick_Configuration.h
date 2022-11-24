/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 12-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : SysTick_Configuration.h	 */
/*****************************************/

#ifndef _SYSTICK_CONFIGURATION_H_
#define _SYSTICK_CONFIGURATION_H_

#define SCLK_SCR       SystemClock
#define ReloadValue    0x00027100   /* 0x0000003C  make interrupt every 1us   frequency 1MHz     */
																		/* 0x000000A0  make interrupt every 10us  frequency 100KHz   */
																		/* 0x00000320  make interrupt every 50us  frequency 20KHz    */
																		/* 0x00000640  make interrupt every 100us frequency 10KHz    */
																		/* 0x00001F40  make interrupt every 500us frequency 2KHz     */
																		/* 0x00003E80  make interrupt every 1ms   frequency 1KHz     */
																		/* 0x00027100  make interrupt every 10ms  frequency 100Hz    */
																		/* 0x007A1200  make interrupt every 500ms frequency 2Hz      */
																		/*0x0001E000*/
#endif
