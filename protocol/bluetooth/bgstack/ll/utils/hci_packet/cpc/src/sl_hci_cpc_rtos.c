/***************************************************************************//**
 * @brief RTOS interface for Bluetooth HCI-CPC driver
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

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <cmsis_os2.h>
#include "sl_status.h"
#include "em_core.h"
#include "sl_cmsis_os2_common.h"
#include "sl_btctrl_hci_cpc_rtos.h"
#include "sl_btctrl_hci_packet.h"

#define SL_BTCTRL_RTOS_HCI_TASK_PRIORITY osPriorityRealtime3
#define SL_BTCTRL_RTOS_HCI_TASK_STACK_SIZE 1000

//Rx semaphore
static osSemaphoreId_t hci_rx_semaphore;

//Bluetooth HCI thread
static void hci_cpc_thread(void *p_arg);
static osThreadId_t tid_thread_hci;
__ALIGNED(8) static uint8_t thread_hci_stk[
  SL_BTCTRL_RTOS_HCI_TASK_STACK_SIZE & 0xFFFFFFF8u];
__ALIGNED(4) static uint8_t thread_hci_cb[osThreadCbSize];
static const osThreadAttr_t thread_hci_attr = {
  .name = "Bluetooth HCI CPC",
  .stack_mem = thread_hci_stk,
  .stack_size = sizeof(thread_hci_stk),
  .cb_mem = thread_hci_cb,
  .cb_size = osThreadCbSize,
  .priority = (osPriority_t) SL_BTCTRL_RTOS_HCI_TASK_PRIORITY
};

uint8_t sl_btctrl_hci_cpc_get_stack_space(uint32_t *stack_space)
{
  *stack_space = osThreadGetStackSpace(tid_thread_hci);
  return 0;
}

void sl_btctrl_hci_cpc_rtos_deinit(void)
{
  (void) osSemaphoreDelete(hci_rx_semaphore);
  hci_rx_semaphore = NULL;

  (void) osThreadTerminate(tid_thread_hci);
  tid_thread_hci = NULL;
}

sl_status_t sl_btctrl_hci_cpc_rtos_init(void)
{
  if (hci_rx_semaphore == NULL) {
    hci_rx_semaphore = osSemaphoreNew(1, 0, NULL);
  }
  if (hci_rx_semaphore == NULL) {
    goto failed;
  }

  // Create thread for Linklayer
  if (tid_thread_hci == NULL) {
    tid_thread_hci = osThreadNew(hci_cpc_thread,
                                 NULL,
                                 &thread_hci_attr);
  }
  if (tid_thread_hci == NULL) {
    goto failed;
  }

  return SL_STATUS_OK;
  failed:
  sl_btctrl_hci_cpc_rtos_deinit();
  return SL_STATUS_FAIL;
}

void sl_btctrl_hci_cpc_rx(uint8_t endpoint_id, void * arg)
{
  (void)endpoint_id;
  (void)arg;

  osSemaphoreRelease(hci_rx_semaphore);
}

static void hci_cpc_thread(void *p_arg)
{
  (void)p_arg;
  while (true) {
    osSemaphoreAcquire(hci_rx_semaphore, osWaitForever);
    sl_btctrl_hci_packet_step();
  }
}
