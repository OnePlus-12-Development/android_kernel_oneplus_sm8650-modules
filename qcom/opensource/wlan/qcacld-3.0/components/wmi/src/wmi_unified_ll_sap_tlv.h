/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include "qdf_status.h"
#include "wlan_ll_sap_public_structs.h"
#include "wmi_unified_param.h"

#ifdef WLAN_FEATURE_LL_LT_SAP
/**
 * audio_transport_switch_resp_tlv() - AUdio transport switch response tlv
 * @wmi_hdl: WMI handle
 * @req_type: Bearer switch request type
 * @status: Bearer switch status
 *
 * Return: QDF_STATUS
 */
QDF_STATUS
audio_transport_switch_resp_tlv(wmi_unified_t wmi_hdl,
				enum bearer_switch_req_type req_type,
				enum bearer_switch_status status);

/**
 * extract_audio_transport_switch_req_event_tlv() - AUdio transport switch
 * request tlv
 * @wmi_handle: WMI handle
 * @event: Event received from the FW
 * @len: Length of the event
 * @req_type: Bearer switch request type
 *
 * Return: QDF_STATUS
 */
QDF_STATUS
extract_audio_transport_switch_req_event_tlv(
				wmi_unified_t wmi_handle,
				uint8_t *event, uint32_t len,
				enum bearer_switch_req_type *req_type);

#endif
