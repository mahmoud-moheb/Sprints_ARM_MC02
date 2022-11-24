/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 24-12-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : Led_Configuration.h   		 */
/*****************************************/

#ifndef _LED_CONFIGURATION_H_
#define _LED_CONFIGURATION_H_

#define Led_type 	   Led
#if Led_type == Led
	#define Led_port       PORTF
	#define Led_BinNum     1
#elif Led_type == RGB_Led
	#define LedR_port      PORTF
	#define LedR_BinNum    1
	#define LedG_port      PORTF
	#define LedG_BinNum    3
	#define LedB_port      PORTF
	#define LedB_BinNum    2
#endif
	
#endif
