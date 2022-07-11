/*
 *******************************************************************************
 * Copyright (c) 2014, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef _PERIPHERALPINS_H
#define _PERIPHERALPINS_H

#include "pinmap.h"
#ifdef STM32F1xx
  #include "PinAF_STM32F1.h"
#endif

//*** ADC ***
extern const PinMap PinMap_ADC[];

//*** DAC ***
extern const PinMap PinMap_DAC[];

//*** I2C ***
extern const PinMap PinMap_I2C_SDA[];
extern const PinMap PinMap_I2C_SCL[];

//*** I3C ***
extern const PinMap PinMap_I3C_SDA[];
extern const PinMap PinMap_I3C_SCL[];

//*** TIM ***
/* For backward compatibility */
#define PinMap_PWM PinMap_TIM
extern const PinMap PinMap_TIM[];

//*** SERIAL ***
extern const PinMap PinMap_UART_TX[];
extern const PinMap PinMap_UART_RX[];
extern const PinMap PinMap_UART_RTS[];
extern const PinMap PinMap_UART_CTS[];

//*** SPI ***
extern const PinMap PinMap_SPI_MOSI[];
extern const PinMap PinMap_SPI_MISO[];
extern const PinMap PinMap_SPI_SCLK[];
extern const PinMap PinMap_SPI_SSEL[];

//*** CAN ***
extern const PinMap PinMap_CAN_RD[];
extern const PinMap PinMap_CAN_TD[];

//*** ETHERNET ***
extern const PinMap PinMap_Ethernet[];

//*** QUADSPI ***
extern const PinMap PinMap_QUADSPI_DATA0[];
extern const PinMap PinMap_QUADSPI_DATA1[];
extern const PinMap PinMap_QUADSPI_DATA2[];
extern const PinMap PinMap_QUADSPI_DATA3[];
extern const PinMap PinMap_QUADSPI_SCLK[];
extern const PinMap PinMap_QUADSPI_SSEL[];

//*** OCTOSPI ***
extern const PinMap PinMap_OCTOSPI_DATA0[];
extern const PinMap PinMap_OCTOSPI_DATA1[];
extern const PinMap PinMap_OCTOSPI_DATA2[];
extern const PinMap PinMap_OCTOSPI_DATA3[];
extern const PinMap PinMap_OCTOSPI_DATA4[];
extern const PinMap PinMap_OCTOSPI_DATA5[];
extern const PinMap PinMap_OCTOSPI_DATA6[];
extern const PinMap PinMap_OCTOSPI_DATA7[];
extern const PinMap PinMap_OCTOSPI_SCLK[];
extern const PinMap PinMap_OCTOSPI_SSEL[];

//*** USB ***
extern const PinMap PinMap_USB[];
extern const PinMap PinMap_USB_OTG_FS[];
extern const PinMap PinMap_USB_OTG_HS[];

//*** SD ***
extern const PinMap PinMap_SD_CMD[];
extern const PinMap PinMap_SD_CK[];
extern const PinMap PinMap_SD_DATA0[];
extern const PinMap PinMap_SD_DATA1[];
extern const PinMap PinMap_SD_DATA2[];
extern const PinMap PinMap_SD_DATA3[];
extern const PinMap PinMap_SD_DATA4[];
extern const PinMap PinMap_SD_DATA5[];
extern const PinMap PinMap_SD_DATA6[];
extern const PinMap PinMap_SD_DATA7[];
extern const PinMap PinMap_SD_CKIN[];
extern const PinMap PinMap_SD_CDIR[];
extern const PinMap PinMap_SD_D0DIR[];
extern const PinMap PinMap_SD_D123DIR[];

#endif

