/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 14-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : ClockControl_Program.c	     */
/*****************************************/
#include "ClockControl_Private.h"
#include "ClockControl_Configuration.h"
#include "ClockControl_Interface.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"

void ClockControl_int(void)
{
	/*The RCC register fields are used, and the fields in RCC2 are ignored*/
	RESET_BIT(RCC2,31);  
	#if SourceOfClock == MainOscillator
		RESET_BIT(RCC,0);
		RESET_BIT(RCC,4);
		RESET_BIT(RCC,5);
		#if   CrystalValueAttachedToTheMainOscillator == MHz4
			RESET_BIT(RCC,6);
			SET_BIT(RCC,7);
			SET_BIT(RCC,8);
			RESET_BIT(RCC,9);
			RESET_BIT(RCC,10);
		#elif CrystalValueAttachedToTheMainOscillator == MHz8
			RESET_BIT(RCC,6);
			SET_BIT(RCC,7);
			SET_BIT(RCC,8);
			SET_BIT(RCC,9);
			RESET_BIT(RCC,10);
		#elif CrystalValueAttachedToTheMainOscillator == MHz16
		    SET_BIT(RCC,6);
			RESET_BIT(RCC,7);
			SET_BIT(RCC,8);
			RESET_BIT(RCC,9);
			SET_BIT(RCC,10);
		#endif
	#elif SourceOfClock == PrecisionInternalOscillator
		SET_BIT(RCC,0);
		SET_BIT(RCC,4);
		RESET_BIT(RCC,5);
	#elif SourceOfClock == PrecisionInternalOscillatorDiv4
		SET_BIT(RCC,0);
		RESET_BIT(RCC,4);
		SET_BIT(RCC,5);
	#elif SourceOfClock == LowFrequencyInternalOscillator
		SET_BIT(RCC,0);
		SET_BIT(RCC,4);
		SET_BIT(RCC,5);
	#endif
	#if     PLL == Enable
		RESET_BIT(RCC,11);
		RESET_BIT(RCC,13);
	#elif	PLL == Disable
		SET_BIT(RCC,11);
		SET_BIT(RCC,13);
	#endif
	#if	  SysClockDivisor == Enable
		SET_BIT(RCC,22);
		#if		SysClockDivisionValue == Div1
			RESET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div2
			SET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif   SysClockDivisionValue == Div3
			RESET_BIT(RCC,23);
			SET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif   SysClockDivisionValue == Div4
			SET_BIT(RCC,23);
			SET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div5
			RESET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			SET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div6
			SET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			SET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div7
			RESET_BIT(RCC,23);
			SET_BIT(RCC,24);
			SET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div8
			SET_BIT(RCC,23);
			SET_BIT(RCC,24);
			SET_BIT(RCC,25);
			RESET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div9
			RESET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div10
			SET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div11
			RESET_BIT(RCC,23);
			SET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div12
			SET_BIT(RCC,23);
			SET_BIT(RCC,24);
			RESET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div13
			RESET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			SET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div14
			SET_BIT(RCC,23);
			RESET_BIT(RCC,24);
			SET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div15
			RESET_BIT(RCC,23);
			SET_BIT(RCC,24);
			SET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#elif	SysClockDivisionValue == Div16
		    SET_BIT(RCC,23);
			SET_BIT(RCC,24);
			SET_BIT(RCC,25);
			SET_BIT(RCC,26);
		#endif
	#elif SysClockDivisor == Disable
		RESET_BIT(RCC,22);
	#endif
	/*The RCC register fields are used, and the fields in RCC2 are ignored*/
	RESET_BIT(RCC2,31);  
	/*************************************************************/
	#if    WatchdogTimer0RunModeClockGating == Enable
		SET_BIT(RCGCWD,0);
	#elif  WatchdogTimer0RunModeClockGating == Disable
		RESET_BIT(RCGCWD,0);
	#endif
	#if    WatchdogTimer1RunModeClockGating == Enable
		SET_BIT(RCGCWD,1);
	#elif  WatchdogTimer1RunModeClockGating == Disable
		RESET_BIT(RCGCWD,1);
	#endif
	/*************************************************************/
	#if    GeneralPurpose1632Timer0RunModeClockGating == Enable
		SET_BIT(RCGCTIMER,0);
	#elif  GeneralPurpose1632Timer0RunModeClockGating == Disable
		RESET_BIT(RCGCTIMER,0);
	#endif
	#if    GeneralPurpose1632Timer1RunModeClockGating == Enable
		SET_BIT(RCGCTIMER,1);
	#elif  GeneralPurpose1632Timer1RunModeClockGating == Disable
		RESET_BIT(RCGCTIMER,1);
	#endif
	#if    GeneralPurpose1632Timer2RunModeClockGating == Enable
		SET_BIT(RCGCTIMER,2);
	#elif  GeneralPurpose1632Timer2RunModeClockGating == Disable
		RESET_BIT(RCGCTIMER,2);
	#endif
	#if    GeneralPurpose1632Timer3RunModeClockGating == Enable
		SET_BIT(RCGCTIMER,3);
	#elif  GeneralPurpose1632Timer3RunModeClockGating == Disable
		RESET_BIT(RCGCTIMER,3);
	#endif
	#if    GeneralPurpose1632Timer4RunModeClockGating == Enable
		SET_BIT(RCGCTIMER,4);
	#elif  GeneralPurpose1632Timer4RunModeClockGating == Disable
		RESET_BIT(RCGCTIMER,4);
	#endif
	#if    GeneralPurpose1632Timer5RunModeClockGating == Enable
		SET_BIT(RCGCTIMER,5);
	#elif  GeneralPurpose1632Timer5RunModeClockGating == Disable
		RESET_BIT(RCGCTIMER,5);
	#endif
	/*************************************************************/
	#if    GPIOPortARunModeClockGating == Enable
		SET_BIT(RCGCGPIO,0);
	#elif  GPIOPortARunModeClockGating == Disable
		RESET_BIT(RCGCGPIO,0);
	#endif
	#if    GPIOPortBRunModeClockGating == Enable
		SET_BIT(RCGCGPIO,1);
	#elif  GPIOPortBRunModeClockGating == Disable
		RESET_BIT(RCGCGPIO,1);
	#endif
	#if    GPIOPortCRunModeClockGating == Enable
		SET_BIT(RCGCGPIO,2);
	#elif  GPIOPortCRunModeClockGating == Disable
		RESET_BIT(RCGCGPIO,2);
	#endif
	#if    GPIOPortDRunModeClockGating == Enable
		SET_BIT(RCGCGPIO,3);
	#elif  GPIOPortDRunModeClockGating == Disable
		RESET_BIT(RCGCGPIO,3);
	#endif
	#if    GPIOPortERunModeClockGating == Enable
		SET_BIT(RCGCGPIO,4);
	#elif  GPIOPortERunModeClockGating == Disable
		RESET_BIT(RCGCGPIO,4);
	#endif
	#if    GPIOPortFRunModeClockGating == Enable
		SET_BIT(RCGCGPIO,5);
	#elif  GPIOPortFRunModeClockGating == Disable
		RESET_BIT(RCGCGPIO,5);
	#endif
	/*************************************************************/
	#if    MDMAModuleRunModeClockGating == Enable
		SET_BIT(RCGCDMA,0);
	#elif  MDMAModuleRunModeClockGating == Disable
		RESET_BIT(RCGCDMA,0);
	#endif
	/*************************************************************/
	#if    HibernationModuleRunModeClockGating == Enable
		SET_BIT(RCGCHIB,0);
	#elif  HibernationModuleRunModeClockGating == Disable
		RESET_BIT(RCGCHIB,0);
	#endif
	/*************************************************************/
	#if    UARTModule0RunModeClockGating == Enable
		SET_BIT(RCGCUART,0);
	#elif  UARTModule0RunModeClockGating == Disable
		RESET_BIT(RCGCUART,0);
	#endif
	#if    UARTModule1RunModeClockGating == Enable
		SET_BIT(RCGCUART,1);
	#elif  UARTModule1RunModeClockGating == Disable
		RESET_BIT(RCGCUART,1);
	#endif
	#if    UARTModule2RunModeClockGating == Enable
		SET_BIT(RCGCUART,2);
	#elif  UARTModule2RunModeClockGating == Disable
		RESET_BIT(RCGCUART,2);
	#endif
	#if    UARTModule3RunModeClockGating == Enable
		SET_BIT(RCGCUART,3);
	#elif  UARTModule3RunModeClockGating == Disable
		RESET_BIT(RCGCUART,3);
	#endif
	#if    UARTModule4RunModeClockGating == Enable
		SET_BIT(RCGCUART,4);
	#elif  UARTModule4RunModeClockGating == Disable
		RESET_BIT(RCGCUART,4);
	#endif
	#if    UARTModule5RunModeClockGating == Enable
		SET_BIT(RCGCUART,5);
	#elif  UARTModule5RunModeClockGating == Disable
		RESET_BIT(RCGCUART,5);
	#endif
	#if    UARTModule6RunModeClockGating == Enable
		SET_BIT(RCGCUART,6);
	#elif  UARTModule6RunModeClockGating == Disable
		RESET_BIT(RCGCUART,6);
	#endif
	#if    UARTModule7RunModeClockGating == Enable
		SET_BIT(RCGCUART,7);
	#elif  UARTModule7RunModeClockGating == Disable
		RESET_BIT(RCGCUART,7);
	#endif
	/*************************************************************/
	#if    SSIModule0RunModeClockGating == Enable
		SET_BIT(RCGCSSI,0);
	#elif  SSIModule0RunModeClockGating == Disable
		RESET_BIT(RCGCSSI,0);
	#endif
	#if    SSIModule1RunModeClockGating == Enable
		SET_BIT(RCGCSSI1);
	#elif  SSIModule1RunModeClockGating == Disable
		RESET_BIT(RCGCSSI,1);
	#endif
	#if    SSIModule2RunModeClockGating == Enable
		SET_BIT(RCGCSSI,2);
	#elif  SSIModule2RunModeClockGating == Disable
		RESET_BIT(RCGCSSI,2);
	#endif
	#if    SSIModule3RunModeClockGating == Enable
		SET_BIT(RCGCSSI,3);
	#elif  SSIModule3RunModeClockGating == Disable
		RESET_BIT(RCGCSSI,3);
	#endif
	/*************************************************************/
	#if    I2CModule0RunModeClockGating == Enable
		SET_BIT(RCGCI2C,0);
	#elif  I2CModule0RunModeClockGating == Disable
		RESET_BIT(RCGCI2C,0);
	#endif
	#if    I2CModule1RunModeClockGating == Enable
		SET_BIT(RCGCI2C,1);
	#elif  I2CModule1RunModeClockGating == Disable
		RESET_BIT(RCGCI2C,1);
	#endif
	#if    I2CModule2RunModeClockGating == Enable
		SET_BIT(RCGCI2C,2);
	#elif  I2CModule2RunModeClockGating == Disable
		RESET_BIT(RCGCI2C,2);
	#endif	
	#if    I2CModule3RunModeClockGating == Enable
		SET_BIT(RCGCI2C,3);
	#elif  I2CModule3RunModeClockGating == Disable
		RESET_BIT(RCGCI2C,3);
	#endif
	/*************************************************************/
	#if    USBModule0RunModeClockGating == Enable
		SET_BIT(RCGCUSB,0);
	#elif  USBModule0RunModeClockGating == Disable
		RESET_BIT(RCGCUSB,0);
	#endif
	/*************************************************************/
	#if    CANModule0RunModeClockGating == Enable
		SET_BIT(RCGCCAN,0);
	#elif  CANModule0RunModeClockGating == Disable
		RESET_BIT(RCGCCAN,0);
	#endif
	#if    CANModule1RunModeClockGating == Enable
		SET_BIT(RCGCCAN,1);
	#elif  CANModule1RunModeClockGating == Disable
		RESET_BIT(RCGCCAN,1);
	#endif
	/*************************************************************/
	#if    ADCModule0RunModeClockGating == Enable
		SET_BIT(RCGCADC,0);
	#elif  ADCModule0RunModeClockGating == Disable
		RESET_BIT(RCGCADC,0);
	#endif
	#if    ADCModule1RunModeClockGating == Enable
		SET_BIT(RCGCADC,1);
	#elif  ADCModule1RunModeClockGating == Disable
		RESET_BIT(RCGCADC,1);
	#endif
	/*************************************************************/
	#if    AnalogComparatorModule0RunModeClockGating == Enable
		SET_BIT(RCGCACMP,0);
	#elif  AnalogComparatorModule0RunModeClockGating == Disable
		RESET_BIT(RCGCACMP,0);
	#endif
	/*************************************************************/
	#if    PWMModule0RunModeClockGating == Enable
		SET_BIT(RCGCPWM,0);
	#elif  PWMModule0RunModeClockGating == Disable
		RESET_BIT(RCGCPWM,0);
	#endif
	#if    PWMModule1RunModeClockGating == Enable
		SET_BIT(RCGCPWM,1);
	#elif  PWMModule1RunModeClockGating == Disable
		RESET_BIT(RCGCPWM,1);
	#endif
	/*************************************************************/
	#if    QEIModule0RunModeClockGating == Enable
		SET_BIT(RCGCQEI,0);
	#elif  QEIModule0RunModeClockGating == Disable
		RESET_BIT(RCGCQEI,0);
	#endif
	#if    QEIModule1RunModeClockGating == Enable
		SET_BIT(RCGCQEI,1);
	#elif  QEIModule1RunModeClockGating == Disable
		RESET_BIT(RCGCQEI,1);
	#endif
	/*************************************************************/
	#if    EEPROMModuleRunModeClockGating == Enable
		SET_BIT(RCGCEEPROM,0);
	#elif  EEPROMModuleRunModeClockGating == Disable
		RESET_BIT(RCGCEEPROM,0);
	#endif
	/*************************************************************/
	#if    GeneralPurpose3264Timer0RunModeClockGating == Enable
		SET_BIT(RCGCWTIMER,0);
	#elif  GeneralPurpose3264Timer0RunModeClockGating == Disable
		RESET_BIT(RCGCWTIMER,0);
	#endif
	#if    GeneralPurpose3264Timer1RunModeClockGating == Enable
		SET_BIT(RCGCWTIMER,1);
	#elif  GeneralPurpose3264Timer1RunModeClockGating == Disable
		RESET_BIT(RCGCWTIMER,1);
	#endif
	#if    GeneralPurpose3264Timer2RunModeClockGating == Enable
		SET_BIT(RCGCWTIMER,2);
	#elif  GeneralPurpose3264Timer2RunModeClockGating == Disable
		RESET_BIT(RCGCWTIMER,2);
	#endif
	#if    GeneralPurpose3264Timer3RunModeClockGating == Enable
		SET_BIT(RCGCWTIMER,3);
	#elif  GeneralPurpose3264Timer3RunModeClockGating == Disable
		RESET_BIT(RCGCWTIMER,3);
	#endif
	#if    GeneralPurpose3264Timer4RunModeClockGating == Enable
		SET_BIT(RCGCWTIMER,4);
	#elif  GeneralPurpose3264Timer4RunModeClockGating == Disable
		RESET_BIT(RCGCWTIMER,4);
	#endif
	#if    GeneralPurpose3264Timer5RunModeClockGating == Enable
		SET_BIT(RCGCWTIMER,5);
	#elif  GeneralPurpose3264Timer5RunModeClockGating == Disable
		RESET_BIT(RCGCWTIMER,5);
	#endif
	/*************************************************************/
}
