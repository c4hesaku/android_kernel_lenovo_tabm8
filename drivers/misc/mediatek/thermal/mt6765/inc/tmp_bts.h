/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 MediaTek Inc.
 */

#ifndef __TMP_BTS_H__
#define __TMP_BTS_H__

/* chip dependent */

#define APPLY_PRECISE_NTC_TABLE
#define APPLY_AUXADC_CALI_DATA

#define AUX_IN0_NTC (0)
#define AUX_IN1_NTC (1)
/*Add for typec and pogo ntc*/
#define AUX_IN3_NTC (3)
#define AUX_IN4_NTC (4)

#define BTS_RAP_PULL_UP_R		390000 /* 390K, pull up resister */

#define BTS_TAP_OVER_CRITICAL_LOW	4397119 /* base on 100K NTC temp
						 * default value -40 deg
						 */

#define BTS_RAP_PULL_UP_VOLTAGE		1800 /* 1.8V ,pull up voltage */

#define BTS_RAP_NTC_TABLE		7 /* default is NCP15WF104F03RC(100K) */

#define BTS_RAP_ADC_CHANNEL		AUX_IN0_NTC /* default is 0 */

#define BTSMDPA_RAP_PULL_UP_R		390000 /* 390K, pull up resister */

#define BTSMDPA_TAP_OVER_CRITICAL_LOW	4397119 /* base on 100K NTC temp
						 * default value -40 deg
						 */

#define BTSMDPA_RAP_PULL_UP_VOLTAGE	1800 /* 1.8V ,pull up voltage */

#define BTSMDPA_RAP_NTC_TABLE		7 /* default is NCP15WF104F03RC(100K) */

#define BTSMDPA_RAP_ADC_CHANNEL		AUX_IN1_NTC /* default is 1 */

/*Add for POGO NTC--->if not define CONFIG_MEDIATEK_MT6577_AUXADC*/
#define BTS_POGO_RAP_PULL_UP_R	100000	/*100k PULL UP resister*/
#define	BTS_POGO_TAP_OVER_CRITICAL_LOW	4397119	/*BASE ON 100K NTC TEMP DEFAULT VALUE - 40 DEG*/
#define	BTS_POGO_RAP_PULL_UP_VOLTAGE		1800	/*1.8v PULL UP VOLTAGE*/
#define	BTS_POGO_RAP_NTC_TABLE		7	/*default is ncp 15wf104f03rc 100k*/
#define BTS_POGO_RAP_ADC_CHANNEL		AUX_IN3_NTC

/*Add for TYPEC NTC--->if not define CONFIG_MEDIATEK_MT6577_AUXADC*/
#define BTS_TYPEC_RAP_PULL_UP_R	100000	/*100k PULL UP resister*/
#define	BTS_TYPEC_TAP_OVER_CRITICAL_LOW	4397119	/*BASE ON 100K NTC TEMP DEFAULT VALUE - 40 DEG*/
#define	BTS_TYPEC_RAP_PULL_UP_VOLTAGE		1800	/*1.8v PULL UP VOLTAGE*/
#define	BTS_TYPEC_RAP_NTC_TABLE		7	/*default is ncp 15wf104f03rc 100k*/
#define BTS_TYPEC_RAP_ADC_CHANNEL		AUX_IN4_NTC

extern int IMM_GetOneChannelValue(int dwChannel, int data[4], int *rawdata);
extern int IMM_IsAdcInitReady(void);

#endif	/* __TMP_BTS_H__ */
