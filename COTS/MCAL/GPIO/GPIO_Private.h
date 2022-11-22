/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 16-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : GPIO_Private.h	     */
/*****************************************/


#ifndef _GPIO_PRIVATE_H_
#define _GPIO_PRIVATE_H_
/**************************************************************************/
#define PORTABaseAddress  0x40058000
#define PORTA_GPIODATA           *((volatile u32*)(PORTABaseAddress+0x3FC))
#define PORTA_GPIODIR            *((volatile u32*)(PORTABaseAddress+0x400))
#define PORTA_GPIOIS             *((volatile u32*)(PORTABaseAddress+0x404)) 
#define PORTA_GPIOIBE            *((volatile u32*)(PORTABaseAddress+0x408)) 
#define PORTA_GPIOIEV            *((volatile u32*)(PORTABaseAddress+0x40C))
#define PORTA_GPIOIM             *((volatile u32*)(PORTABaseAddress+0x410))
#define PORTA_GPIORIS            *((volatile u32*)(PORTABaseAddress+0x414))
#define PORTA_GPIOMIS            *((volatile u32*)(PORTABaseAddress+0x418))
#define PORTA_GPIOICR            *((volatile u32*)(PORTABaseAddress+0x41C))
#define PORTA_GPIOAFSEL          *((volatile u32*)(PORTABaseAddress+0x420))
#define PORTA_GPIODR2R           *((volatile u32*)(PORTABaseAddress+0x500))
#define PORTA_GPIODR4R           *((volatile u32*)(PORTABaseAddress+0x504))
#define PORTA_GPIODR8R           *((volatile u32*)(PORTABaseAddress+0x508))
#define PORTA_GPIOODR            *((volatile u32*)(PORTABaseAddress+0x50C))
#define PORTA_GPIOPUR            *((volatile u32*)(PORTABaseAddress+0x510))
#define PORTA_GPIOPDR            *((volatile u32*)(PORTABaseAddress+0x514))
#define PORTA_GPIOSLR            *((volatile u32*)(PORTABaseAddress+0x518))
#define PORTA_GPIODEN            *((volatile u32*)(PORTABaseAddress+0x51C))
#define PORTA_GPIOLOCK           *((volatile u32*)(PORTABaseAddress+0x520))
#define PORTA_GPIOCR             *((volatile u32*)(PORTABaseAddress+0x524))
#define PORTA_GPIOAMSEL          *((volatile u32*)(PORTABaseAddress+0x528))
#define PORTA_GPIOPCTL           *((volatile u32*)(PORTABaseAddress+0x52C))
#define PORTA_GPIOADCCTL         *((volatile u32*)(PORTABaseAddress+0x530))
#define PORTA_GPIODMACTL         *((volatile u32*)(PORTABaseAddress+0x534))
#define PORTA_GPIOPeriphID4      *((volatile u32*)(PORTABaseAddress+0xFD0))
#define PORTA_GPIOPeriphID5      *((volatile u32*)(PORTABaseAddress+0xFD4))
#define PORTA_GPIOPeriphID6      *((volatile u32*)(PORTABaseAddress+0xFD8))
#define PORTA_GPIOPeriphID7      *((volatile u32*)(PORTABaseAddress+0xFDC))
#define PORTA_GPIOPeriphID0      *((volatile u32*)(PORTABaseAddress+0xFE0))
#define PORTA_GPIOPeriphID1      *((volatile u32*)(PORTABaseAddress+0xFE4))
#define PORTA_GPIOPeriphID2      *((volatile u32*)(PORTABaseAddress+0xFE8))
#define PORTA_GPIOPeriphID3      *((volatile u32*)(PORTABaseAddress+0xFEC))
#define PORTA_GPIOPCellID0       *((volatile u32*)(PORTABaseAddress+0xFF0))
#define PORTA_GPIOPCellID1       *((volatile u32*)(PORTABaseAddress+0xFF4))
#define PORTA_GPIOPCellID2       *((volatile u32*)(PORTABaseAddress+0xFF8))
#define PORTA_GPIOPCellID3       *((volatile u32*)(PORTABaseAddress+0xFFC))
/**************************************************************************/
#define PORTBBaseAddress  0x40059000
#define PORTB_GPIODATA           *((volatile u32*)(PORTBBaseAddress+0x3FC))
#define PORTB_GPIODIR            *((volatile u32*)(PORTBBaseAddress+0x400))
#define PORTB_GPIOIS             *((volatile u32*)(PORTBBaseAddress+0x404)) 
#define PORTB_GPIOIBE            *((volatile u32*)(PORTBBaseAddress+0x408)) 
#define PORTB_GPIOIEV            *((volatile u32*)(PORTBBaseAddress+0x40C))
#define PORTB_GPIOIM             *((volatile u32*)(PORTBBaseAddress+0x410))
#define PORTB_GPIORIS            *((volatile u32*)(PORTBBaseAddress+0x414))
#define PORTB_GPIOMIS            *((volatile u32*)(PORTBBaseAddress+0x418))
#define PORTB_GPIOICR            *((volatile u32*)(PORTBBaseAddress+0x41C))
#define PORTB_GPIOAFSEL          *((volatile u32*)(PORTBBaseAddress+0x420))
#define PORTB_GPIODR2R           *((volatile u32*)(PORTBBaseAddress+0x500))
#define PORTB_GPIODR4R           *((volatile u32*)(PORTBBaseAddress+0x504))
#define PORTB_GPIODR8R           *((volatile u32*)(PORTBBaseAddress+0x508))
#define PORTB_GPIOODR            *((volatile u32*)(PORTBBaseAddress+0x50C))
#define PORTB_GPIOPUR            *((volatile u32*)(PORTBBaseAddress+0x510))
#define PORTB_GPIOPDR            *((volatile u32*)(PORTBBaseAddress+0x514))
#define PORTB_GPIOSLR            *((volatile u32*)(PORTBBaseAddress+0x518))
#define PORTB_GPIODEN            *((volatile u32*)(PORTBBaseAddress+0x51C))
#define PORTB_GPIOLOCK           *((volatile u32*)(PORTBBaseAddress+0x520))
#define PORTB_GPIOCR             *((volatile u32*)(PORTBBaseAddress+0x524))
#define PORTB_GPIOAMSEL          *((volatile u32*)(PORTBBaseAddress+0x528))
#define PORTB_GPIOPCTL           *((volatile u32*)(PORTBBaseAddress+0x52C))
#define PORTB_GPIOADCCTL         *((volatile u32*)(PORTBBaseAddress+0x530))
#define PORTB_GPIODMACTL         *((volatile u32*)(PORTBBaseAddress+0x534))
#define PORTB_GPIOPeriphID4      *((volatile u32*)(PORTBBaseAddress+0xFD0))
#define PORTB_GPIOPeriphID5      *((volatile u32*)(PORTBBaseAddress+0xFD4))
#define PORTB_GPIOPeriphID6      *((volatile u32*)(PORTBBaseAddress+0xFD8))
#define PORTB_GPIOPeriphID7      *((volatile u32*)(PORTBBaseAddress+0xFDC))
#define PORTB_GPIOPeriphID0      *((volatile u32*)(PORTBBaseAddress+0xFE0))
#define PORTB_GPIOPeriphID1      *((volatile u32*)(PORTBBaseAddress+0xFE4))
#define PORTB_GPIOPeriphID2      *((volatile u32*)(PORTBBaseAddress+0xFE8))
#define PORTB_GPIOPeriphID3      *((volatile u32*)(PORTBBaseAddress+0xFEC))
#define PORTB_GPIOPCellID0       *((volatile u32*)(PORTBBaseAddress+0xFF0))
#define PORTB_GPIOPCellID1       *((volatile u32*)(PORTBBaseAddress+0xFF4))
#define PORTB_GPIOPCellID2       *((volatile u32*)(PORTBBaseAddress+0xFF8))
#define PORTB_GPIOPCellID3       *((volatile u32*)(PORTBBaseAddress+0xFFC))
/**************************************************************************/
#define PORTCBaseAddress  0x4005A000
#define PORTC_GPIODATA           *((volatile u32*)(PORTCBaseAddress+0x3FC))
#define PORTC_GPIODIR            *((volatile u32*)(PORTCBaseAddress+0x400))
#define PORTC_GPIOIS             *((volatile u32*)(PORTCBaseAddress+0x404)) 
#define PORTC_GPIOIBE            *((volatile u32*)(PORTCBaseAddress+0x408)) 
#define PORTC_GPIOIEV            *((volatile u32*)(PORTCBaseAddress+0x40C))
#define PORTC_GPIOIM             *((volatile u32*)(PORTCBaseAddress+0x410))
#define PORTC_GPIORIS            *((volatile u32*)(PORTCBaseAddress+0x414))
#define PORTC_GPIOMIS            *((volatile u32*)(PORTCBaseAddress+0x418))
#define PORTC_GPIOICR            *((volatile u32*)(PORTCBaseAddress+0x41C))
#define PORTC_GPIOAFSEL          *((volatile u32*)(PORTCBaseAddress+0x420))
#define PORTC_GPIODR2R           *((volatile u32*)(PORTCBaseAddress+0x500))
#define PORTC_GPIODR4R           *((volatile u32*)(PORTCBaseAddress+0x504))
#define PORTC_GPIODR8R           *((volatile u32*)(PORTCBaseAddress+0x508))
#define PORTC_GPIOODR            *((volatile u32*)(PORTCBaseAddress+0x50C))
#define PORTC_GPIOPUR            *((volatile u32*)(PORTCBaseAddress+0x510))
#define PORTC_GPIOPDR            *((volatile u32*)(PORTCBaseAddress+0x514))
#define PORTC_GPIOSLR            *((volatile u32*)(PORTCBaseAddress+0x518))
#define PORTC_GPIODEN            *((volatile u32*)(PORTCBaseAddress+0x51C))
#define PORTC_GPIOLOCK           *((volatile u32*)(PORTCBaseAddress+0x520))
#define PORTC_GPIOCR             *((volatile u32*)(PORTCBaseAddress+0x524))
#define PORTC_GPIOAMSEL          *((volatile u32*)(PORTCBaseAddress+0x528))
#define PORTC_GPIOPCTL           *((volatile u32*)(PORTCBaseAddress+0x52C))
#define PORTC_GPIOADCCTL         *((volatile u32*)(PORTCBaseAddress+0x530))
#define PORTC_GPIODMACTL         *((volatile u32*)(PORTCBaseAddress+0x534))
#define PORTC_GPIOPeriphID4      *((volatile u32*)(PORTCBaseAddress+0xFD0))
#define PORTC_GPIOPeriphID5      *((volatile u32*)(PORTCBaseAddress+0xFD4))
#define PORTC_GPIOPeriphID6      *((volatile u32*)(PORTCBaseAddress+0xFD8))
#define PORTC_GPIOPeriphID7      *((volatile u32*)(PORTCBaseAddress+0xFDC))
#define PORTC_GPIOPeriphID0      *((volatile u32*)(PORTCBaseAddress+0xFE0))
#define PORTC_GPIOPeriphID1      *((volatile u32*)(PORTCBaseAddress+0xFE4))
#define PORTC_GPIOPeriphID2      *((volatile u32*)(PORTCBaseAddress+0xFE8))
#define PORTC_GPIOPeriphID3      *((volatile u32*)(PORTCBaseAddress+0xFEC))
#define PORTC_GPIOPCellID0       *((volatile u32*)(PORTCBaseAddress+0xFF0))
#define PORTC_GPIOPCellID1       *((volatile u32*)(PORTCBaseAddress+0xFF4))
#define PORTC_GPIOPCellID2       *((volatile u32*)(PORTCBaseAddress+0xFF8))
#define PORTC_GPIOPCellID3       *((volatile u32*)(PORTCBaseAddress+0xFFC))
/**************************************************************************/
#define PORTDBaseAddress  0x4005B000
#define PORTD_GPIODATA           *((volatile u32*)(PORTDBaseAddress+0x3FC))
#define PORTD_GPIODIR            *((volatile u32*)(PORTDBaseAddress+0x400))
#define PORTD_GPIOIS             *((volatile u32*)(PORTDBaseAddress+0x404)) 
#define PORTD_GPIOIBE            *((volatile u32*)(PORTDBaseAddress+0x408)) 
#define PORTD_GPIOIEV            *((volatile u32*)(PORTDBaseAddress+0x40C))
#define PORTD_GPIOIM             *((volatile u32*)(PORTDBaseAddress+0x410))
#define PORTD_GPIORIS            *((volatile u32*)(PORTDBaseAddress+0x414))
#define PORTD_GPIOMIS            *((volatile u32*)(PORTDBaseAddress+0x418))
#define PORTD_GPIOICR            *((volatile u32*)(PORTDBaseAddress+0x41C))
#define PORTD_GPIOAFSEL          *((volatile u32*)(PORTDBaseAddress+0x420))
#define PORTD_GPIODR2R           *((volatile u32*)(PORTDBaseAddress+0x500))
#define PORTD_GPIODR4R           *((volatile u32*)(PORTDBaseAddress+0x504))
#define PORTD_GPIODR8R           *((volatile u32*)(PORTDBaseAddress+0x508))
#define PORTD_GPIOODR            *((volatile u32*)(PORTDBaseAddress+0x50C))
#define PORTD_GPIOPUR            *((volatile u32*)(PORTDBaseAddress+0x510))
#define PORTD_GPIOPDR            *((volatile u32*)(PORTDBaseAddress+0x514))
#define PORTD_GPIOSLR            *((volatile u32*)(PORTDBaseAddress+0x518))
#define PORTD_GPIODEN            *((volatile u32*)(PORTDBaseAddress+0x51C))
#define PORTD_GPIOLOCK           *((volatile u32*)(PORTDBaseAddress+0x520))
#define PORTD_GPIOCR             *((volatile u32*)(PORTDBaseAddress+0x524))
#define PORTD_GPIOAMSEL          *((volatile u32*)(PORTDBaseAddress+0x528))
#define PORTD_GPIOPCTL           *((volatile u32*)(PORTDBaseAddress+0x52C))
#define PORTD_GPIOADCCTL         *((volatile u32*)(PORTDBaseAddress+0x530))
#define PORTD_GPIODMACTL         *((volatile u32*)(PORTDBaseAddress+0x534))
#define PORTD_GPIOPeriphID4      *((volatile u32*)(PORTDBaseAddress+0xFD0))
#define PORTD_GPIOPeriphID5      *((volatile u32*)(PORTDBaseAddress+0xFD4))
#define PORTD_GPIOPeriphID6      *((volatile u32*)(PORTDBaseAddress+0xFD8))
#define PORTD_GPIOPeriphID7      *((volatile u32*)(PORTDBaseAddress+0xFDC))
#define PORTD_GPIOPeriphID0      *((volatile u32*)(PORTDBaseAddress+0xFE0))
#define PORTD_GPIOPeriphID1      *((volatile u32*)(PORTDBaseAddress+0xFE4))
#define PORTD_GPIOPeriphID2      *((volatile u32*)(PORTDBaseAddress+0xFE8))
#define PORTD_GPIOPeriphID3      *((volatile u32*)(PORTDBaseAddress+0xFEC))
#define PORTD_GPIOPCellID0       *((volatile u32*)(PORTDBaseAddress+0xFF0))
#define PORTD_GPIOPCellID1       *((volatile u32*)(PORTDBaseAddress+0xFF4))
#define PORTD_GPIOPCellID2       *((volatile u32*)(PORTDBaseAddress+0xFF8))
#define PORTD_GPIOPCellID3       *((volatile u32*)(PORTDBaseAddress+0xFFC))
/**************************************************************************/
#define PORTEBaseAddress  0x4005C000
#define PORTE_GPIODATA           *((volatile u32*)(PORTEBaseAddress+0x3FC))
#define PORTE_GPIODIR            *((volatile u32*)(PORTEBaseAddress+0x400))
#define PORTE_GPIOIS             *((volatile u32*)(PORTEBaseAddress+0x404)) 
#define PORTE_GPIOIBE            *((volatile u32*)(PORTEBaseAddress+0x408)) 
#define PORTE_GPIOIEV            *((volatile u32*)(PORTEBaseAddress+0x40C))
#define PORTE_GPIOIM             *((volatile u32*)(PORTEBaseAddress+0x410))
#define PORTE_GPIORIS            *((volatile u32*)(PORTEBaseAddress+0x414))
#define PORTE_GPIOMIS            *((volatile u32*)(PORTEBaseAddress+0x418))
#define PORTE_GPIOICR            *((volatile u32*)(PORTEBaseAddress+0x41C))
#define PORTE_GPIOAFSEL          *((volatile u32*)(PORTEBaseAddress+0x420))
#define PORTE_GPIODR2R           *((volatile u32*)(PORTEBaseAddress+0x500))
#define PORTE_GPIODR4R           *((volatile u32*)(PORTEBaseAddress+0x504))
#define PORTE_GPIODR8R           *((volatile u32*)(PORTEBaseAddress+0x508))
#define PORTE_GPIOODR            *((volatile u32*)(PORTEBaseAddress+0x50C))
#define PORTE_GPIOPUR            *((volatile u32*)(PORTEBaseAddress+0x510))
#define PORTE_GPIOPDR            *((volatile u32*)(PORTEBaseAddress+0x514))
#define PORTE_GPIOSLR            *((volatile u32*)(PORTEBaseAddress+0x518))
#define PORTE_GPIODEN            *((volatile u32*)(PORTEBaseAddress+0x51C))
#define PORTE_GPIOLOCK           *((volatile u32*)(PORTEBaseAddress+0x520))
#define PORTE_GPIOCR             *((volatile u32*)(PORTEBaseAddress+0x524))
#define PORTE_GPIOAMSEL          *((volatile u32*)(PORTEBaseAddress+0x528))
#define PORTE_GPIOPCTL           *((volatile u32*)(PORTEBaseAddress+0x52C))
#define PORTE_GPIOADCCTL         *((volatile u32*)(PORTEBaseAddress+0x530))
#define PORTE_GPIODMACTL         *((volatile u32*)(PORTEBaseAddress+0x534))
#define PORTE_GPIOPeriphID4      *((volatile u32*)(PORTEBaseAddress+0xFD0))
#define PORTE_GPIOPeriphID5      *((volatile u32*)(PORTEBaseAddress+0xFD4))
#define PORTE_GPIOPeriphID6      *((volatile u32*)(PORTEBaseAddress+0xFD8))
#define PORTE_GPIOPeriphID7      *((volatile u32*)(PORTEBaseAddress+0xFDC))
#define PORTE_GPIOPeriphID0      *((volatile u32*)(PORTEBaseAddress+0xFE0))
#define PORTE_GPIOPeriphID1      *((volatile u32*)(PORTEBaseAddress+0xFE4))
#define PORTE_GPIOPeriphID2      *((volatile u32*)(PORTEBaseAddress+0xFE8))
#define PORTE_GPIOPeriphID3      *((volatile u32*)(PORTEBaseAddress+0xFEC))
#define PORTE_GPIOPCellID0       *((volatile u32*)(PORTEBaseAddress+0xFF0))
#define PORTE_GPIOPCellID1       *((volatile u32*)(PORTEBaseAddress+0xFF4))
#define PORTE_GPIOPCellID2       *((volatile u32*)(PORTEBaseAddress+0xFF8))
#define PORTE_GPIOPCellID3       *((volatile u32*)(PORTEBaseAddress+0xFFC))
/**************************************************************************/
#define PORTFBaseAddress  0x4005D000
#define PORTF_GPIODATA           *((volatile u32*)(PORTFBaseAddress+0x3FC))
#define PORTF_GPIODIR            *((volatile u32*)(PORTFBaseAddress+0x400))
#define PORTF_GPIOIS             *((volatile u32*)(PORTFBaseAddress+0x404)) 
#define PORTF_GPIOIBE            *((volatile u32*)(PORTFBaseAddress+0x408)) 
#define PORTF_GPIOIEV            *((volatile u32*)(PORTFBaseAddress+0x40C))
#define PORTF_GPIOIM             *((volatile u32*)(PORTFBaseAddress+0x410))
#define PORTF_GPIORIS            *((volatile u32*)(PORTFBaseAddress+0x414))
#define PORTF_GPIOMIS            *((volatile u32*)(PORTFBaseAddress+0x418))
#define PORTF_GPIOICR            *((volatile u32*)(PORTFBaseAddress+0x41C))
#define PORTF_GPIOAFSEL          *((volatile u32*)(PORTFBaseAddress+0x420))
#define PORTF_GPIODR2R           *((volatile u32*)(PORTFBaseAddress+0x500))
#define PORTF_GPIODR4R           *((volatile u32*)(PORTFBaseAddress+0x504))
#define PORTF_GPIODR8R           *((volatile u32*)(PORTFBaseAddress+0x508))
#define PORTF_GPIOODR            *((volatile u32*)(PORTFBaseAddress+0x50C))
#define PORTF_GPIOPUR            *((volatile u32*)(PORTFBaseAddress+0x510))
#define PORTF_GPIOPDR            *((volatile u32*)(PORTFBaseAddress+0x514))
#define PORTF_GPIOSLR            *((volatile u32*)(PORTFBaseAddress+0x518))
#define PORTF_GPIODEN            *((volatile u32*)(PORTFBaseAddress+0x51C))
#define PORTF_GPIOLOCK           *((volatile u32*)(PORTFBaseAddress+0x520))
#define PORTF_GPIOCR             *((volatile u32*)(PORTFBaseAddress+0x524))
#define PORTF_GPIOAMSEL          *((volatile u32*)(PORTFBaseAddress+0x528))
#define PORTF_GPIOPCTL           *((volatile u32*)(PORTFBaseAddress+0x52C))
#define PORTF_GPIOADCCTL         *((volatile u32*)(PORTFBaseAddress+0x530))
#define PORTF_GPIODMACTL         *((volatile u32*)(PORTFBaseAddress+0x534))
#define PORTF_GPIOPeriphID4      *((volatile u32*)(PORTFBaseAddress+0xFD0))
#define PORTF_GPIOPeriphID5      *((volatile u32*)(PORTFBaseAddress+0xFD4))
#define PORTF_GPIOPeriphID6      *((volatile u32*)(PORTFBaseAddress+0xFD8))
#define PORTF_GPIOPeriphID7      *((volatile u32*)(PORTFBaseAddress+0xFDC))
#define PORTF_GPIOPeriphID0      *((volatile u32*)(PORTFBaseAddress+0xFE0))
#define PORTF_GPIOPeriphID1      *((volatile u32*)(PORTFBaseAddress+0xFE4))
#define PORTF_GPIOPeriphID2      *((volatile u32*)(PORTFBaseAddress+0xFE8))
#define PORTF_GPIOPeriphID3      *((volatile u32*)(PORTFBaseAddress+0xFEC))
#define PORTF_GPIOPCellID0       *((volatile u32*)(PORTFBaseAddress+0xFF0))
#define PORTF_GPIOPCellID1       *((volatile u32*)(PORTFBaseAddress+0xFF4))
#define PORTF_GPIOPCellID2       *((volatile u32*)(PORTFBaseAddress+0xFF8))
#define PORTF_GPIOPCellID3       *((volatile u32*)(PORTFBaseAddress+0xFFC))
/**************************************************************************/
#define Input               0
#define Output              1
/**************************************************************************/
#define DIO                 0
#define AlternateFunction   1
/**************************************************************************/
#define DS_2ma              0
#define DS_4ma              1
#define DS_8ma              2
/**************************************************************************/
#define Off                 0
#define OpenDrain           1
#define PullUp              2
#define PullDown            3
/**************************************************************************/
#define Disable             0
#define Enable              1
/**************************************************************************/

#endif