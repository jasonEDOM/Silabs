/**************************************************************************//**
 * @file
 * @brief EFM32PG28 SCRATCHPAD register and bit field definitions
 ******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories, Inc. www.silabs.com</b>
 ******************************************************************************
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
 *****************************************************************************/
#ifndef EFM32PG28_SCRATCHPAD_H
#define EFM32PG28_SCRATCHPAD_H
#define SCRATCHPAD_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFM32PG28_SCRATCHPAD SCRATCHPAD
 * @{
 * @brief EFM32PG28 SCRATCHPAD Register Declaration.
 *****************************************************************************/

/** SCRATCHPAD Register Declaration. */
typedef struct {
  __IOM uint32_t SREG0;                         /**< Scratchpad Register 0                              */
  __IOM uint32_t SREG1;                         /**< Scratchpad Register 1                              */
  uint32_t       RESERVED0[1022U];              /**< Reserved for future use                            */
  __IOM uint32_t SREG0_SET;                     /**< Scratchpad Register 0                              */
  __IOM uint32_t SREG1_SET;                     /**< Scratchpad Register 1                              */
  uint32_t       RESERVED1[1022U];              /**< Reserved for future use                            */
  __IOM uint32_t SREG0_CLR;                     /**< Scratchpad Register 0                              */
  __IOM uint32_t SREG1_CLR;                     /**< Scratchpad Register 1                              */
  uint32_t       RESERVED2[1022U];              /**< Reserved for future use                            */
  __IOM uint32_t SREG0_TGL;                     /**< Scratchpad Register 0                              */
  __IOM uint32_t SREG1_TGL;                     /**< Scratchpad Register 1                              */
} SCRATCHPAD_TypeDef;
/** @} End of group EFM32PG28_SCRATCHPAD */

/**************************************************************************//**
 * @addtogroup EFM32PG28_SCRATCHPAD
 * @{
 * @defgroup EFM32PG28_SCRATCHPAD_BitFields SCRATCHPAD Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for SCRATCHPAD SREG0 */
#define _SCRATCHPAD_SREG0_RESETVALUE         0x00000000UL                               /**< Default value for SCRATCHPAD_SREG0          */
#define _SCRATCHPAD_SREG0_MASK               0xFFFFFFFFUL                               /**< Mask for SCRATCHPAD_SREG0                   */
#define _SCRATCHPAD_SREG0_SCRATCH_SHIFT      0                                          /**< Shift value for SCRATCHPAD_SCRATCH          */
#define _SCRATCHPAD_SREG0_SCRATCH_MASK       0xFFFFFFFFUL                               /**< Bit mask for SCRATCHPAD_SCRATCH             */
#define _SCRATCHPAD_SREG0_SCRATCH_DEFAULT    0x00000000UL                               /**< Mode DEFAULT for SCRATCHPAD_SREG0           */
#define SCRATCHPAD_SREG0_SCRATCH_DEFAULT     (_SCRATCHPAD_SREG0_SCRATCH_DEFAULT << 0)   /**< Shifted mode DEFAULT for SCRATCHPAD_SREG0   */

/* Bit fields for SCRATCHPAD SREG1 */
#define _SCRATCHPAD_SREG1_RESETVALUE         0x00000000UL                               /**< Default value for SCRATCHPAD_SREG1          */
#define _SCRATCHPAD_SREG1_MASK               0xFFFFFFFFUL                               /**< Mask for SCRATCHPAD_SREG1                   */
#define _SCRATCHPAD_SREG1_SCRATCH_SHIFT      0                                          /**< Shift value for SCRATCHPAD_SCRATCH          */
#define _SCRATCHPAD_SREG1_SCRATCH_MASK       0xFFFFFFFFUL                               /**< Bit mask for SCRATCHPAD_SCRATCH             */
#define _SCRATCHPAD_SREG1_SCRATCH_DEFAULT    0x00000000UL                               /**< Mode DEFAULT for SCRATCHPAD_SREG1           */
#define SCRATCHPAD_SREG1_SCRATCH_DEFAULT     (_SCRATCHPAD_SREG1_SCRATCH_DEFAULT << 0)   /**< Shifted mode DEFAULT for SCRATCHPAD_SREG1   */

/** @} End of group EFM32PG28_SCRATCHPAD_BitFields */
/** @} End of group EFM32PG28_SCRATCHPAD */
/** @} End of group Parts */

#endif // EFM32PG28_SCRATCHPAD_H
