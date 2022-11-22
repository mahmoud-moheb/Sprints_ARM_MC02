/******************************************/
/*	Author : Mahmoud Moheb				  */
/*	Date   : 14-11-2022   		   		  */
/*	Version: 0.1				          */
/*	File   : ClockControl_Configuration.h */
/******************************************/

#ifndef _CONTROLCLOCK_CONFIGURATION_H_
#define _CONTROLCLOCK_CONFIGURATION_H_

#define SourceOfClock                                    MainOscillator 
#define CrystalValueAttachedToTheMainOscillator          MHz16
#define PLL                                              Disable
#define SysClockDivisor                                  Disable
#define SysClockDivisionValue                            Div1
/*Watchdog Timer Run Mode Clock Gating Control (RCGCWD)*/
#define WatchdogTimer0RunModeClockGating                 Disable
#define WatchdogTimer1RunModeClockGating                 Disable
/*16/32-Bit General-Purpose Timer Run Mode Clock Gating Control (RCGCTIMER)*/
#define GeneralPurpose1632Timer0RunModeClockGating       Disable
#define GeneralPurpose1632Timer1RunModeClockGating       Disable
#define GeneralPurpose1632Timer2RunModeClockGating       Disable
#define GeneralPurpose1632Timer3RunModeClockGating       Disable
#define GeneralPurpose1632Timer4RunModeClockGating       Disable
#define GeneralPurpose1632Timer5RunModeClockGating       Disable
/*General-Purpose Input/Output Run Mode Clock Gating Control (RCGCGPIO)*/
#define GPIOPortARunModeClockGating                      Disable
#define GPIOPortBRunModeClockGating                      Disable
#define GPIOPortCRunModeClockGating                      Disable
#define GPIOPortDRunModeClockGating                      Disable
#define GPIOPortERunModeClockGating                      Disable
#define GPIOPortFRunModeClockGating                      Enable
/*Micro Direct Memory Access Run Mode Clock Gating Control (RCGCDMA)*/
#define MDMAModuleRunModeClockGating                     Enable
/*Hibernation Run Mode Clock Gating Control (RCGCHIB)*/
#define HibernationModuleRunModeClockGating              Disable
/*Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating Control (RCGCUART)*/
#define UARTModule0RunModeClockGating                    Disable
#define UARTModule1RunModeClockGating                    Disable
#define UARTModule2RunModeClockGating                    Disable
#define UARTModule3RunModeClockGating                    Disable
#define UARTModule4RunModeClockGating                    Disable
#define UARTModule5RunModeClockGating                    Disable
#define UARTModule6RunModeClockGating                    Disable
#define UARTModule7RunModeClockGating                    Disable
/*Synchronous Serial Interface Run Mode Clock Gating Control (RCGCSSI)*/
#define SSIModule0RunModeClockGating                     Disable
#define SSIModule1RunModeClockGating                     Disable
#define SSIModule2RunModeClockGating                     Disable
#define SSIModule3RunModeClockGating                     Disable
/*Inter-Integrated Circuit Run Mode Clock Gating Control (RCGCI2C)*/
#define I2CModule0RunModeClockGating                     Disable
#define I2CModule1RunModeClockGating                     Disable
#define I2CModule2RunModeClockGating                     Disable
#define I2CModule3RunModeClockGating                     Disable
/*Universal Serial Bus Run Mode Clock Gating Control (RCGCUSB)*/
#define USBModule0RunModeClockGating                     Disable
/*Controller Area Network Run Mode Clock Gating Control (RCGCCAN)*/
#define CANModule0RunModeClockGating                     Disable
#define CANModule1RunModeClockGating                     Disable
/*Analog-to-Digital Converter Run Mode Clock Gating Control (RCGCADC)*/
#define ADCModule0RunModeClockGating                     Disable
#define ADCModule1RunModeClockGating                     Disable
/*Analog Comparator Run Mode Clock Gating Control (RCGCACMP)*/
#define AnalogComparatorModule0RunModeClockGating        Disable
/*Pulse Width Modulator Run Mode Clock Gating Control (RCGCPWM)*/
#define PWMModule0RunModeClockGating                     Disable
#define PWMModule1RunModeClockGating                     Disable
/*Quadrature Encoder Interface Run Mode Clock Gating Control (RCGCQEI)*/
#define QEIModule0RunModeClockGating                     Disable
#define QEIModule1RunModeClockGating                     Disable
/*EEPROM Run Mode Clock Gating Control (RCGCEEPROM)*/
#define EEPROMModuleRunModeClockGating                   Disable
/*32/64-Bit Wide General-Purpose Timer Run Mode Clock Gating Control (RCGCWTIMER)*/
#define GeneralPurpose3264Timer0RunModeClockGating       Disable
#define GeneralPurpose3264Timer1RunModeClockGating       Disable
#define GeneralPurpose3264Timer2RunModeClockGating       Disable
#define GeneralPurpose3264Timer3RunModeClockGating       Disable
#define GeneralPurpose3264Timer4RunModeClockGating       Disable
#define GeneralPurpose3264Timer5RunModeClockGating       Disable



#endif
