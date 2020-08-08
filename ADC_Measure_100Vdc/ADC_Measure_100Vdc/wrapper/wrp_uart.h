/***********************************************************************************************************************
* DISCLAIMER
*
* Copyright (C) Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : wrp_uart.h
* Version      : v1.0 [08 Aug 2020]
* Device(s)    : ATtiny104-SSFR
* Tool-Chain   : GNU C99 (AVR_8_bit_GNU_Toolchain_3.6.2_1778) version 5.4.0 (avr)
* Description  : Uart wrapper layer header File
* Creation Date: 08/08/2020
***********************************************************************************************************************/




#ifndef WRP_UART_H_
#define WRP_UART_H_


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/

#include <uart.h>


/******************************************************************************
Macro definitions
******************************************************************************/


#define     WRP_UART_Start()									UartStart()
#define     WRP_UART_Stop()										UartStop()
#define     WRP_UART_SendData(data)								UartSendData(data)




#endif /* WRP_UART_H_ */