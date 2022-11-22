/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 14-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : ClockControl_Private.h	     */
/*****************************************/


#ifndef _CONTROLCLOCK_PRIVATE_H_
#define _CONTROLCLOCK_PRIVATE_H_

#define ClockControlBaseAddress  0x400FE000
#define RCC           *((volatile u32*)(ClockControlBaseAddress+0x060))  /*Run-Mode Clock Configuration*/
#define RCC2          *((volatile u32*)(ClockControlBaseAddress+0x070))  /*Run-Mode Clock Configuration 2*/
#define RCGCWD        *((volatile u32*)(ClockControlBaseAddress+0x600))  
#define RCGCTIMER     *((volatile u32*)(ClockControlBaseAddress+0x604))  
#define RCGCGPIO      *((volatile u32*)(ClockControlBaseAddress+0x608))  
#define RCGCDMA       *((volatile u32*)(ClockControlBaseAddress+0x612)) 
#define RCGCHIB       *((volatile u32*)(ClockControlBaseAddress+0x614)) 
#define RCGCUART      *((volatile u32*)(ClockControlBaseAddress+0x618))  
#define RCGCSSI       *((volatile u32*)(ClockControlBaseAddress+0x61C))  
#define RCGCI2C       *((volatile u32*)(ClockControlBaseAddress+0x620))  
#define RCGCUSB       *((volatile u32*)(ClockControlBaseAddress+0x628))  
#define RCGCCAN       *((volatile u32*)(ClockControlBaseAddress+0x634))  
#define RCGCADC       *((volatile u32*)(ClockControlBaseAddress+0x638))  
#define RCGCACMP      *((volatile u32*)(ClockControlBaseAddress+0x63C))  
#define RCGCPWM       *((volatile u32*)(ClockControlBaseAddress+0x640))  
#define RCGCQEI       *((volatile u32*)(ClockControlBaseAddress+0x644))  
#define RCGCEEPROM    *((volatile u32*)(ClockControlBaseAddress+0x658))  
#define RCGCWTIMER    *((volatile u32*)(ClockControlBaseAddress+0x65C))  



/*SourceOfClock*/
#define MainOscillator                      0
#define PrecisionInternalOscillator         1
#define PrecisionInternalOscillatorDiv4     2
#define LowFrequencyInternalOscillator      3

/*CrystalValueAttachedToTheMainOscillator*/
#define MHz4                                0
#define MHz8                                1
#define MHz16                               2

/*SysClockDivisionValue*/
#define Div1                                0
#define Div2                                1
#define Div3                                2
#define Div4                                3
#define Div5                                4
#define Div6                                5
#define Div7                                6
#define Div8                                7
#define Div9                                8
#define Div10                               9
#define Div11                               10
#define Div12                               11
#define Div13                               12
#define Div14                               13
#define Div15                               14
#define Div16                               16

/*PLL and SysClockDivisor*/
#define Enable                              1
#define Disable                             0

#endif
