/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 16-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : GPIO_Program.c	             */
/*****************************************/
#include "GPIO_Private.h"
#include "GPIO_Configuration.h"
#include "GPIO_Interface.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"

void GPIO_Init(void)
{
	/**************************************************/
	#if    PORTAPin0_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,0);
		#if    PORTAPin0_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,0);
		#elif  PORTAPin0_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,0);
		#endif
		#if    PORTAPin0_Direction == Input
			RESET_BIT(PORTA_GPIODIR,0);
			#if    PORTAPin0_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,0);
				RESET_BIT(PORTA_GPIOPDR,0);
				RESET_BIT(PORTA_GPIOODR,0);
			#elif  PORTAPin0_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,0);
				RESET_BIT(PORTA_GPIOPDR,0);
				RESET_BIT(PORTA_GPIOODR,0);
			#elif  PORTAPin0_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,0);
				SET_BIT(PORTA_GPIOPDR,0);
				RESET_BIT(PORTA_GPIOODR,0);
			#elif  PORTAPin0_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,0);
				RESET_BIT(PORTA_GPIOPDR,0);
				SET_BIT(PORTA_GPIOODR,0);
			#endif
		#elif  PORTAPin0_Direction == Output
			SET_BIT(PORTA_GPIODIR,0);
			#if    PORTAPin0_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,0);
				RESET_BIT(PORTA_GPIODR4R,0);
				RESET_BIT(PORTA_GPIODR8R,0);
			#elif  PORTAPin0_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,0);
				SET_BIT(PORTA_GPIODR4R,0);
				RESET_BIT(PORTA_GPIODR8R,0);
			#elif  PORTAPin0_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,0);
				RESET_BIT(PORTA_GPIODR4R,0);
				SET_BIT(PORTA_GPIODR8R,0);
			#endif
		#endif
	#elif  PORTAPin0_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,0);
	#endif
	#if    PORTAPin1_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,1);
		#if    PORTAPin1_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,1);
		#elif  PORTAPin1_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,1);
		#endif
		#if    PORTAPin1_Direction == Input
			RESET_BIT(PORTA_GPIODIR,1);
			#if    PORTAPin1_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,1);
				RESET_BIT(PORTA_GPIOPDR,1);
				RESET_BIT(PORTA_GPIOODR,1);
			#elif  PORTAPin1_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,1);
				RESET_BIT(PORTA_GPIOPDR,1);
				RESET_BIT(PORTA_GPIOODR,1);
			#elif  PORTAPin1_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,1);
				SET_BIT(PORTA_GPIOPDR,1);
				RESET_BIT(PORTA_GPIOODR,1);
			#elif  PORTAPin1_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,1);
				RESET_BIT(PORTA_GPIOPDR,1);
				SET_BIT(PORTA_GPIOODR,1);
			#endif
		#elif  PORTAPin1_Direction == Output
			SET_BIT(PORTA_GPIODIR,1);
			#if    PORTAPin1_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,1);
				RESET_BIT(PORTA_GPIODR4R,1);
				RESET_BIT(PORTA_GPIODR8R,1);
			#elif  PORTAPin1_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,1);
				SET_BIT(PORTA_GPIODR4R,1);
				RESET_BIT(PORTA_GPIODR8R,1);
			#elif  PORTAPin1_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,1);
				RESET_BIT(PORTA_GPIODR4R,1);
				SET_BIT(PORTA_GPIODR8R,1);
			#endif
		#endif
	#elif  PORTAPin1_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,1);
	#endif
	#if    PORTAPin2_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,2);
		#if    PORTAPin2_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,2);
		#elif  PORTAPin2_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,2);
		#endif
		#if    PORTAPin2_Direction == Input
			RESET_BIT(PORTA_GPIODIR,2);
			#if    PORTAPin2_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,2);
				RESET_BIT(PORTA_GPIOPDR,2);
				RESET_BIT(PORTA_GPIOODR,2);
			#elif  PORTAPin2_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,2);
				RESET_BIT(PORTA_GPIOPDR,2);
				RESET_BIT(PORTA_GPIOODR,2);
			#elif  PORTAPin2_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,2);
				SET_BIT(PORTA_GPIOPDR,2);
				RESET_BIT(PORTA_GPIOODR,2);
			#elif  PORTAPin2_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,2);
				RESET_BIT(PORTA_GPIOPDR,2);
				SET_BIT(PORTA_GPIOODR,2);
			#endif
		#elif  PORTAPin2_Direction == Output
			SET_BIT(PORTA_GPIODIR,2);
			#if    PORTAPin2_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,2);
				RESET_BIT(PORTA_GPIODR4R,2);
				RESET_BIT(PORTA_GPIODR8R,2);
			#elif  PORTAPin2_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,2);
				SET_BIT(PORTA_GPIODR4R,2);
				RESET_BIT(PORTA_GPIODR8R,2);
			#elif  PORTAPin2_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,2);
				RESET_BIT(PORTA_GPIODR4R,2);
				SET_BIT(PORTA_GPIODR8R,2);
			#endif
		#endif
	#elif  PORTAPin2_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,2);
	#endif
	#if    PORTAPin3_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,3);
		#if    PORTAPin3_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,3);
		#elif  PORTAPin3_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,3);
		#endif
		#if    PORTAPin0_Direction == Input
			RESET_BIT(PORTA_GPIODIR,3);
			#if    PORTAPin3_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,3);
				RESET_BIT(PORTA_GPIOPDR,3);
				RESET_BIT(PORTA_GPIOODR,3);
			#elif  PORTAPin3_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,3);
				RESET_BIT(PORTA_GPIOPDR,3);
				RESET_BIT(PORTA_GPIOODR,3);
			#elif  PORTAPin3_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,3);
				SET_BIT(PORTA_GPIOPDR,3);
				RESET_BIT(PORTA_GPIOODR,3);
			#elif  PORTAPin3_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,3);
				RESET_BIT(PORTA_GPIOPDR,3);
				SET_BIT(PORTA_GPIOODR,3);
			#endif
		#elif  PORTAPin0_Direction == Output
			SET_BIT(PORTA_GPIODIR,3);
			#if    PORTAPin3_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,3);
				RESET_BIT(PORTA_GPIODR4R,3);
				RESET_BIT(PORTA_GPIODR8R,3);
			#elif  PORTAPin3_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,3);
				SET_BIT(PORTA_GPIODR4R,3);
				RESET_BIT(PORTA_GPIODR8R,3);
			#elif  PORTAPin3_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,3);
				RESET_BIT(PORTA_GPIODR4R,3);
				SET_BIT(PORTA_GPIODR8R,3);
			#endif
		#endif
	#elif  PORTAPin3_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,3);
	#endif
	#if    PORTAPin4_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,4);
		#if    PORTAPin4_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,4);
		#elif  PORTAPin4_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,4);
		#endif
		#if    PORTAPin0_Direction == Input
			RESET_BIT(PORTA_GPIODIR,4);
			#if    PORTAPin4_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,4);
				RESET_BIT(PORTA_GPIOPDR,4);
				RESET_BIT(PORTA_GPIOODR,4);
			#elif  PORTAPin4_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,4);
				RESET_BIT(PORTA_GPIOPDR,4);
				RESET_BIT(PORTA_GPIOODR,4);
			#elif  PORTAPin4_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,4);
				SET_BIT(PORTA_GPIOPDR,4);
				RESET_BIT(PORTA_GPIOODR,4);
			#elif  PORTAPin4_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,4);
				RESET_BIT(PORTA_GPIOPDR,4);
				SET_BIT(PORTA_GPIOODR,4);
			#endif
		#elif  PORTAPin0_Direction == Output
			SET_BIT(PORTA_GPIODIR,4);
			#if    PORTAPin4_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,4);
				RESET_BIT(PORTA_GPIODR4R,4);
				RESET_BIT(PORTA_GPIODR8R,4);
			#elif  PORTAPin4_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,4);
				SET_BIT(PORTA_GPIODR4R,4);
				RESET_BIT(PORTA_GPIODR8R,4);
			#elif  PORTAPin4_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,4);
				RESET_BIT(PORTA_GPIODR4R,4);
				SET_BIT(PORTA_GPIODR8R,4);
			#endif
		#endif
	#elif  PORTAPin4_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,4);
	#endif
	#if    PORTAPin5_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,5);
		#if    PORTAPin5_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,5);
		#elif  PORTAPin5_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,5);
		#endif
		#if    PORTAPin5_Direction == Input
			RESET_BIT(PORTA_GPIODIR,5);
			#if    PORTAPin5_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,5);
				RESET_BIT(PORTA_GPIOPDR,5);
				RESET_BIT(PORTA_GPIOODR,5);
			#elif  PORTAPin5_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,5);
				RESET_BIT(PORTA_GPIOPDR,5);
				RESET_BIT(PORTA_GPIOODR,5);
			#elif  PORTAPin5_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,5);
				SET_BIT(PORTA_GPIOPDR,5);
				RESET_BIT(PORTA_GPIOODR,5);
			#elif  PORTAPin5_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,5);
				RESET_BIT(PORTA_GPIOPDR,5);
				SET_BIT(PORTA_GPIOODR,5);
			#endif
		#elif  PORTAPin5_Direction == Output
			SET_BIT(PORTA_GPIODIR,5);
			#if    PORTAPin5_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,5);
				RESET_BIT(PORTA_GPIODR4R,5);
				RESET_BIT(PORTA_GPIODR8R,5);
			#elif  PORTAPin5_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,5);
				SET_BIT(PORTA_GPIODR4R,5);
				RESET_BIT(PORTA_GPIODR8R,5);
			#elif  PORTAPin5_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,5);
				RESET_BIT(PORTA_GPIODR4R,5);
				SET_BIT(PORTA_GPIODR8R,5);
			#endif
		#endif
	#elif  PORTAPin5_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,5);
	#endif
	#if    PORTAPin6_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,6);
		#if    PORTAPin6_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,6);
		#elif  PORTAPin6_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,6);
		#endif
		#if    PORTAPin6_Direction == Input
			RESET_BIT(PORTA_GPIODIR,6);
			#if    PORTAPin6_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,6);
				RESET_BIT(PORTA_GPIOPDR,6);
				RESET_BIT(PORTA_GPIOODR,6);
			#elif  PORTAPin6_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,6);
				RESET_BIT(PORTA_GPIOPDR,6);
				RESET_BIT(PORTA_GPIOODR,6);
			#elif  PORTAPin6_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,6);
				SET_BIT(PORTA_GPIOPDR,6);
				RESET_BIT(PORTA_GPIOODR,6);
			#elif  PORTAPin6_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,6);
				RESET_BIT(PORTA_GPIOPDR,6);
				SET_BIT(PORTA_GPIOODR,6);
			#endif
		#elif  PORTAPin6_Direction == Output
			SET_BIT(PORTA_GPIODIR,6);
			#if    PORTAPin6_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,6);
				RESET_BIT(PORTA_GPIODR4R,6);
				RESET_BIT(PORTA_GPIODR8R,6);
			#elif  PORTAPin6_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,6);
				SET_BIT(PORTA_GPIODR4R,6);
				RESET_BIT(PORTA_GPIODR8R,6);
			#elif  PORTAPin6_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,6);
				RESET_BIT(PORTA_GPIODR4R,6);
				SET_BIT(PORTA_GPIODR8R,6);
			#endif
		#endif
	#elif  PORTAPin6_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,6);
	#endif
	#if    PORTAPin7_DigitalInputOutput == Enable
		SET_BIT(PORTA_GPIODEN,7);
		#if    PORTAPin7_Function == DIO
			RESET_BIT(PORTA_GPIOAFSEL,7);
		#elif  PORTAPin7_Function == AlternateFunction
			SET_BIT(PORTA_GPIOAFSEL,7);
		#endif
		#if    PORTAPin7_Direction == Input
			RESET_BIT(PORTA_GPIODIR,7);
			#if    PORTAPin7_InternalConnection == Off 
				RESET_BIT(PORTA_GPIOPUR,7);
				RESET_BIT(PORTA_GPIOPDR,7);
				RESET_BIT(PORTA_GPIOODR,7);
			#elif  PORTAPin7_InternalConnection == PullUp 
				SET_BIT(PORTA_GPIOPUR,7);
				RESET_BIT(PORTA_GPIOPDR,7);
				RESET_BIT(PORTA_GPIOODR,7);
			#elif  PORTAPin7_InternalConnection == PullDown
				RESET_BIT(PORTA_GPIOPUR,7);
				SET_BIT(PORTA_GPIOPDR,7);
				RESET_BIT(PORTA_GPIOODR,7);
			#elif  PORTAPin7_InternalConnection == OpenDrain
				RESET_BIT(PORTA_GPIOPUR,7);
				RESET_BIT(PORTA_GPIOPDR,7);
				SET_BIT(PORTA_GPIOODR,7);
			#endif
		#elif  PORTAPin7_Direction == Output
			SET_BIT(PORTA_GPIODIR,7);
			#if    PORTAPin7_DriveStrength == DS_2ma 
				SET_BIT(PORTA_GPIODR2R,7);
				RESET_BIT(PORTA_GPIODR4R,7);
				RESET_BIT(PORTA_GPIODR8R,7);
			#elif  PORTAPin7_DriveStrength == DS_4ma
				RESET_BIT(PORTA_GPIODR2R,7);
				SET_BIT(PORTA_GPIODR4R,7);
				RESET_BIT(PORTA_GPIODR8R,7);
			#elif  PORTAPin7_DriveStrength == DS_8ma
				RESET_BIT(PORTA_GPIODR2R,7);
				RESET_BIT(PORTA_GPIODR4R,7);
				SET_BIT(PORTA_GPIODR8R,7);
			#endif
		#endif
	#elif  PORTAPin7_DigitalInputOutput == Disable
		RESET_BIT(PORTA_GPIODEN,7);
	#endif
	/**************************************************/
	#if    PORTBPin0_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,0);
		#if    PORTBPin0_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,0);
		#elif  PORTBPin0_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,0);
		#endif
		#if    PORTBPin0_Direction == Input
			RESET_BIT(PORTB_GPIODIR,0);
			#if    PORTBPin0_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,0);
				RESET_BIT(PORTB_GPIOPDR,0);
				RESET_BIT(PORTB_GPIOODR,0);
			#elif  PORTBPin0_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,0);
				RESET_BIT(PORTB_GPIOPDR,0);
				RESET_BIT(PORTB_GPIOODR,0);
			#elif  PORTBPin0_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,0);
				SET_BIT(PORTB_GPIOPDR,0);
				RESET_BIT(PORTB_GPIOODR,0);
			#elif  PORTBPin0_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,0);
				RESET_BIT(PORTB_GPIOPDR,0);
				SET_BIT(PORTB_GPIOODR,0);
			#endif
		#elif  PORTBPin0_Direction == Output
			SET_BIT(PORTB_GPIODIR,0);
			#if    PORTBPin0_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,0);
				RESET_BIT(PORTB_GPIODR4R,0);
				RESET_BIT(PORTB_GPIODR8R,0);
			#elif  PORTBPin0_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,0);
				SET_BIT(PORTB_GPIODR4R,0);
				RESET_BIT(PORTB_GPIODR8R,0);
			#elif  PORTBPin0_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,0);
				RESET_BIT(PORTB_GPIODR4R,0);
				SET_BIT(PORTB_GPIODR8R,0);
			#endif
		#endif
	#elif  PORTBPin0_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,1);
	#endif
	#if    PORTBPin1_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,1);
		#if    PORTBPin1_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,1);
		#elif  PORTBPin1_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,1);
		#endif
		#if    PORTBPin1_Direction == Input
			RESET_BIT(PORTB_GPIODIR,1);
			#if    PORTBPin1_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,1);
				RESET_BIT(PORTB_GPIOPDR,1);
				RESET_BIT(PORTB_GPIOODR,1);
			#elif  PORTBPin1_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,1);
				RESET_BIT(PORTB_GPIOPDR,1);
				RESET_BIT(PORTB_GPIOODR,1);
			#elif  PORTBPin1_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,1);
				SET_BIT(PORTB_GPIOPDR,1);
				RESET_BIT(PORTB_GPIOODR,1);
			#elif  PORTBPin1_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,1);
				RESET_BIT(PORTB_GPIOPDR,1);
				SET_BIT(PORTB_GPIOODR,1);
			#endif
		#elif  PORTBPin1_Direction == Output
			SET_BIT(PORTB_GPIODIR,1);
			#if    PORTBPin1_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,1);
				RESET_BIT(PORTB_GPIODR4R,1);
				RESET_BIT(PORTB_GPIODR8R,1);
			#elif  PORTBPin1_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,1);
				SET_BIT(PORTB_GPIODR4R,1);
				RESET_BIT(PORTB_GPIODR8R,1);
			#elif  PORTBPin1_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,1);
				RESET_BIT(PORTB_GPIODR4R,1);
				SET_BIT(PORTB_GPIODR8R,1);
			#endif
		#endif
	#elif  PORTBPin1_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,1);
	#endif
	#if    PORTBPin2_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,2);
		#if    PORTBPin2_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,2);
		#elif  PORTBPin2_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,2);
		#endif
		#if    PORTBPin2_Direction == Input
			RESET_BIT(PORTB_GPIODIR,2);
			#if    PORTBPin2_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,2);
				RESET_BIT(PORTB_GPIOPDR,2);
				RESET_BIT(PORTB_GPIOODR,2);
			#elif  PORTBPin2_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,2);
				RESET_BIT(PORTB_GPIOPDR,2);
				RESET_BIT(PORTB_GPIOODR,2);
			#elif  PORTBPin2_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,2);
				SET_BIT(PORTB_GPIOPDR,2);
				RESET_BIT(PORTB_GPIOODR,2);
			#elif  PORTBPin2_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,2);
				RESET_BIT(PORTB_GPIOPDR,2);
				SET_BIT(PORTB_GPIOODR,2);
			#endif
		#elif  PORTBPin2_Direction == Output
			SET_BIT(PORTB_GPIODIR,2);
			#if    PORTBPin2_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,2);
				RESET_BIT(PORTB_GPIODR4R,2);
				RESET_BIT(PORTB_GPIODR8R,2);
			#elif  PORTBPin2_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,2);
				SET_BIT(PORTB_GPIODR4R,2);
				RESET_BIT(PORTB_GPIODR8R,2);
			#elif  PORTBPin2_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,2);
				RESET_BIT(PORTB_GPIODR4R,2);
				SET_BIT(PORTB_GPIODR8R,2);
			#endif
		#endif
	#elif  PORTBPin2_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,2);
	#endif
	#if    PORTBPin3_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,3);
		#if    PORTBPin3_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,3);
		#elif  PORTBPin3_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,3);
		#endif
		#if    PORTBPin0_Direction == Input
			RESET_BIT(PORTB_GPIODIR,3);
			#if    PORTBPin3_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,3);
				RESET_BIT(PORTB_GPIOPDR,3);
				RESET_BIT(PORTB_GPIOODR,3);
			#elif  PORTBPin3_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,3);
				RESET_BIT(PORTB_GPIOPDR,3);
				RESET_BIT(PORTB_GPIOODR,3);
			#elif  PORTBPin3_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,3);
				SET_BIT(PORTB_GPIOPDR,3);
				RESET_BIT(PORTB_GPIOODR,3);
			#elif  PORTBPin3_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,3);
				RESET_BIT(PORTB_GPIOPDR,3);
				SET_BIT(PORTB_GPIOODR,3);
			#endif
		#elif  PORTBPin0_Direction == Output
			SET_BIT(PORTB_GPIODIR,3);
			#if    PORTBPin3_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,3);
				RESET_BIT(PORTB_GPIODR4R,3);
				RESET_BIT(PORTB_GPIODR8R,3);
			#elif  PORTBPin3_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,3);
				SET_BIT(PORTB_GPIODR4R,3);
				RESET_BIT(PORTB_GPIODR8R,3);
			#elif  PORTBPin3_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,3);
				RESET_BIT(PORTB_GPIODR4R,3);
				SET_BIT(PORTB_GPIODR8R,3);
			#endif
		#endif
	#elif  PORTBPin3_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,3);
	#endif
	#if    PORTBPin4_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,4);
		#if    PORTBPin4_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,4);
		#elif  PORTBPin4_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,4);
		#endif
		#if    PORTBPin0_Direction == Input
			RESET_BIT(PORTB_GPIODIR,4);
			#if    PORTBPin4_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,4);
				RESET_BIT(PORTB_GPIOPDR,4);
				RESET_BIT(PORTB_GPIOODR,4);
			#elif  PORTBPin4_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,4);
				RESET_BIT(PORTB_GPIOPDR,4);
				RESET_BIT(PORTB_GPIOODR,4);
			#elif  PORTBPin4_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,4);
				SET_BIT(PORTB_GPIOPDR,4);
				RESET_BIT(PORTB_GPIOODR,4);
			#elif  PORTBPin4_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,4);
				RESET_BIT(PORTB_GPIOPDR,4);
				SET_BIT(PORTB_GPIOODR,4);
			#endif
		#elif  PORTBPin0_Direction == Output
			SET_BIT(PORTB_GPIODIR,4);
			#if    PORTBPin4_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,4);
				RESET_BIT(PORTB_GPIODR4R,4);
				RESET_BIT(PORTB_GPIODR8R,4);
			#elif  PORTBPin4_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,4);
				SET_BIT(PORTB_GPIODR4R,4);
				RESET_BIT(PORTB_GPIODR8R,4);
			#elif  PORTBPin4_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,4);
				RESET_BIT(PORTB_GPIODR4R,4);
				SET_BIT(PORTB_GPIODR8R,4);
			#endif
		#endif
	#elif  PORTBPin4_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,4);
	#endif
	#if    PORTBPin5_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,5);
		#if    PORTBPin5_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,5);
		#elif  PORTBPin5_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,5);
		#endif
		#if    PORTBPin5_Direction == Input
			RESET_BIT(PORTB_GPIODIR,5);
			#if    PORTBPin5_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,5);
				RESET_BIT(PORTB_GPIOPDR,5);
				RESET_BIT(PORTB_GPIOODR,5);
			#elif  PORTBPin5_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,5);
				RESET_BIT(PORTB_GPIOPDR,5);
				RESET_BIT(PORTB_GPIOODR,5);
			#elif  PORTBPin5_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,5);
				SET_BIT(PORTB_GPIOPDR,5);
				RESET_BIT(PORTB_GPIOODR,5);
			#elif  PORTBPin5_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,5);
				RESET_BIT(PORTB_GPIOPDR,5);
				SET_BIT(PORTB_GPIOODR,5);
			#endif
		#elif  PORTBPin5_Direction == Output
			SET_BIT(PORTB_GPIODIR,5);
			#if    PORTBPin5_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,5);
				RESET_BIT(PORTB_GPIODR4R,5);
				RESET_BIT(PORTB_GPIODR8R,5);
			#elif  PORTBPin5_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,5);
				SET_BIT(PORTB_GPIODR4R,5);
				RESET_BIT(PORTB_GPIODR8R,5);
			#elif  PORTBPin5_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,5);
				RESET_BIT(PORTB_GPIODR4R,5);
				SET_BIT(PORTB_GPIODR8R,5);
			#endif
		#endif
	#elif  PORTBPin5_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,5);
	#endif
	#if    PORTBPin6_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,6);
		#if    PORTBPin6_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,6);
		#elif  PORTBPin6_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,6);
		#endif
		#if    PORTBPin6_Direction == Input
			RESET_BIT(PORTB_GPIODIR,6);
			#if    PORTBPin6_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,6);
				RESET_BIT(PORTB_GPIOPDR,6);
				RESET_BIT(PORTB_GPIOODR,6);
			#elif  PORTBPin6_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,6);
				RESET_BIT(PORTB_GPIOPDR,6);
				RESET_BIT(PORTB_GPIOODR,6);
			#elif  PORTBPin6_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,6);
				SET_BIT(PORTB_GPIOPDR,6);
				RESET_BIT(PORTB_GPIOODR,6);
			#elif  PORTBPin6_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,6);
				RESET_BIT(PORTB_GPIOPDR,6);
				SET_BIT(PORTB_GPIOODR,6);
			#endif
		#elif  PORTBPin6_Direction == Output
			SET_BIT(PORTB_GPIODIR,6);
			#if    PORTBPin6_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,6);
				RESET_BIT(PORTB_GPIODR4R,6);
				RESET_BIT(PORTB_GPIODR8R,6);
			#elif  PORTBPin6_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,6);
				SET_BIT(PORTB_GPIODR4R,6);
				RESET_BIT(PORTB_GPIODR8R,6);
			#elif  PORTBPin6_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,6);
				RESET_BIT(PORTB_GPIODR4R,6);
				SET_BIT(PORTB_GPIODR8R,6);
			#endif
		#endif
	#elif  PORTBPin6_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,6);
	#endif
	#if    PORTBPin7_DigitalInputOutput == Enable
		SET_BIT(PORTB_GPIODEN,7);
		#if    PORTBPin7_Function == DIO
			RESET_BIT(PORTB_GPIOAFSEL,7);
		#elif  PORTBPin7_Function == AlternateFunction
			SET_BIT(PORTB_GPIOAFSEL,7);
		#endif
		#if    PORTBPin7_Direction == Input
			RESET_BIT(PORTB_GPIODIR,7);
			#if    PORTBPin7_InternalConnection == Off 
				RESET_BIT(PORTB_GPIOPUR,7);
				RESET_BIT(PORTB_GPIOPDR,7);
				RESET_BIT(PORTB_GPIOODR,7);
			#elif  PORTBPin7_InternalConnection == PullUp 
				SET_BIT(PORTB_GPIOPUR,7);
				RESET_BIT(PORTB_GPIOPDR,7);
				RESET_BIT(PORTB_GPIOODR,7);
			#elif  PORTBPin7_InternalConnection == PullDown
				RESET_BIT(PORTB_GPIOPUR,7);
				SET_BIT(PORTB_GPIOPDR,7);
				RESET_BIT(PORTB_GPIOODR,7);
			#elif  PORTBPin7_InternalConnection == OpenDrain
				RESET_BIT(PORTB_GPIOPUR,7);
				RESET_BIT(PORTB_GPIOPDR,7);
				SET_BIT(PORTB_GPIOODR,7);
			#endif
		#elif  PORTBPin7_Direction == Output
			SET_BIT(PORTB_GPIODIR,7);
			#if    PORTBPin7_DriveStrength == DS_2ma 
				SET_BIT(PORTB_GPIODR2R,7);
				RESET_BIT(PORTB_GPIODR4R,7);
				RESET_BIT(PORTB_GPIODR8R,7);
			#elif  PORTBPin7_DriveStrength == DS_4ma
				RESET_BIT(PORTB_GPIODR2R,7);
				SET_BIT(PORTB_GPIODR4R,7);
				RESET_BIT(PORTB_GPIODR8R,7);
			#elif  PORTBPin7_DriveStrength == DS_8ma
				RESET_BIT(PORTB_GPIODR2R,7);
				RESET_BIT(PORTB_GPIODR4R,7);
				SET_BIT(PORTB_GPIODR8R,7);
			#endif
		#endif
	#elif  PORTBPin7_DigitalInputOutput == Disable
		RESET_BIT(PORTB_GPIODEN,7);
	#endif
	/**************************************************/
	#if    PORTCPin0_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,0);
		#if    PORTCPin0_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,0);
		#elif  PORTCPin0_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,0);
		#endif
		#if    PORTCPin0_Direction == Input
			RESET_BIT(PORTC_GPIODIR,0);
			#if    PORTCPin0_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,0);
				RESET_BIT(PORTC_GPIOPDR,0);
				RESET_BIT(PORTC_GPIOODR,0);
			#elif  PORTCPin0_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,0);
				RESET_BIT(PORTC_GPIOPDR,0);
				RESET_BIT(PORTC_GPIOODR,0);
			#elif  PORTCPin0_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,0);
				SET_BIT(PORTC_GPIOPDR,0);
				RESET_BIT(PORTC_GPIOODR,0);
			#elif  PORTCPin0_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,0);
				RESET_BIT(PORTC_GPIOPDR,0);
				SET_BIT(PORTC_GPIOODR,0);
			#endif
		#elif  PORTCPin0_Direction == Output
			SET_BIT(PORTC_GPIODIR,0);
			#if    PORTCPin0_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,0);
				RESET_BIT(PORTC_GPIODR4R,0);
				RESET_BIT(PORTC_GPIODR8R,0);
			#elif  PORTCPin0_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,0);
				SET_BIT(PORTC_GPIODR4R,0);
				RESET_BIT(PORTC_GPIODR8R,0);
			#elif  PORTCPin0_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,0);
				RESET_BIT(PORTC_GPIODR4R,0);
				SET_BIT(PORTC_GPIODR8R,0);
			#endif
		#endif
	#elif  PORTCPin0_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,1);
	#endif
	#if    PORTCPin1_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,1);
		#if    PORTCPin1_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,1);
		#elif  PORTCPin1_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,1);
		#endif
		#if    PORTCPin1_Direction == Input
			RESET_BIT(PORTC_GPIODIR,1);
			#if    PORTCPin1_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,1);
				RESET_BIT(PORTC_GPIOPDR,1);
				RESET_BIT(PORTC_GPIOODR,1);
			#elif  PORTCPin1_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,1);
				RESET_BIT(PORTC_GPIOPDR,1);
				RESET_BIT(PORTC_GPIOODR,1);
			#elif  PORTCPin1_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,1);
				SET_BIT(PORTC_GPIOPDR,1);
				RESET_BIT(PORTC_GPIOODR,1);
			#elif  PORTCPin1_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,1);
				RESET_BIT(PORTC_GPIOPDR,1);
				SET_BIT(PORTC_GPIOODR,1);
			#endif
		#elif  PORTCPin1_Direction == Output
			SET_BIT(PORTC_GPIODIR,1);
			#if    PORTCPin1_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,1);
				RESET_BIT(PORTC_GPIODR4R,1);
				RESET_BIT(PORTC_GPIODR8R,1);
			#elif  PORTCPin1_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,1);
				SET_BIT(PORTC_GPIODR4R,1);
				RESET_BIT(PORTC_GPIODR8R,1);
			#elif  PORTCPin1_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,1);
				RESET_BIT(PORTC_GPIODR4R,1);
				SET_BIT(PORTC_GPIODR8R,1);
			#endif
		#endif
	#elif  PORTCPin1_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,1);
	#endif
	#if    PORTCPin2_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,2);
		#if    PORTCPin2_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,2);
		#elif  PORTCPin2_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,2);
		#endif
		#if    PORTCPin2_Direction == Input
			RESET_BIT(PORTC_GPIODIR,2);
			#if    PORTCPin2_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,2);
				RESET_BIT(PORTC_GPIOPDR,2);
				RESET_BIT(PORTC_GPIOODR,2);
			#elif  PORTCPin2_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,2);
				RESET_BIT(PORTC_GPIOPDR,2);
				RESET_BIT(PORTC_GPIOODR,2);
			#elif  PORTCPin2_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,2);
				SET_BIT(PORTC_GPIOPDR,2);
				RESET_BIT(PORTC_GPIOODR,2);
			#elif  PORTCPin2_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,2);
				RESET_BIT(PORTC_GPIOPDR,2);
				SET_BIT(PORTC_GPIOODR,2);
			#endif
		#elif  PORTCPin2_Direction == Output
			SET_BIT(PORTC_GPIODIR,2);
			#if    PORTCPin2_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,2);
				RESET_BIT(PORTC_GPIODR4R,2);
				RESET_BIT(PORTC_GPIODR8R,2);
			#elif  PORTCPin2_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,2);
				SET_BIT(PORTC_GPIODR4R,2);
				RESET_BIT(PORTC_GPIODR8R,2);
			#elif  PORTCPin2_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,2);
				RESET_BIT(PORTC_GPIODR4R,2);
				SET_BIT(PORTC_GPIODR8R,2);
			#endif
		#endif
	#elif  PORTCPin2_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,2);
	#endif
	#if    PORTCPin3_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,3);
		#if    PORTCPin3_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,3);
		#elif  PORTCPin3_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,3);
		#endif
		#if    PORTCPin0_Direction == Input
			RESET_BIT(PORTC_GPIODIR,3);
			#if    PORTCPin3_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,3);
				RESET_BIT(PORTC_GPIOPDR,3);
				RESET_BIT(PORTC_GPIOODR,3);
			#elif  PORTCPin3_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,3);
				RESET_BIT(PORTC_GPIOPDR,3);
				RESET_BIT(PORTC_GPIOODR,3);
			#elif  PORTCPin3_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,3);
				SET_BIT(PORTC_GPIOPDR,3);
				RESET_BIT(PORTC_GPIOODR,3);
			#elif  PORTCPin3_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,3);
				RESET_BIT(PORTC_GPIOPDR,3);
				SET_BIT(PORTC_GPIOODR,3);
			#endif
		#elif  PORTCPin0_Direction == Output
			SET_BIT(PORTC_GPIODIR,3);
			#if    PORTCPin3_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,3);
				RESET_BIT(PORTC_GPIODR4R,3);
				RESET_BIT(PORTC_GPIODR8R,3);
			#elif  PORTCPin3_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,3);
				SET_BIT(PORTC_GPIODR4R,3);
				RESET_BIT(PORTC_GPIODR8R,3);
			#elif  PORTCPin3_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,3);
				RESET_BIT(PORTC_GPIODR4R,3);
				SET_BIT(PORTC_GPIODR8R,3);
			#endif
		#endif
	#elif  PORTCPin3_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,3);
	#endif
	#if    PORTCPin4_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,4);
		#if    PORTCPin4_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,4);
		#elif  PORTCPin4_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,4);
		#endif
		#if    PORTCPin0_Direction == Input
			RESET_BIT(PORTC_GPIODIR,4);
			#if    PORTCPin4_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,4);
				RESET_BIT(PORTC_GPIOPDR,4);
				RESET_BIT(PORTC_GPIOODR,4);
			#elif  PORTCPin4_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,4);
				RESET_BIT(PORTC_GPIOPDR,4);
				RESET_BIT(PORTC_GPIOODR,4);
			#elif  PORTCPin4_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,4);
				SET_BIT(PORTC_GPIOPDR,4);
				RESET_BIT(PORTC_GPIOODR,4);
			#elif  PORTCPin4_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,4);
				RESET_BIT(PORTC_GPIOPDR,4);
				SET_BIT(PORTC_GPIOODR,4);
			#endif
		#elif  PORTCPin0_Direction == Output
			SET_BIT(PORTC_GPIODIR,4);
			#if    PORTCPin4_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,4);
				RESET_BIT(PORTC_GPIODR4R,4);
				RESET_BIT(PORTC_GPIODR8R,4);
			#elif  PORTCPin4_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,4);
				SET_BIT(PORTC_GPIODR4R,4);
				RESET_BIT(PORTC_GPIODR8R,4);
			#elif  PORTCPin4_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,4);
				RESET_BIT(PORTC_GPIODR4R,4);
				SET_BIT(PORTC_GPIODR8R,4);
			#endif
		#endif
	#elif  PORTCPin4_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,4);
	#endif
	#if    PORTCPin5_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,5);
		#if    PORTCPin5_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,5);
		#elif  PORTCPin5_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,5);
		#endif
		#if    PORTCPin5_Direction == Input
			RESET_BIT(PORTC_GPIODIR,5);
			#if    PORTCPin5_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,5);
				RESET_BIT(PORTC_GPIOPDR,5);
				RESET_BIT(PORTC_GPIOODR,5);
			#elif  PORTCPin5_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,5);
				RESET_BIT(PORTC_GPIOPDR,5);
				RESET_BIT(PORTC_GPIOODR,5);
			#elif  PORTCPin5_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,5);
				SET_BIT(PORTC_GPIOPDR,5);
				RESET_BIT(PORTC_GPIOODR,5);
			#elif  PORTCPin5_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,5);
				RESET_BIT(PORTC_GPIOPDR,5);
				SET_BIT(PORTC_GPIOODR,5);
			#endif
		#elif  PORTCPin5_Direction == Output
			SET_BIT(PORTC_GPIODIR,5);
			#if    PORTCPin5_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,5);
				RESET_BIT(PORTC_GPIODR4R,5);
				RESET_BIT(PORTC_GPIODR8R,5);
			#elif  PORTCPin5_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,5);
				SET_BIT(PORTC_GPIODR4R,5);
				RESET_BIT(PORTC_GPIODR8R,5);
			#elif  PORTCPin5_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,5);
				RESET_BIT(PORTC_GPIODR4R,5);
				SET_BIT(PORTC_GPIODR8R,5);
			#endif
		#endif
	#elif  PORTCPin5_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,5);
	#endif
	#if    PORTCPin6_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,6);
		#if    PORTCPin6_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,6);
		#elif  PORTCPin6_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,6);
		#endif
		#if    PORTCPin6_Direction == Input
			RESET_BIT(PORTC_GPIODIR,6);
			#if    PORTCPin6_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,6);
				RESET_BIT(PORTC_GPIOPDR,6);
				RESET_BIT(PORTC_GPIOODR,6);
			#elif  PORTCPin6_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,6);
				RESET_BIT(PORTC_GPIOPDR,6);
				RESET_BIT(PORTC_GPIOODR,6);
			#elif  PORTCPin6_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,6);
				SET_BIT(PORTC_GPIOPDR,6);
				RESET_BIT(PORTC_GPIOODR,6);
			#elif  PORTCPin6_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,6);
				RESET_BIT(PORTC_GPIOPDR,6);
				SET_BIT(PORTC_GPIOODR,6);
			#endif
		#elif  PORTCPin6_Direction == Output
			SET_BIT(PORTC_GPIODIR,6);
			#if    PORTCPin6_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,6);
				RESET_BIT(PORTC_GPIODR4R,6);
				RESET_BIT(PORTC_GPIODR8R,6);
			#elif  PORTCPin6_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,6);
				SET_BIT(PORTC_GPIODR4R,6);
				RESET_BIT(PORTC_GPIODR8R,6);
			#elif  PORTCPin6_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,6);
				RESET_BIT(PORTC_GPIODR4R,6);
				SET_BIT(PORTC_GPIODR8R,6);
			#endif
		#endif
	#elif  PORTCPin6_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,6);
	#endif
	#if    PORTCPin7_DigitalInputOutput == Enable
		SET_BIT(PORTC_GPIODEN,7);
		#if    PORTCPin7_Function == DIO
			RESET_BIT(PORTC_GPIOAFSEL,7);
		#elif  PORTCPin7_Function == AlternateFunction
			SET_BIT(PORTC_GPIOAFSEL,7);
		#endif
		#if    PORTCPin7_Direction == Input
			RESET_BIT(PORTC_GPIODIR,7);
			#if    PORTCPin7_InternalConnection == Off 
				RESET_BIT(PORTC_GPIOPUR,7);
				RESET_BIT(PORTC_GPIOPDR,7);
				RESET_BIT(PORTC_GPIOODR,7);
			#elif  PORTCPin7_InternalConnection == PullUp 
				SET_BIT(PORTC_GPIOPUR,7);
				RESET_BIT(PORTC_GPIOPDR,7);
				RESET_BIT(PORTC_GPIOODR,7);
			#elif  PORTCPin7_InternalConnection == PullDown
				RESET_BIT(PORTC_GPIOPUR,7);
				SET_BIT(PORTC_GPIOPDR,7);
				RESET_BIT(PORTC_GPIOODR,7);
			#elif  PORTCPin7_InternalConnection == OpenDrain
				RESET_BIT(PORTC_GPIOPUR,7);
				RESET_BIT(PORTC_GPIOPDR,7);
				SET_BIT(PORTC_GPIOODR,7);
			#endif
		#elif  PORTCPin7_Direction == Output
			SET_BIT(PORTC_GPIODIR,7);
			#if    PORTCPin7_DriveStrength == DS_2ma 
				SET_BIT(PORTC_GPIODR2R,7);
				RESET_BIT(PORTC_GPIODR4R,7);
				RESET_BIT(PORTC_GPIODR8R,7);
			#elif  PORTCPin7_DriveStrength == DS_4ma
				RESET_BIT(PORTC_GPIODR2R,7);
				SET_BIT(PORTC_GPIODR4R,7);
				RESET_BIT(PORTC_GPIODR8R,7);
			#elif  PORTCPin7_DriveStrength == DS_8ma
				RESET_BIT(PORTC_GPIODR2R,7);
				RESET_BIT(PORTC_GPIODR4R,7);
				SET_BIT(PORTC_GPIODR8R,7);
			#endif
		#endif
	#elif  PORTCPin7_DigitalInputOutput == Disable
		RESET_BIT(PORTC_GPIODEN,7);
	#endif
	/**************************************************/
	#if    PORTDPin0_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,0);
		#if    PORTDPin0_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,0);
		#elif  PORTDPin0_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,0);
		#endif
		#if    PORTDPin0_Direction == Input
			RESET_BIT(PORTD_GPIODIR,0);
			#if    PORTDPin0_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,0);
				RESET_BIT(PORTD_GPIOPDR,0);
				RESET_BIT(PORTD_GPIOODR,0);
			#elif  PORTDPin0_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,0);
				RESET_BIT(PORTD_GPIOPDR,0);
				RESET_BIT(PORTD_GPIOODR,0);
			#elif  PORTDPin0_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,0);
				SET_BIT(PORTD_GPIOPDR,0);
				RESET_BIT(PORTD_GPIOODR,0);
			#elif  PORTDPin0_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,0);
				RESET_BIT(PORTD_GPIOPDR,0);
				SET_BIT(PORTD_GPIOODR,0);
			#endif
		#elif  PORTDPin0_Direction == Output
			SET_BIT(PORTD_GPIODIR,0);
			#if    PORTDPin0_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,0);
				RESET_BIT(PORTD_GPIODR4R,0);
				RESET_BIT(PORTD_GPIODR8R,0);
			#elif  PORTDPin0_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,0);
				SET_BIT(PORTD_GPIODR4R,0);
				RESET_BIT(PORTD_GPIODR8R,0);
			#elif  PORTDPin0_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,0);
				RESET_BIT(PORTD_GPIODR4R,0);
				SET_BIT(PORTD_GPIODR8R,0);
			#endif
		#endif
	#elif  PORTDPin0_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,1);
	#endif
	#if    PORTDPin1_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,1);
		#if    PORTDPin1_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,1);
		#elif  PORTDPin1_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,1);
		#endif
		#if    PORTDPin1_Direction == Input
			RESET_BIT(PORTD_GPIODIR,1);
			#if    PORTDPin1_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,1);
				RESET_BIT(PORTD_GPIOPDR,1);
				RESET_BIT(PORTD_GPIOODR,1);
			#elif  PORTDPin1_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,1);
				RESET_BIT(PORTD_GPIOPDR,1);
				RESET_BIT(PORTD_GPIOODR,1);
			#elif  PORTDPin1_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,1);
				SET_BIT(PORTD_GPIOPDR,1);
				RESET_BIT(PORTD_GPIOODR,1);
			#elif  PORTDPin1_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,1);
				RESET_BIT(PORTD_GPIOPDR,1);
				SET_BIT(PORTD_GPIOODR,1);
			#endif
		#elif  PORTDPin1_Direction == Output
			SET_BIT(PORTD_GPIODIR,1);
			#if    PORTDPin1_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,1);
				RESET_BIT(PORTD_GPIODR4R,1);
				RESET_BIT(PORTD_GPIODR8R,1);
			#elif  PORTDPin1_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,1);
				SET_BIT(PORTD_GPIODR4R,1);
				RESET_BIT(PORTD_GPIODR8R,1);
			#elif  PORTDPin1_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,1);
				RESET_BIT(PORTD_GPIODR4R,1);
				SET_BIT(PORTD_GPIODR8R,1);
			#endif
		#endif
	#elif  PORTDPin1_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,1);
	#endif
	#if    PORTDPin2_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,2);
		#if    PORTDPin2_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,2);
		#elif  PORTDPin2_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,2);
		#endif
		#if    PORTDPin2_Direction == Input
			RESET_BIT(PORTD_GPIODIR,2);
			#if    PORTDPin2_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,2);
				RESET_BIT(PORTD_GPIOPDR,2);
				RESET_BIT(PORTD_GPIOODR,2);
			#elif  PORTDPin2_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,2);
				RESET_BIT(PORTD_GPIOPDR,2);
				RESET_BIT(PORTD_GPIOODR,2);
			#elif  PORTDPin2_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,2);
				SET_BIT(PORTD_GPIOPDR,2);
				RESET_BIT(PORTD_GPIOODR,2);
			#elif  PORTDPin2_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,2);
				RESET_BIT(PORTD_GPIOPDR,2);
				SET_BIT(PORTD_GPIOODR,2);
			#endif
		#elif  PORTDPin2_Direction == Output
			SET_BIT(PORTD_GPIODIR,2);
			#if    PORTDPin2_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,2);
				RESET_BIT(PORTD_GPIODR4R,2);
				RESET_BIT(PORTD_GPIODR8R,2);
			#elif  PORTDPin2_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,2);
				SET_BIT(PORTD_GPIODR4R,2);
				RESET_BIT(PORTD_GPIODR8R,2);
			#elif  PORTDPin2_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,2);
				RESET_BIT(PORTD_GPIODR4R,2);
				SET_BIT(PORTD_GPIODR8R,2);
			#endif
		#endif
	#elif  PORTDPin2_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,2);
	#endif
	#if    PORTDPin3_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,3);
		#if    PORTDPin3_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,3);
		#elif  PORTDPin3_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,3);
		#endif
		#if    PORTDPin0_Direction == Input
			RESET_BIT(PORTD_GPIODIR,3);
			#if    PORTDPin3_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,3);
				RESET_BIT(PORTD_GPIOPDR,3);
				RESET_BIT(PORTD_GPIOODR,3);
			#elif  PORTDPin3_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,3);
				RESET_BIT(PORTD_GPIOPDR,3);
				RESET_BIT(PORTD_GPIOODR,3);
			#elif  PORTDPin3_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,3);
				SET_BIT(PORTD_GPIOPDR,3);
				RESET_BIT(PORTD_GPIOODR,3);
			#elif  PORTDPin3_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,3);
				RESET_BIT(PORTD_GPIOPDR,3);
				SET_BIT(PORTD_GPIOODR,3);
			#endif
		#elif  PORTDPin0_Direction == Output
			SET_BIT(PORTD_GPIODIR,3);
			#if    PORTDPin3_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,3);
				RESET_BIT(PORTD_GPIODR4R,3);
				RESET_BIT(PORTD_GPIODR8R,3);
			#elif  PORTDPin3_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,3);
				SET_BIT(PORTD_GPIODR4R,3);
				RESET_BIT(PORTD_GPIODR8R,3);
			#elif  PORTDPin3_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,3);
				RESET_BIT(PORTD_GPIODR4R,3);
				SET_BIT(PORTD_GPIODR8R,3);
			#endif
		#endif
	#elif  PORTDPin3_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,3);
	#endif
	#if    PORTDPin4_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,4);
		#if    PORTDPin4_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,4);
		#elif  PORTDPin4_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,4);
		#endif
		#if    PORTDPin0_Direction == Input
			RESET_BIT(PORTD_GPIODIR,4);
			#if    PORTDPin4_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,4);
				RESET_BIT(PORTD_GPIOPDR,4);
				RESET_BIT(PORTD_GPIOODR,4);
			#elif  PORTDPin4_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,4);
				RESET_BIT(PORTD_GPIOPDR,4);
				RESET_BIT(PORTD_GPIOODR,4);
			#elif  PORTDPin4_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,4);
				SET_BIT(PORTD_GPIOPDR,4);
				RESET_BIT(PORTD_GPIOODR,4);
			#elif  PORTDPin4_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,4);
				RESET_BIT(PORTD_GPIOPDR,4);
				SET_BIT(PORTD_GPIOODR,4);
			#endif
		#elif  PORTDPin0_Direction == Output
			SET_BIT(PORTD_GPIODIR,4);
			#if    PORTDPin4_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,4);
				RESET_BIT(PORTD_GPIODR4R,4);
				RESET_BIT(PORTD_GPIODR8R,4);
			#elif  PORTDPin4_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,4);
				SET_BIT(PORTD_GPIODR4R,4);
				RESET_BIT(PORTD_GPIODR8R,4);
			#elif  PORTDPin4_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,4);
				RESET_BIT(PORTD_GPIODR4R,4);
				SET_BIT(PORTD_GPIODR8R,4);
			#endif
		#endif
	#elif  PORTDPin4_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,4);
	#endif
	#if    PORTDPin5_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,5);
		#if    PORTDPin5_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,5);
		#elif  PORTDPin5_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,5);
		#endif
		#if    PORTDPin5_Direction == Input
			RESET_BIT(PORTD_GPIODIR,5);
			#if    PORTDPin5_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,5);
				RESET_BIT(PORTD_GPIOPDR,5);
				RESET_BIT(PORTD_GPIOODR,5);
			#elif  PORTDPin5_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,5);
				RESET_BIT(PORTD_GPIOPDR,5);
				RESET_BIT(PORTD_GPIOODR,5);
			#elif  PORTDPin5_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,5);
				SET_BIT(PORTD_GPIOPDR,5);
				RESET_BIT(PORTD_GPIOODR,5);
			#elif  PORTDPin5_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,5);
				RESET_BIT(PORTD_GPIOPDR,5);
				SET_BIT(PORTD_GPIOODR,5);
			#endif
		#elif  PORTDPin5_Direction == Output
			SET_BIT(PORTD_GPIODIR,5);
			#if    PORTDPin5_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,5);
				RESET_BIT(PORTD_GPIODR4R,5);
				RESET_BIT(PORTD_GPIODR8R,5);
			#elif  PORTDPin5_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,5);
				SET_BIT(PORTD_GPIODR4R,5);
				RESET_BIT(PORTD_GPIODR8R,5);
			#elif  PORTDPin5_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,5);
				RESET_BIT(PORTD_GPIODR4R,5);
				SET_BIT(PORTD_GPIODR8R,5);
			#endif
		#endif
	#elif  PORTDPin5_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,5);
	#endif
	#if    PORTDPin6_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,6);
		#if    PORTDPin6_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,6);
		#elif  PORTDPin6_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,6);
		#endif
		#if    PORTDPin6_Direction == Input
			RESET_BIT(PORTD_GPIODIR,6);
			#if    PORTDPin6_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,6);
				RESET_BIT(PORTD_GPIOPDR,6);
				RESET_BIT(PORTD_GPIOODR,6);
			#elif  PORTDPin6_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,6);
				RESET_BIT(PORTD_GPIOPDR,6);
				RESET_BIT(PORTD_GPIOODR,6);
			#elif  PORTDPin6_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,6);
				SET_BIT(PORTD_GPIOPDR,6);
				RESET_BIT(PORTD_GPIOODR,6);
			#elif  PORTDPin6_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,6);
				RESET_BIT(PORTD_GPIOPDR,6);
				SET_BIT(PORTD_GPIOODR,6);
			#endif
		#elif  PORTDPin6_Direction == Output
			SET_BIT(PORTD_GPIODIR,6);
			#if    PORTDPin6_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,6);
				RESET_BIT(PORTD_GPIODR4R,6);
				RESET_BIT(PORTD_GPIODR8R,6);
			#elif  PORTDPin6_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,6);
				SET_BIT(PORTD_GPIODR4R,6);
				RESET_BIT(PORTD_GPIODR8R,6);
			#elif  PORTDPin6_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,6);
				RESET_BIT(PORTD_GPIODR4R,6);
				SET_BIT(PORTD_GPIODR8R,6);
			#endif
		#endif
	#elif  PORTDPin6_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,6);
	#endif
	#if    PORTDPin7_DigitalInputOutput == Enable
		SET_BIT(PORTD_GPIODEN,7);
		#if    PORTDPin7_Function == DIO
			RESET_BIT(PORTD_GPIOAFSEL,7);
		#elif  PORTDPin7_Function == AlternateFunction
			SET_BIT(PORTD_GPIOAFSEL,7);
		#endif
		#if    PORTDPin7_Direction == Input
			RESET_BIT(PORTD_GPIODIR,7);
			#if    PORTDPin7_InternalConnection == Off 
				RESET_BIT(PORTD_GPIOPUR,7);
				RESET_BIT(PORTD_GPIOPDR,7);
				RESET_BIT(PORTD_GPIOODR,7);
			#elif  PORTDPin7_InternalConnection == PullUp 
				SET_BIT(PORTD_GPIOPUR,7);
				RESET_BIT(PORTD_GPIOPDR,7);
				RESET_BIT(PORTD_GPIOODR,7);
			#elif  PORTDPin7_InternalConnection == PullDown
				RESET_BIT(PORTD_GPIOPUR,7);
				SET_BIT(PORTD_GPIOPDR,7);
				RESET_BIT(PORTD_GPIOODR,7);
			#elif  PORTDPin7_InternalConnection == OpenDrain
				RESET_BIT(PORTD_GPIOPUR,7);
				RESET_BIT(PORTD_GPIOPDR,7);
				SET_BIT(PORTD_GPIOODR,7);
			#endif
		#elif  PORTDPin7_Direction == Output
			SET_BIT(PORTD_GPIODIR,7);
			#if    PORTDPin7_DriveStrength == DS_2ma 
				SET_BIT(PORTD_GPIODR2R,7);
				RESET_BIT(PORTD_GPIODR4R,7);
				RESET_BIT(PORTD_GPIODR8R,7);
			#elif  PORTDPin7_DriveStrength == DS_4ma
				RESET_BIT(PORTD_GPIODR2R,7);
				SET_BIT(PORTD_GPIODR4R,7);
				RESET_BIT(PORTD_GPIODR8R,7);
			#elif  PORTDPin7_DriveStrength == DS_8ma
				RESET_BIT(PORTD_GPIODR2R,7);
				RESET_BIT(PORTD_GPIODR4R,7);
				SET_BIT(PORTD_GPIODR8R,7);
			#endif
		#endif
	#elif  PORTDPin7_DigitalInputOutput == Disable
		RESET_BIT(PORTD_GPIODEN,7);
	#endif
	/**************************************************/
	#if    PORTEPin0_DigitalInputOutput == Enable
		SET_BIT(PORTE_GPIODEN,0);
		#if    PORTEPin0_Function == DIO
			RESET_BIT(PORTE_GPIOAFSEL,0);
		#elif  PORTEPin0_Function == AlternateFunction
			SET_BIT(PORTE_GPIOAFSEL,0);
		#endif
		#if    PORTEPin0_Direction == Input
			RESET_BIT(PORTE_GPIODIR,0);
			#if    PORTEPin0_InternalConnection == Off 
				RESET_BIT(PORTE_GPIOPUR,0);
				RESET_BIT(PORTE_GPIOPDR,0);
				RESET_BIT(PORTE_GPIOODR,0);
			#elif  PORTEPin0_InternalConnection == PullUp 
				SET_BIT(PORTE_GPIOPUR,0);
				RESET_BIT(PORTE_GPIOPDR,0);
				RESET_BIT(PORTE_GPIOODR,0);
			#elif  PORTEPin0_InternalConnection == PullDown
				RESET_BIT(PORTE_GPIOPUR,0);
				SET_BIT(PORTE_GPIOPDR,0);
				RESET_BIT(PORTE_GPIOODR,0);
			#elif  PORTEPin0_InternalConnection == OpenDrain
				RESET_BIT(PORTE_GPIOPUR,0);
				RESET_BIT(PORTE_GPIOPDR,0);
				SET_BIT(PORTE_GPIOODR,0);
			#endif
		#elif  PORTEPin0_Direction == Output
			SET_BIT(PORTE_GPIODIR,0);
			#if    PORTEPin0_DriveStrength == DS_2ma 
				SET_BIT(PORTE_GPIODR2R,0);
				RESET_BIT(PORTE_GPIODR4R,0);
				RESET_BIT(PORTE_GPIODR8R,0);
			#elif  PORTEPin0_DriveStrength == DS_4ma
				RESET_BIT(PORTE_GPIODR2R,0);
				SET_BIT(PORTE_GPIODR4R,0);
				RESET_BIT(PORTE_GPIODR8R,0);
			#elif  PORTEPin0_DriveStrength == DS_8ma
				RESET_BIT(PORTE_GPIODR2R,0);
				RESET_BIT(PORTE_GPIODR4R,0);
				SET_BIT(PORTE_GPIODR8R,0);
			#endif
		#endif
	#elif  PORTEPin0_DigitalInputOutput == Disable
		RESET_BIT(PORTE_GPIODEN,1);
	#endif
	#if    PORTEPin1_DigitalInputOutput == Enable
		SET_BIT(PORTE_GPIODEN,1);
		#if    PORTEPin1_Function == DIO
			RESET_BIT(PORTE_GPIOAFSEL,1);
		#elif  PORTEPin1_Function == AlternateFunction
			SET_BIT(PORTE_GPIOAFSEL,1);
		#endif
		#if    PORTEPin1_Direction == Input
			RESET_BIT(PORTE_GPIODIR,1);
			#if    PORTEPin1_InternalConnection == Off 
				RESET_BIT(PORTE_GPIOPUR,1);
				RESET_BIT(PORTE_GPIOPDR,1);
				RESET_BIT(PORTE_GPIOODR,1);
			#elif  PORTEPin1_InternalConnection == PullUp 
				SET_BIT(PORTE_GPIOPUR,1);
				RESET_BIT(PORTE_GPIOPDR,1);
				RESET_BIT(PORTE_GPIOODR,1);
			#elif  PORTEPin1_InternalConnection == PullDown
				RESET_BIT(PORTE_GPIOPUR,1);
				SET_BIT(PORTE_GPIOPDR,1);
				RESET_BIT(PORTE_GPIOODR,1);
			#elif  PORTEPin1_InternalConnection == OpenDrain
				RESET_BIT(PORTE_GPIOPUR,1);
				RESET_BIT(PORTE_GPIOPDR,1);
				SET_BIT(PORTE_GPIOODR,1);
			#endif
		#elif  PORTEPin1_Direction == Output
			SET_BIT(PORTE_GPIODIR,1);
			#if    PORTEPin1_DriveStrength == DS_2ma 
				SET_BIT(PORTE_GPIODR2R,1);
				RESET_BIT(PORTE_GPIODR4R,1);
				RESET_BIT(PORTE_GPIODR8R,1);
			#elif  PORTEPin1_DriveStrength == DS_4ma
				RESET_BIT(PORTE_GPIODR2R,1);
				SET_BIT(PORTE_GPIODR4R,1);
				RESET_BIT(PORTE_GPIODR8R,1);
			#elif  PORTEPin1_DriveStrength == DS_8ma
				RESET_BIT(PORTE_GPIODR2R,1);
				RESET_BIT(PORTE_GPIODR4R,1);
				SET_BIT(PORTE_GPIODR8R,1);
			#endif
		#endif
	#elif  PORTEPin1_DigitalInputOutput == Disable
		RESET_BIT(PORTE_GPIODEN,1);
	#endif
	#if    PORTEPin2_DigitalInputOutput == Enable
		SET_BIT(PORTE_GPIODEN,2);
		#if    PORTEPin2_Function == DIO
			RESET_BIT(PORTE_GPIOAFSEL,2);
		#elif  PORTEPin2_Function == AlternateFunction
			SET_BIT(PORTE_GPIOAFSEL,2);
		#endif
		#if    PORTEPin2_Direction == Input
			RESET_BIT(PORTE_GPIODIR,2);
			#if    PORTEPin2_InternalConnection == Off 
				RESET_BIT(PORTE_GPIOPUR,2);
				RESET_BIT(PORTE_GPIOPDR,2);
				RESET_BIT(PORTE_GPIOODR,2);
			#elif  PORTEPin2_InternalConnection == PullUp 
				SET_BIT(PORTE_GPIOPUR,2);
				RESET_BIT(PORTE_GPIOPDR,2);
				RESET_BIT(PORTE_GPIOODR,2);
			#elif  PORTEPin2_InternalConnection == PullDown
				RESET_BIT(PORTE_GPIOPUR,2);
				SET_BIT(PORTE_GPIOPDR,2);
				RESET_BIT(PORTE_GPIOODR,2);
			#elif  PORTEPin2_InternalConnection == OpenDrain
				RESET_BIT(PORTE_GPIOPUR,2);
				RESET_BIT(PORTE_GPIOPDR,2);
				SET_BIT(PORTE_GPIOODR,2);
			#endif
		#elif  PORTEPin2_Direction == Output
			SET_BIT(PORTE_GPIODIR,2);
			#if    PORTEPin2_DriveStrength == DS_2ma 
				SET_BIT(PORTE_GPIODR2R,2);
				RESET_BIT(PORTE_GPIODR4R,2);
				RESET_BIT(PORTE_GPIODR8R,2);
			#elif  PORTEPin2_DriveStrength == DS_4ma
				RESET_BIT(PORTE_GPIODR2R,2);
				SET_BIT(PORTE_GPIODR4R,2);
				RESET_BIT(PORTE_GPIODR8R,2);
			#elif  PORTEPin2_DriveStrength == DS_8ma
				RESET_BIT(PORTE_GPIODR2R,2);
				RESET_BIT(PORTE_GPIODR4R,2);
				SET_BIT(PORTE_GPIODR8R,2);
			#endif
		#endif
	#elif  PORTEPin2_DigitalInputOutput == Disable
		RESET_BIT(PORTE_GPIODEN,2);
	#endif
	#if    PORTEPin3_DigitalInputOutput == Enable
		SET_BIT(PORTE_GPIODEN,3);
		#if    PORTEPin3_Function == DIO
			RESET_BIT(PORTE_GPIOAFSEL,3);
		#elif  PORTEPin3_Function == AlternateFunction
			SET_BIT(PORTE_GPIOAFSEL,3);
		#endif
		#if    PORTEPin0_Direction == Input
			RESET_BIT(PORTE_GPIODIR,3);
			#if    PORTEPin3_InternalConnection == Off 
				RESET_BIT(PORTE_GPIOPUR,3);
				RESET_BIT(PORTE_GPIOPDR,3);
				RESET_BIT(PORTE_GPIOODR,3);
			#elif  PORTEPin3_InternalConnection == PullUp 
				SET_BIT(PORTE_GPIOPUR,3);
				RESET_BIT(PORTE_GPIOPDR,3);
				RESET_BIT(PORTE_GPIOODR,3);
			#elif  PORTEPin3_InternalConnection == PullDown
				RESET_BIT(PORTE_GPIOPUR,3);
				SET_BIT(PORTE_GPIOPDR,3);
				RESET_BIT(PORTE_GPIOODR,3);
			#elif  PORTEPin3_InternalConnection == OpenDrain
				RESET_BIT(PORTE_GPIOPUR,3);
				RESET_BIT(PORTE_GPIOPDR,3);
				SET_BIT(PORTE_GPIOODR,3);
			#endif
		#elif  PORTEPin0_Direction == Output
			SET_BIT(PORTE_GPIODIR,3);
			#if    PORTEPin3_DriveStrength == DS_2ma 
				SET_BIT(PORTE_GPIODR2R,3);
				RESET_BIT(PORTE_GPIODR4R,3);
				RESET_BIT(PORTE_GPIODR8R,3);
			#elif  PORTEPin3_DriveStrength == DS_4ma
				RESET_BIT(PORTE_GPIODR2R,3);
				SET_BIT(PORTE_GPIODR4R,3);
				RESET_BIT(PORTE_GPIODR8R,3);
			#elif  PORTEPin3_DriveStrength == DS_8ma
				RESET_BIT(PORTE_GPIODR2R,3);
				RESET_BIT(PORTE_GPIODR4R,3);
				SET_BIT(PORTE_GPIODR8R,3);
			#endif
		#endif
	#elif  PORTEPin3_DigitalInputOutput == Disable
		RESET_BIT(PORTE_GPIODEN,3);
	#endif
	#if    PORTEPin4_DigitalInputOutput == Enable
		SET_BIT(PORTE_GPIODEN,4);
		#if    PORTEPin4_Function == DIO
			RESET_BIT(PORTE_GPIOAFSEL,4);
		#elif  PORTEPin4_Function == AlternateFunction
			SET_BIT(PORTE_GPIOAFSEL,4);
		#endif
		#if    PORTEPin0_Direction == Input
			RESET_BIT(PORTE_GPIODIR,4);
			#if    PORTEPin4_InternalConnection == Off 
				RESET_BIT(PORTE_GPIOPUR,4);
				RESET_BIT(PORTE_GPIOPDR,4);
				RESET_BIT(PORTE_GPIOODR,4);
			#elif  PORTEPin4_InternalConnection == PullUp 
				SET_BIT(PORTE_GPIOPUR,4);
				RESET_BIT(PORTE_GPIOPDR,4);
				RESET_BIT(PORTE_GPIOODR,4);
			#elif  PORTEPin4_InternalConnection == PullDown
				RESET_BIT(PORTE_GPIOPUR,4);
				SET_BIT(PORTE_GPIOPDR,4);
				RESET_BIT(PORTE_GPIOODR,4);
			#elif  PORTEPin4_InternalConnection == OpenDrain
				RESET_BIT(PORTE_GPIOPUR,4);
				RESET_BIT(PORTE_GPIOPDR,4);
				SET_BIT(PORTE_GPIOODR,4);
			#endif
		#elif  PORTEPin0_Direction == Output
			SET_BIT(PORTE_GPIODIR,4);
			#if    PORTEPin4_DriveStrength == DS_2ma 
				SET_BIT(PORTE_GPIODR2R,4);
				RESET_BIT(PORTE_GPIODR4R,4);
				RESET_BIT(PORTE_GPIODR8R,4);
			#elif  PORTEPin4_DriveStrength == DS_4ma
				RESET_BIT(PORTE_GPIODR2R,4);
				SET_BIT(PORTE_GPIODR4R,4);
				RESET_BIT(PORTE_GPIODR8R,4);
			#elif  PORTEPin4_DriveStrength == DS_8ma
				RESET_BIT(PORTE_GPIODR2R,4);
				RESET_BIT(PORTE_GPIODR4R,4);
				SET_BIT(PORTE_GPIODR8R,4);
			#endif
		#endif
	#elif  PORTEPin4_DigitalInputOutput == Disable
		RESET_BIT(PORTE_GPIODEN,4);
	#endif
	#if    PORTEPin5_DigitalInputOutput == Enable
		SET_BIT(PORTE_GPIODEN,5);
		#if    PORTEPin5_Function == DIO
			RESET_BIT(PORTE_GPIOAFSEL,5);
		#elif  PORTEPin5_Function == AlternateFunction
			SET_BIT(PORTE_GPIOAFSEL,5);
		#endif
		#if    PORTEPin5_Direction == Input
			RESET_BIT(PORTE_GPIODIR,5);
			#if    PORTEPin5_InternalConnection == Off 
				RESET_BIT(PORTE_GPIOPUR,5);
				RESET_BIT(PORTE_GPIOPDR,5);
				RESET_BIT(PORTE_GPIOODR,5);
			#elif  PORTEPin5_InternalConnection == PullUp 
				SET_BIT(PORTE_GPIOPUR,5);
				RESET_BIT(PORTE_GPIOPDR,5);
				RESET_BIT(PORTE_GPIOODR,5);
			#elif  PORTEPin5_InternalConnection == PullDown
				RESET_BIT(PORTE_GPIOPUR,5);
				SET_BIT(PORTE_GPIOPDR,5);
				RESET_BIT(PORTE_GPIOODR,5);
			#elif  PORTEPin5_InternalConnection == OpenDrain
				RESET_BIT(PORTE_GPIOPUR,5);
				RESET_BIT(PORTE_GPIOPDR,5);
				SET_BIT(PORTE_GPIOODR,5);
			#endif
		#elif  PORTEPin5_Direction == Output
			SET_BIT(PORTE_GPIODIR,5);
			#if    PORTEPin5_DriveStrength == DS_2ma 
				SET_BIT(PORTE_GPIODR2R,5);
				RESET_BIT(PORTE_GPIODR4R,5);
				RESET_BIT(PORTE_GPIODR8R,5);
			#elif  PORTEPin5_DriveStrength == DS_4ma
				RESET_BIT(PORTE_GPIODR2R,5);
				SET_BIT(PORTE_GPIODR4R,5);
				RESET_BIT(PORTE_GPIODR8R,5);
			#elif  PORTEPin5_DriveStrength == DS_8ma
				RESET_BIT(PORTE_GPIODR2R,5);
				RESET_BIT(PORTE_GPIODR4R,5);
				SET_BIT(PORTE_GPIODR8R,5);
			#endif
		#endif
	#elif  PORTEPin5_DigitalInputOutput == Disable
		RESET_BIT(PORTE_GPIODEN,5);
	#endif
	/**************************************************/
	#if    PORTFPin0_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,0);
		#if    PORTFPin0_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,0);
		#elif  PORTFPin0_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,0);
		#endif
		#if    PORTFPin0_Direction == Input
			RESET_BIT(PORTF_GPIODIR,0);
			#if    PORTFPin0_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,0);
				RESET_BIT(PORTF_GPIOPDR,0);
				RESET_BIT(PORTF_GPIOODR,0);
			#elif  PORTFPin0_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,0);
				RESET_BIT(PORTF_GPIOPDR,0);
				RESET_BIT(PORTF_GPIOODR,0);
			#elif  PORTFPin0_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,0);
				SET_BIT(PORTF_GPIOPDR,0);
				RESET_BIT(PORTF_GPIOODR,0);
			#elif  PORTFPin0_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,0);
				RESET_BIT(PORTF_GPIOPDR,0);
				SET_BIT(PORTF_GPIOODR,0);
			#endif
		#elif  PORTFPin0_Direction == Output
			SET_BIT(PORTF_GPIODIR,0);
			#if    PORTFPin0_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,0);
				RESET_BIT(PORTF_GPIODR4R,0);
				RESET_BIT(PORTF_GPIODR8R,0);
			#elif  PORTFPin0_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,0);
				SET_BIT(PORTF_GPIODR4R,0);
				RESET_BIT(PORTF_GPIODR8R,0);
			#elif  PORTFPin0_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,0);
				RESET_BIT(PORTF_GPIODR4R,0);
				SET_BIT(PORTF_GPIODR8R,0);
			#endif
		#endif
	#elif  PORTFPin0_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,1);
	#endif
	#if    PORTFPin1_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,1);
		#if    PORTFPin1_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,1);
		#elif  PORTFPin1_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,1);
		#endif
		#if    PORTFPin1_Direction == Input
			RESET_BIT(PORTF_GPIODIR,1);
			#if    PORTFPin1_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,1);
				RESET_BIT(PORTF_GPIOPDR,1);
				RESET_BIT(PORTF_GPIOODR,1);
			#elif  PORTFPin1_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,1);
				RESET_BIT(PORTF_GPIOPDR,1);
				RESET_BIT(PORTF_GPIOODR,1);
			#elif  PORTFPin1_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,1);
				SET_BIT(PORTF_GPIOPDR,1);
				RESET_BIT(PORTF_GPIOODR,1);
			#elif  PORTFPin1_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,1);
				RESET_BIT(PORTF_GPIOPDR,1);
				SET_BIT(PORTF_GPIOODR,1);
			#endif
		#elif  PORTFPin1_Direction == Output
			SET_BIT(PORTF_GPIODIR,1);
			#if    PORTFPin1_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,1);
				RESET_BIT(PORTF_GPIODR4R,1);
				RESET_BIT(PORTF_GPIODR8R,1);
			#elif  PORTFPin1_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,1);
				SET_BIT(PORTF_GPIODR4R,1);
				RESET_BIT(PORTF_GPIODR8R,1);
			#elif  PORTFPin1_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,1);
				RESET_BIT(PORTF_GPIODR4R,1);
				SET_BIT(PORTF_GPIODR8R,1);
			#endif
		#endif
	#elif  PORTFPin1_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,1);
	#endif
	#if    PORTFPin2_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,2);
		#if    PORTFPin2_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,2);
		#elif  PORTFPin2_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,2);
		#endif
		#if    PORTFPin2_Direction == Input
			RESET_BIT(PORTF_GPIODIR,2);
			#if    PORTFPin2_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,2);
				RESET_BIT(PORTF_GPIOPDR,2);
				RESET_BIT(PORTF_GPIOODR,2);
			#elif  PORTFPin2_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,2);
				RESET_BIT(PORTF_GPIOPDR,2);
				RESET_BIT(PORTF_GPIOODR,2);
			#elif  PORTFPin2_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,2);
				SET_BIT(PORTF_GPIOPDR,2);
				RESET_BIT(PORTF_GPIOODR,2);
			#elif  PORTFPin2_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,2);
				RESET_BIT(PORTF_GPIOPDR,2);
				SET_BIT(PORTF_GPIOODR,2);
			#endif
		#elif  PORTFPin2_Direction == Output
			SET_BIT(PORTF_GPIODIR,2);
			#if    PORTFPin2_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,2);
				RESET_BIT(PORTF_GPIODR4R,2);
				RESET_BIT(PORTF_GPIODR8R,2);
			#elif  PORTFPin2_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,2);
				SET_BIT(PORTF_GPIODR4R,2);
				RESET_BIT(PORTF_GPIODR8R,2);
			#elif  PORTFPin2_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,2);
				RESET_BIT(PORTF_GPIODR4R,2);
				SET_BIT(PORTF_GPIODR8R,2);
			#endif
		#endif
	#elif  PORTFPin2_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,2);
	#endif
	#if    PORTFPin3_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,3);
		#if    PORTFPin3_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,3);
		#elif  PORTFPin3_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,3);
		#endif
		#if    PORTFPin0_Direction == Input
			RESET_BIT(PORTF_GPIODIR,3);
			#if    PORTFPin3_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,3);
				RESET_BIT(PORTF_GPIOPDR,3);
				RESET_BIT(PORTF_GPIOODR,3);
			#elif  PORTFPin3_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,3);
				RESET_BIT(PORTF_GPIOPDR,3);
				RESET_BIT(PORTF_GPIOODR,3);
			#elif  PORTFPin3_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,3);
				SET_BIT(PORTF_GPIOPDR,3);
				RESET_BIT(PORTF_GPIOODR,3);
			#elif  PORTFPin3_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,3);
				RESET_BIT(PORTF_GPIOPDR,3);
				SET_BIT(PORTF_GPIOODR,3);
			#endif
		#elif  PORTFPin0_Direction == Output
			SET_BIT(PORTF_GPIODIR,3);
			#if    PORTFPin3_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,3);
				RESET_BIT(PORTF_GPIODR4R,3);
				RESET_BIT(PORTF_GPIODR8R,3);
			#elif  PORTFPin3_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,3);
				SET_BIT(PORTF_GPIODR4R,3);
				RESET_BIT(PORTF_GPIODR8R,3);
			#elif  PORTFPin3_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,3);
				RESET_BIT(PORTF_GPIODR4R,3);
				SET_BIT(PORTF_GPIODR8R,3);
			#endif
		#endif
	#elif  PORTFPin3_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,3);
	#endif
	#if    PORTFPin4_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,4);
		#if    PORTFPin4_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,4);
		#elif  PORTFPin4_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,4);
		#endif
		#if    PORTFPin0_Direction == Input
			RESET_BIT(PORTF_GPIODIR,4);
			#if    PORTFPin4_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,4);
				RESET_BIT(PORTF_GPIOPDR,4);
				RESET_BIT(PORTF_GPIOODR,4);
			#elif  PORTFPin4_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,4);
				RESET_BIT(PORTF_GPIOPDR,4);
				RESET_BIT(PORTF_GPIOODR,4);
			#elif  PORTFPin4_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,4);
				SET_BIT(PORTF_GPIOPDR,4);
				RESET_BIT(PORTF_GPIOODR,4);
			#elif  PORTFPin4_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,4);
				RESET_BIT(PORTF_GPIOPDR,4);
				SET_BIT(PORTF_GPIOODR,4);
			#endif
		#elif  PORTFPin0_Direction == Output
			SET_BIT(PORTF_GPIODIR,4);
			#if    PORTFPin4_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,4);
				RESET_BIT(PORTF_GPIODR4R,4);
				RESET_BIT(PORTF_GPIODR8R,4);
			#elif  PORTFPin4_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,4);
				SET_BIT(PORTF_GPIODR4R,4);
				RESET_BIT(PORTF_GPIODR8R,4);
			#elif  PORTFPin4_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,4);
				RESET_BIT(PORTF_GPIODR4R,4);
				SET_BIT(PORTF_GPIODR8R,4);
			#endif
		#endif
	#elif  PORTFPin4_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,4);
	#endif
	#if    PORTFPin5_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,5);
		#if    PORTFPin5_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,5);
		#elif  PORTFPin5_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,5);
		#endif
		#if    PORTFPin5_Direction == Input
			RESET_BIT(PORTF_GPIODIR,5);
			#if    PORTFPin5_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,5);
				RESET_BIT(PORTF_GPIOPDR,5);
				RESET_BIT(PORTF_GPIOODR,5);
			#elif  PORTFPin5_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,5);
				RESET_BIT(PORTF_GPIOPDR,5);
				RESET_BIT(PORTF_GPIOODR,5);
			#elif  PORTFPin5_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,5);
				SET_BIT(PORTF_GPIOPDR,5);
				RESET_BIT(PORTF_GPIOODR,5);
			#elif  PORTFPin5_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,5);
				RESET_BIT(PORTF_GPIOPDR,5);
				SET_BIT(PORTF_GPIOODR,5);
			#endif
		#elif  PORTFPin5_Direction == Output
			SET_BIT(PORTF_GPIODIR,5);
			#if    PORTFPin5_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,5);
				RESET_BIT(PORTF_GPIODR4R,5);
				RESET_BIT(PORTF_GPIODR8R,5);
			#elif  PORTFPin5_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,5);
				SET_BIT(PORTF_GPIODR4R,5);
				RESET_BIT(PORTF_GPIODR8R,5);
			#elif  PORTFPin5_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,5);
				RESET_BIT(PORTF_GPIODR4R,5);
				SET_BIT(PORTF_GPIODR8R,5);
			#endif
		#endif
	#elif  PORTFPin5_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,5);
	#endif
	#if    PORTFPin6_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,6);
		#if    PORTFPin6_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,6);
		#elif  PORTFPin6_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,6);
		#endif
		#if    PORTFPin6_Direction == Input
			RESET_BIT(PORTF_GPIODIR,6);
			#if    PORTFPin6_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,6);
				RESET_BIT(PORTF_GPIOPDR,6);
				RESET_BIT(PORTF_GPIOODR,6);
			#elif  PORTFPin6_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,6);
				RESET_BIT(PORTF_GPIOPDR,6);
				RESET_BIT(PORTF_GPIOODR,6);
			#elif  PORTFPin6_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,6);
				SET_BIT(PORTF_GPIOPDR,6);
				RESET_BIT(PORTF_GPIOODR,6);
			#elif  PORTFPin6_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,6);
				RESET_BIT(PORTF_GPIOPDR,6);
				SET_BIT(PORTF_GPIOODR,6);
			#endif
		#elif  PORTFPin6_Direction == Output
			SET_BIT(PORTF_GPIODIR,6);
			#if    PORTFPin6_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,6);
				RESET_BIT(PORTF_GPIODR4R,6);
				RESET_BIT(PORTF_GPIODR8R,6);
			#elif  PORTFPin6_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,6);
				SET_BIT(PORTF_GPIODR4R,6);
				RESET_BIT(PORTF_GPIODR8R,6);
			#elif  PORTFPin6_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,6);
				RESET_BIT(PORTF_GPIODR4R,6);
				SET_BIT(PORTF_GPIODR8R,6);
			#endif
		#endif
	#elif  PORTFPin6_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,6);
	#endif
	#if    PORTFPin7_DigitalInputOutput == Enable
		SET_BIT(PORTF_GPIODEN,7);
		#if    PORTFPin7_Function == DIO
			RESET_BIT(PORTF_GPIOAFSEL,7);
		#elif  PORTFPin7_Function == AlternateFunction
			SET_BIT(PORTF_GPIOAFSEL,7);
		#endif
		#if    PORTFPin7_Direction == Input
			RESET_BIT(PORTF_GPIODIR,7);
			#if    PORTFPin7_InternalConnection == Off 
				RESET_BIT(PORTF_GPIOPUR,7);
				RESET_BIT(PORTF_GPIOPDR,7);
				RESET_BIT(PORTF_GPIOODR,7);
			#elif  PORTFPin7_InternalConnection == PullUp 
				SET_BIT(PORTF_GPIOPUR,7);
				RESET_BIT(PORTF_GPIOPDR,7);
				RESET_BIT(PORTF_GPIOODR,7);
			#elif  PORTFPin7_InternalConnection == PullDown
				RESET_BIT(PORTF_GPIOPUR,7);
				SET_BIT(PORTF_GPIOPDR,7);
				RESET_BIT(PORTF_GPIOODR,7);
			#elif  PORTFPin7_InternalConnection == OpenDrain
				RESET_BIT(PORTF_GPIOPUR,7);
				RESET_BIT(PORTF_GPIOPDR,7);
				SET_BIT(PORTF_GPIOODR,7);
			#endif
		#elif  PORTFPin7_Direction == Output
			SET_BIT(PORTF_GPIODIR,7);
			#if    PORTFPin7_DriveStrength == DS_2ma 
				SET_BIT(PORTF_GPIODR2R,7);
				RESET_BIT(PORTF_GPIODR4R,7);
				RESET_BIT(PORTF_GPIODR8R,7);
			#elif  PORTFPin7_DriveStrength == DS_4ma
				RESET_BIT(PORTF_GPIODR2R,7);
				SET_BIT(PORTF_GPIODR4R,7);
				RESET_BIT(PORTF_GPIODR8R,7);
			#elif  PORTFPin7_DriveStrength == DS_8ma
				RESET_BIT(PORTF_GPIODR2R,7);
				RESET_BIT(PORTF_GPIODR4R,7);
				SET_BIT(PORTF_GPIODR8R,7);
			#endif
		#endif
	#elif  PORTFPin7_DigitalInputOutput == Disable
		RESET_BIT(PORTF_GPIODEN,7);
	#endif
	/**************************************************/
	
}

