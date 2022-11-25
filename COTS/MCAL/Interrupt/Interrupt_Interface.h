/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 24-12-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : Interrupt_Interface.h	     */
/*****************************************/

#ifndef _INTERRUPT_INTERFACE_H_
#define _INTERRUPT_INTERFACE_H_

void IntPrioruty_Init(void);
void GeneralIntEnable(void);
void GeneralIntDisable(void); 
void IntPrioritySet(u8 Interrupt,u8 Priority);

#endif
