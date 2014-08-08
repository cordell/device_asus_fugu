/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#define BTM_DEF_LOCAL_NAME "Fugu"
#define BTA_DM_COD {0x20, BTM_COD_MAJOR_AUDIO, BTM_COD_MINOR_SET_TOP_BOX}

// Force connection interval to 13.75ms
#define BTM_BLE_CONN_INT_MIN_DEF 11 /* 13.75ms = 11 * 1.25 */
#define BTM_BLE_CONN_INT_MAX_DEF BTM_BLE_CONN_INT_MIN_DEF

// Allow better battery life
#define BTM_BLE_CONN_SLAVE_LATENCY_DEF 75

// Detect disconnects faster
#define BTM_BLE_CONN_TIMEOUT_DEF 300

// Disable compiling code in Bluedroid for profiles we don't support
#define BTA_PAN_INCLUDED FALSE
#define A2D_INCLUDED FALSE
#define BNEP_INCLUDED FALSE
#define AVDT_INCLUDED FALSE
#define PAN_INCLUDED FALSE
#define AVCT_INCLUDED FALSE
#define AVRC_INCLUDED FALSE

/* We will support a remote +  4 game controllers.  To be able to
 * allocate sufficient bandwidth for all devices we will restrict the
 * Game Controllers to a sniff interval of 13.75ms.
 */
#define BTA_DM_PM_SNIFF4_MAX     22
#define BTA_DM_PM_SNIFF4_MIN     22
#define BTA_DM_PM_SNIFF4_ATTEMPT 1
#define BTA_DM_PM_SNIFF4_TIMEOUT 0

#define BTA_DM_PM_SNIFF_HH_OPEN_IDX BTA_DM_PM_SNIFF4
#define BTA_DM_PM_HH_OPEN_DELAY 0

#define BTA_DM_PM_SNIFF_HH_ACTIVE_IDX BTA_DM_PM_SNIFF4
#define BTA_DM_PM_HH_ACTIVE_DELAY 0

#define BTA_DM_PM_SNIFF_HH_IDLE_IDX BTA_DM_PM_SNIFF4
#define BTA_DM_PM_HH_IDLE_DELAY 0

#endif
