/***********************************************************************************************************************
* DISCLAIMER
*
* Copyright (C) Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : wrp_adc.h
* Version      : v1.0 [08 Aug 2020]
* Device(s)    : ATtiny104-SSFR
* Tool-Chain   : GNU C99 (AVR_8_bit_GNU_Toolchain_3.6.2_1778) version 5.4.0 (avr)
* Description  : ADC wrapper layer header File
* Creation Date: 08/08/2020
***********************************************************************************************************************/


#ifndef WRP_EM_ADC_H_
#define WRP_EM_ADC_H_

/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/

#include <adc.h>


/******************************************************************************
Macro definitions
******************************************************************************/

#define EM_ADC_Start()                                AdcInit()                         /* AD Driver Start                  */
#define EM_ADC_Stop()                                 AdcStop()                          /* AD Driver Stop                   */


/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
uint8_t WRP_MeasuredVoltage();

#endif /* WRP_EM_ADC_H_ */