/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 24-12-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : Led_Program.c		         */
/*****************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_Private.h"
#include "Led_Private.h"
#include "Led_Configuration.h"
#include "Led_Interface.h"


void Led_Init()
{
	#if Led_type == Led
		#if	Led_port == PORTA
			SET_BIT(PORTA_GPIODIR,Led_BinNum);
		#elif Led_port == PORTB
			SET_BIT(PORTB_GPIODIR,Led_BinNum);
		#elif Led_port == PORTC
			SET_BIT(PORTC_GPIODIR,Led_BinNum);
		#elif Led_port == PORTD
			SET_BIT(PORTD_GPIODIR,Led_BinNum);
		#elif Led_port == PORTE
			SET_BIT(PORTE_GPIODIR,Led_BinNum);
		#elif Led_port == PORTF
			SET_BIT(PORTF_GPIODIR,Led_BinNum);
		#endif
	#elif Led_type == RGB_Led
		#if	  LedR_port == PORTA
			SET_BIT(PORTA_GPIODIR,LedR_BinNum);
		#elif LedR_port == PORTB
			SET_BIT(PORTB_GPIODIR,LedR_BinNum);
		#elif LedR_port == PORTC
			SET_BIT(PORTC_GPIODIR,LedR_BinNum);
		#elif LedR_port == PORTD
			SET_BIT(PORTD_GPIODIR,LedR_BinNum);
		#elif LedR_port == PORTE
			SET_BIT(PORTE_GPIODIR,LedR_BinNum);
		#elif LedR_port == PORTF
			SET_BIT(PORTF_GPIODIR,LedR_BinNum);
		#endif
		#if	  LedG_port == PORTA
			SET_BIT(PORTA_GPIODIR,LedG_BinNum);
		#elif LedG_port == PORTB
			SET_BIT(PORTB_GPIODIR,LedG_BinNum);
		#elif LedG_port == PORTC
			SET_BIT(PORTC_GPIODIR,LedG_BinNum);
		#elif LedG_port == PORTD
			SET_BIT(PORTD_GPIODIR,LedG_BinNum);
		#elif LedG_port == PORTE
			SET_BIT(PORTE_GPIODIR,LedG_BinNum);
		#elif LedG_port == PORTF
			SET_BIT(PORTF_GPIODIR,LedG_BinNum);
		#endif
		#if	  LedB_port == PORTA
			SET_BIT(PORTA_GPIODIR,LedB_BinNum);
		#elif LedB_port == PORTB
			SET_BIT(PORTB_GPIODIR,LedB_BinNum);
		#elif LedB_port == PORTC
			SET_BIT(PORTC_GPIODIR,LedB_BinNum);
		#elif LedB_port == PORTD
			SET_BIT(PORTD_GPIODIR,LedB_BinNum);
		#elif LedB_port == PORTE
			SET_BIT(PORTE_GPIODIR,LedB_BinNum);
		#elif LedB_port == PORTF
			SET_BIT(PORTF_GPIODIR,LedB_BinNum);
		#endif
	#endif
}
#if Led_type == Led
	void Led_On()
	{
		#if	  Led_port == PORTA
			SET_BIT(PORTA_GPIODATA,Led_BinNum);
		#elif Led_port == PORTB
			SET_BIT(PORTB_GPIODATA,Led_BinNum);
		#elif Led_port == PORTC
			SET_BIT(PORTC_GPIODATA,Led_BinNum);
		#elif Led_port == PORTD
			SET_BIT(PORTD_GPIODATA,Led_BinNum);
		#elif Led_port == PORTE
			SET_BIT(PORTE_GPIODATA,Led_BinNum);
		#elif Led_port == PORTF
			SET_BIT(PORTF_GPIODATA,Led_BinNum);
		#endif
	}
	void Led_Off()
	{
		#if	  Led_port == PORTA
			RESET_BIT(PORTA_GPIODATA,Led_BinNum);
		#elif Led_port == PORTB
			RESET_BIT(PORTB_GPIODATA,Led_BinNum);
		#elif Led_port == PORTC
			RESET_BIT(PORTC_GPIODATA,Led_BinNum);
		#elif Led_port == PORTD
			RESET_BIT(PORTD_GPIODATA,Led_BinNum);
		#elif Led_port == PORTE
			RESET_BIT(PORTE_GPIODATA,Led_BinNum);
		#elif Led_port == PORTF
			RESET_BIT(PORTF_GPIODATA,Led_BinNum);
		#endif
	}
	void Led_Toggle()
	{
		#if	  Led_port == PORTA
			TOGGLE_BIT(PORTA_GPIODATA,Led_BinNum);
		#elif Led_port == PORTB
			TOGGLE_BIT(PORTB_GPIODATA,Led_BinNum);
		#elif Led_port == PORTC
			TOGGLE_BIT(PORTC_GPIODATA,Led_BinNum);
		#elif Led_port == PORTD
			TOGGLE_BIT(PORTD_GPIODATA,Led_BinNum);
		#elif Led_port == PORTE
			TOGGLE_BIT(PORTE_GPIODATA,Led_BinNum);
		#elif Led_port == PORTF
			TOGGLE_BIT(PORTF_GPIODATA,Led_BinNum);
		#endif
	}
#elif Led_type == RGB_Led
	void LedR_On()
	{
		#if	 LedR_port == PORTA
			SET_BIT(PORTA_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTB
			SET_BIT(PORTB_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTC
			SET_BIT(PORTC_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTD
			SET_BIT(PORTD_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTE
			SET_BIT(PORTE_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTF
			SET_BIT(PORTF_GPIODATA,LedR_BinNum);
		#endif
	}
	void LedR_Off()
	{
		#if	 LedR_port == PORTA
			RESET_BIT(PORTA_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTB
			RESET_BIT(PORTB_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTC
			RESET_BIT(PORTC_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTD
			RESET_BIT(PORTD_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTE
			RESET_BIT(PORTE_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTF
			RESET_BIT(PORTF_GPIODATA,LedR_BinNum);
		#endif
	}
	void LedR_Toggle()
	{
		#if	 LedR_port == PORTA
			TOGGLE_BIT(PORTA_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTB
			TOGGLE_BIT(PORTB_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTC
			TOGGLE_BIT(PORTC_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTD
			TOGGLE_BIT(PORTD_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTE
			TOGGLE_BIT(PORTE_GPIODATA,LedR_BinNum);
		#elif LedR_port == PORTF
			TOGGLE_BIT(PORTF_GPIODATA,LedR_BinNum);
		#endif
	}
	void LedG_On()
	{
		#if	 LedG_port == PORTA
			SET_BIT(PORTA_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTB
			SET_BIT(PORTB_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTC
			SET_BIT(PORTC_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTD
			SET_BIT(PORTD_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTE
			SET_BIT(PORTE_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTF
			SET_BIT(PORTF_GPIODATA,LedG_BinNum);
		#endif
	}
	void LedG_Off()
	{
		#if	 LedG_port == PORTA
			RESET_BIT(PORTA_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTB
			RESET_BIT(PORTB_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTC
			RESET_BIT(PORTC_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTD
			RESET_BIT(PORTD_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTE
			RESET_BIT(PORTE_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTF
			RESET_BIT(PORTF_GPIODATA,LedG_BinNum);
		#endif
	}
	void LedG_Toggle()
	{
		#if	 LedG_port == PORTA
			TOGGLE_BIT(PORTA_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTB
			TOGGLE_BIT(PORTB_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTC
			TOGGLE_BIT(PORTC_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTD
			TOGGLE_BIT(PORTD_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTE
			TOGGLE_BIT(PORTE_GPIODATA,LedG_BinNum);
		#elif LedG_port == PORTF
			TOGGLE_BIT(PORTF_GPIODATA,LedG_BinNum);
		#endif
	}
	void LedB_On()
	{
		#if	 LedB_port == PORTA
			SET_BIT(PORTA_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTB
			SET_BIT(PORTB_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTC
			SET_BIT(PORTC_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTD
			SET_BIT(PORTD_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTE
			SET_BIT(PORTE_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTF
			SET_BIT(PORTF_GPIODATA,LedB_BinNum);
		#endif
	}
	void LedB_Off()
	{
		#if	 LedB_port == PORTA
			RESET_BIT(PORTA_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTB
			RESET_BIT(PORTB_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTC
			RESET_BIT(PORTC_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTD
			RESET_BIT(PORTD_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTE
			RESET_BIT(PORTE_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTF
			RESET_BIT(PORTF_GPIODATA,LedB_BinNum);
		#endif
	}
	void LedB_Toggle()
	{
		#if	 LedB_port == PORTA
			TOGGLE_BIT(PORTA_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTB
			TOGGLE_BIT(PORTB_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTC
			TOGGLE_BIT(PORTC_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTD
			TOGGLE_BIT(PORTD_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTE
			TOGGLE_BIT(PORTE_GPIODATA,LedB_BinNum);
		#elif LedB_port == PORTF
			TOGGLE_BIT(PORTF_GPIODATA,LedB_BinNum);
		#endif
	}
#endif
