/***************************************************************************//**
 * @file
 * @brief Segment LCD Pin map for the EFR32FG23 Dev Kit Board (BRD2600A)
 *******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/
 
#ifndef SL_SEGMENTLCD_PIN_CONFIG_H
#define SL_SEGMENTLCD_PIN_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

// Map LCD segment S0 to LCD peripheral LCD_SEG0 etc
// Seg0 pin
#define SL_SEGMENT_LCD_SEG_S00 0
// Seg1 pin
#define SL_SEGMENT_LCD_SEG_S01 1
// Seg2 pin
#define SL_SEGMENT_LCD_SEG_S02 4
// Seg3 pin
#define SL_SEGMENT_LCD_SEG_S03 5
// Seg4 pin
#define SL_SEGMENT_LCD_SEG_S04 6
// Seg5 pin
#define SL_SEGMENT_LCD_SEG_S05 7
// Seg6 pin
#define SL_SEGMENT_LCD_SEG_S06 18
// Seg7 pin
#define SL_SEGMENT_LCD_SEG_S07 19
// Seg8 pin
#define SL_SEGMENT_LCD_SEG_S08 8
// Seg9 pin
#define SL_SEGMENT_LCD_SEG_S09 10

// Map LCD COM0 to LCD peripheral LCD_COM0 etc
// Com0 pin
#define SL_SEGMENT_LCD_COM_C00 0
// Com1 pin
#define SL_SEGMENT_LCD_COM_C01 1
// Com2 pin
#define SL_SEGMENT_LCD_COM_C02 2
// Com3 pin
#define SL_SEGMENT_LCD_COM_C03 3

#ifdef __cplusplus
}
#endif

#endif
