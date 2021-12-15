/***************************************************************************//**
 * @file
 * @brief Network - DNS Client Request Module
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.
 * The software is governed by the sections of the MSLA applicable to Micrium
 * Software.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  _DNS_CLIENT_REQ_PRIV_H_
#define  _DNS_CLIENT_REQ_PRIV_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                            INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  "dns_client_priv.h"

#include  "../../include/dns_client.h"

/********************************************************************************************************
 ********************************************************************************************************
 *                                              DATA TYPES
 ********************************************************************************************************
 *******************************************************************************************************/

typedef  enum c_req_type {
  DNSc_REQ_TYPE_IPv4,
  DNSc_REQ_TYPE_IPv6,
} DNSc_REQ_TYPE;

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

void DNScReq_ServerSet(DNSc_SERVER_ADDR_TYPE addr_type,
                       NET_IP_ADDR_OBJ       *p_addr);

void DNScReq_ServerGet(NET_IP_ADDR_OBJ *p_addr,
                       RTOS_ERR        *p_err);

NET_SOCK_ID DNScReq_Init(NET_IP_ADDR_OBJ *p_server_addr,
                         NET_PORT_NBR    server_port,
                         RTOS_ERR        *p_err);

NET_IF_NBR DNSc_ReqIF_Sel(NET_IF_NBR  if_nbr_last,
                          NET_SOCK_ID sock_id,
                          RTOS_ERR    *p_err);

void DNSc_ReqClose(NET_SOCK_ID sock_id);

CPU_INT16U DNScReq_TxReq(CPU_CHAR      *p_host_name,
                         NET_SOCK_ID   sock_id,
                         CPU_INT16U    query_id,
                         DNSc_REQ_TYPE req_type,
                         RTOS_ERR      *p_err);

DNSc_STATUS DNScReq_RxResp(DNSc_HOST_OBJ *p_host,
                           NET_SOCK_ID   sock_id,
                           CPU_INT16U    query_id,
                           CPU_INT16U    timeout_ms,
                           RTOS_ERR      *p_err);

/********************************************************************************************************
 ********************************************************************************************************
 *                                             MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif // _DNS_CLIENT_REQ_PRIV_H_
