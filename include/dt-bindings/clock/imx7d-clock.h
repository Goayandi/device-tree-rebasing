/*
 * Copyright (C) 2014-2015 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __DT_BINDINGS_CLOCK_IMX7D_H
#define __DT_BINDINGS_CLOCK_IMX7D_H

#define IMX7D_OSC_24M_CLK		0
#define IMX7D_PLL_ARM_MAIN		1
#define IMX7D_PLL_ARM_MAIN_CLK		2
#define IMX7D_PLL_ARM_MAIN_SRC		3
#define IMX7D_PLL_ARM_MAIN_BYPASS	4
#define IMX7D_PLL_SYS_MAIN		5
#define IMX7D_PLL_SYS_MAIN_CLK		6
#define IMX7D_PLL_SYS_MAIN_SRC		7
#define IMX7D_PLL_SYS_MAIN_BYPASS	8
#define IMX7D_PLL_SYS_MAIN_480M		9
#define IMX7D_PLL_SYS_MAIN_240M		10
#define IMX7D_PLL_SYS_MAIN_120M		11
#define IMX7D_PLL_SYS_MAIN_480M_CLK	12
#define IMX7D_PLL_SYS_MAIN_240M_CLK	13
#define IMX7D_PLL_SYS_MAIN_120M_CLK	14
#define IMX7D_PLL_SYS_PFD0_392M_CLK	15
#define IMX7D_PLL_SYS_PFD0_196M		16
#define IMX7D_PLL_SYS_PFD0_196M_CLK	17
#define IMX7D_PLL_SYS_PFD1_332M_CLK	18
#define IMX7D_PLL_SYS_PFD1_166M		19
#define IMX7D_PLL_SYS_PFD1_166M_CLK	20
#define IMX7D_PLL_SYS_PFD2_270M_CLK	21
#define IMX7D_PLL_SYS_PFD2_135M		22
#define IMX7D_PLL_SYS_PFD2_135M_CLK	23
#define IMX7D_PLL_SYS_PFD3_CLK		24
#define IMX7D_PLL_SYS_PFD4_CLK		25
#define IMX7D_PLL_SYS_PFD5_CLK		26
#define IMX7D_PLL_SYS_PFD6_CLK		27
#define IMX7D_PLL_SYS_PFD7_CLK		28
#define IMX7D_PLL_ENET_MAIN		29
#define IMX7D_PLL_ENET_MAIN_CLK		30
#define IMX7D_PLL_ENET_MAIN_SRC		31
#define IMX7D_PLL_ENET_MAIN_BYPASS	32
#define IMX7D_PLL_ENET_MAIN_500M	33
#define IMX7D_PLL_ENET_MAIN_250M	34
#define IMX7D_PLL_ENET_MAIN_125M	35
#define IMX7D_PLL_ENET_MAIN_100M	36
#define IMX7D_PLL_ENET_MAIN_50M		37
#define IMX7D_PLL_ENET_MAIN_40M		38
#define IMX7D_PLL_ENET_MAIN_25M		39
#define IMX7D_PLL_ENET_MAIN_500M_CLK	40
#define IMX7D_PLL_ENET_MAIN_250M_CLK	41
#define IMX7D_PLL_ENET_MAIN_125M_CLK	42
#define IMX7D_PLL_ENET_MAIN_100M_CLK	43
#define IMX7D_PLL_ENET_MAIN_50M_CLK	44
#define IMX7D_PLL_ENET_MAIN_40M_CLK	45
#define IMX7D_PLL_ENET_MAIN_25M_CLK	46
#define IMX7D_PLL_DRAM_MAIN		47
#define IMX7D_PLL_DRAM_MAIN_CLK		48
#define IMX7D_PLL_DRAM_MAIN_SRC		49
#define IMX7D_PLL_DRAM_MAIN_BYPASS	50
#define IMX7D_PLL_DRAM_MAIN_533M	51
#define IMX7D_PLL_DRAM_MAIN_533M_CLK	52
#define IMX7D_PLL_AUDIO_MAIN		53
#define IMX7D_PLL_AUDIO_MAIN_CLK	54
#define IMX7D_PLL_AUDIO_MAIN_SRC	55
#define IMX7D_PLL_AUDIO_MAIN_BYPASS	56
#define IMX7D_PLL_VIDEO_MAIN_CLK	57
#define IMX7D_PLL_VIDEO_MAIN		58
#define IMX7D_PLL_VIDEO_MAIN_SRC	59
#define IMX7D_PLL_VIDEO_MAIN_BYPASS	60
#define IMX7D_USB_MAIN_480M_CLK		61
#define IMX7D_ARM_A7_ROOT_CLK		62
#define IMX7D_ARM_A7_ROOT_SRC		63
#define IMX7D_ARM_A7_ROOT_CG		64
#define IMX7D_ARM_A7_ROOT_DIV		65
#define IMX7D_ARM_M4_ROOT_CLK		66
#define IMX7D_ARM_M4_ROOT_SRC		67
#define IMX7D_ARM_M4_ROOT_CG		68
#define IMX7D_ARM_M4_ROOT_DIV		69
#define IMX7D_ARM_M0_ROOT_CLK		70
#define IMX7D_ARM_M0_ROOT_SRC		71
#define IMX7D_ARM_M0_ROOT_CG		72
#define IMX7D_ARM_M0_ROOT_DIV		73
#define IMX7D_MAIN_AXI_ROOT_CLK		74
#define IMX7D_MAIN_AXI_ROOT_SRC		75
#define IMX7D_MAIN_AXI_ROOT_CG		76
#define IMX7D_MAIN_AXI_ROOT_DIV		77
#define IMX7D_DISP_AXI_ROOT_CLK		78
#define IMX7D_DISP_AXI_ROOT_SRC		79
#define IMX7D_DISP_AXI_ROOT_CG		80
#define IMX7D_DISP_AXI_ROOT_DIV		81
#define IMX7D_ENET_AXI_ROOT_CLK		82
#define IMX7D_ENET_AXI_ROOT_SRC		83
#define IMX7D_ENET_AXI_ROOT_CG		84
#define IMX7D_ENET_AXI_ROOT_DIV		85
#define IMX7D_NAND_USDHC_BUS_ROOT_CLK	86
#define IMX7D_NAND_USDHC_BUS_ROOT_SRC	87
#define IMX7D_NAND_USDHC_BUS_ROOT_CG	88
#define IMX7D_NAND_USDHC_BUS_ROOT_DIV	89
#define IMX7D_AHB_CHANNEL_ROOT_CLK	90
#define IMX7D_AHB_CHANNEL_ROOT_SRC	91
#define IMX7D_AHB_CHANNEL_ROOT_CG	92
#define IMX7D_AHB_CHANNEL_ROOT_DIV	93
#define IMX7D_DRAM_PHYM_ROOT_CLK	94
#define IMX7D_DRAM_PHYM_ROOT_SRC	95
#define IMX7D_DRAM_PHYM_ROOT_CG		96
#define IMX7D_DRAM_PHYM_ROOT_DIV	97
#define IMX7D_DRAM_ROOT_CLK		98
#define IMX7D_DRAM_ROOT_SRC		99
#define IMX7D_DRAM_ROOT_CG		100
#define IMX7D_DRAM_ROOT_DIV		101
#define IMX7D_DRAM_PHYM_ALT_ROOT_CLK	102
#define IMX7D_DRAM_PHYM_ALT_ROOT_SRC	103
#define IMX7D_DRAM_PHYM_ALT_ROOT_CG	104
#define IMX7D_DRAM_PHYM_ALT_ROOT_DIV	105
#define IMX7D_DRAM_ALT_ROOT_CLK		106
#define IMX7D_DRAM_ALT_ROOT_SRC		107
#define IMX7D_DRAM_ALT_ROOT_CG		108
#define IMX7D_DRAM_ALT_ROOT_DIV		109
#define IMX7D_USB_HSIC_ROOT_CLK		110
#define IMX7D_USB_HSIC_ROOT_SRC		111
#define IMX7D_USB_HSIC_ROOT_CG		112
#define IMX7D_USB_HSIC_ROOT_DIV		113
#define IMX7D_PCIE_CTRL_ROOT_CLK	114
#define IMX7D_PCIE_CTRL_ROOT_SRC	115
#define IMX7D_PCIE_CTRL_ROOT_CG		116
#define IMX7D_PCIE_CTRL_ROOT_DIV	117
#define IMX7D_PCIE_PHY_ROOT_CLK		118
#define IMX7D_PCIE_PHY_ROOT_SRC		119
#define IMX7D_PCIE_PHY_ROOT_CG		120
#define IMX7D_PCIE_PHY_ROOT_DIV		121
#define IMX7D_EPDC_PIXEL_ROOT_CLK	122
#define IMX7D_EPDC_PIXEL_ROOT_SRC	123
#define IMX7D_EPDC_PIXEL_ROOT_CG	124
#define IMX7D_EPDC_PIXEL_ROOT_DIV	125
#define IMX7D_LCDIF_PIXEL_ROOT_CLK	126
#define IMX7D_LCDIF_PIXEL_ROOT_SRC	127
#define IMX7D_LCDIF_PIXEL_ROOT_CG	128
#define IMX7D_LCDIF_PIXEL_ROOT_DIV	129
#define IMX7D_MIPI_DSI_ROOT_CLK		130
#define IMX7D_MIPI_DSI_ROOT_SRC		131
#define IMX7D_MIPI_DSI_ROOT_CG		132
#define IMX7D_MIPI_DSI_ROOT_DIV		133
#define IMX7D_MIPI_CSI_ROOT_CLK		134
#define IMX7D_MIPI_CSI_ROOT_SRC		135
#define IMX7D_MIPI_CSI_ROOT_CG		136
#define IMX7D_MIPI_CSI_ROOT_DIV		137
#define IMX7D_MIPI_DPHY_ROOT_CLK	138
#define IMX7D_MIPI_DPHY_ROOT_SRC	139
#define IMX7D_MIPI_DPHY_ROOT_CG		140
#define IMX7D_MIPI_DPHY_ROOT_DIV	141
#define IMX7D_SAI1_ROOT_CLK		142
#define IMX7D_SAI1_ROOT_SRC		143
#define IMX7D_SAI1_ROOT_CG		144
#define IMX7D_SAI1_ROOT_DIV		145
#define IMX7D_SAI2_ROOT_CLK		146
#define IMX7D_SAI2_ROOT_SRC		147
#define IMX7D_SAI2_ROOT_CG		148
#define IMX7D_SAI2_ROOT_DIV		149
#define IMX7D_SAI3_ROOT_CLK		150
#define IMX7D_SAI3_ROOT_SRC		151
#define IMX7D_SAI3_ROOT_CG		152
#define IMX7D_SAI3_ROOT_DIV		153
#define IMX7D_SPDIF_ROOT_CLK		154
#define IMX7D_SPDIF_ROOT_SRC		155
#define IMX7D_SPDIF_ROOT_CG		156
#define IMX7D_SPDIF_ROOT_DIV		157
#define IMX7D_ENET1_REF_ROOT_CLK	158
#define IMX7D_ENET1_REF_ROOT_SRC	159
#define IMX7D_ENET1_REF_ROOT_CG		160
#define IMX7D_ENET1_REF_ROOT_DIV	161
#define IMX7D_ENET1_TIME_ROOT_CLK	162
#define IMX7D_ENET1_TIME_ROOT_SRC	163
#define IMX7D_ENET1_TIME_ROOT_CG	164
#define IMX7D_ENET1_TIME_ROOT_DIV	165
#define IMX7D_ENET2_REF_ROOT_CLK	166
#define IMX7D_ENET2_REF_ROOT_SRC	167
#define IMX7D_ENET2_REF_ROOT_CG		168
#define IMX7D_ENET2_REF_ROOT_DIV	169
#define IMX7D_ENET2_TIME_ROOT_CLK	170
#define IMX7D_ENET2_TIME_ROOT_SRC	171
#define IMX7D_ENET2_TIME_ROOT_CG	172
#define IMX7D_ENET2_TIME_ROOT_DIV	173
#define IMX7D_ENET_PHY_REF_ROOT_CLK	174
#define IMX7D_ENET_PHY_REF_ROOT_SRC	175
#define IMX7D_ENET_PHY_REF_ROOT_CG	176
#define IMX7D_ENET_PHY_REF_ROOT_DIV	177
#define IMX7D_EIM_ROOT_CLK		178
#define IMX7D_EIM_ROOT_SRC		179
#define IMX7D_EIM_ROOT_CG		180
#define IMX7D_EIM_ROOT_DIV		181
#define IMX7D_NAND_ROOT_CLK		182
#define IMX7D_NAND_ROOT_SRC		183
#define IMX7D_NAND_ROOT_CG		184
#define IMX7D_NAND_ROOT_DIV		185
#define IMX7D_QSPI_ROOT_CLK		186
#define IMX7D_QSPI_ROOT_SRC		187
#define IMX7D_QSPI_ROOT_CG		188
#define IMX7D_QSPI_ROOT_DIV		189
#define IMX7D_USDHC1_ROOT_CLK		190
#define IMX7D_USDHC1_ROOT_SRC		191
#define IMX7D_USDHC1_ROOT_CG		192
#define IMX7D_USDHC1_ROOT_DIV		193
#define IMX7D_USDHC2_ROOT_CLK		194
#define IMX7D_USDHC2_ROOT_SRC		195
#define IMX7D_USDHC2_ROOT_CG		196
#define IMX7D_USDHC2_ROOT_DIV		197
#define IMX7D_USDHC3_ROOT_CLK		198
#define IMX7D_USDHC3_ROOT_SRC		199
#define IMX7D_USDHC3_ROOT_CG		200
#define IMX7D_USDHC3_ROOT_DIV		201
#define IMX7D_CAN1_ROOT_CLK		202
#define IMX7D_CAN1_ROOT_SRC		203
#define IMX7D_CAN1_ROOT_CG		204
#define IMX7D_CAN1_ROOT_DIV		205
#define IMX7D_CAN2_ROOT_CLK		206
#define IMX7D_CAN2_ROOT_SRC		207
#define IMX7D_CAN2_ROOT_CG		208
#define IMX7D_CAN2_ROOT_DIV		209
#define IMX7D_I2C1_ROOT_CLK		210
#define IMX7D_I2C1_ROOT_SRC		211
#define IMX7D_I2C1_ROOT_CG		212
#define IMX7D_I2C1_ROOT_DIV		213
#define IMX7D_I2C2_ROOT_CLK		214
#define IMX7D_I2C2_ROOT_SRC		215
#define IMX7D_I2C2_ROOT_CG		216
#define IMX7D_I2C2_ROOT_DIV		217
#define IMX7D_I2C3_ROOT_CLK		218
#define IMX7D_I2C3_ROOT_SRC		219
#define IMX7D_I2C3_ROOT_CG		220
#define IMX7D_I2C3_ROOT_DIV		221
#define IMX7D_I2C4_ROOT_CLK		222
#define IMX7D_I2C4_ROOT_SRC		223
#define IMX7D_I2C4_ROOT_CG		224
#define IMX7D_I2C4_ROOT_DIV		225
#define IMX7D_UART1_ROOT_CLK		226
#define IMX7D_UART1_ROOT_SRC		227
#define IMX7D_UART1_ROOT_CG		228
#define IMX7D_UART1_ROOT_DIV		229
#define IMX7D_UART2_ROOT_CLK		230
#define IMX7D_UART2_ROOT_SRC		231
#define IMX7D_UART2_ROOT_CG		232
#define IMX7D_UART2_ROOT_DIV		233
#define IMX7D_UART3_ROOT_CLK		234
#define IMX7D_UART3_ROOT_SRC		235
#define IMX7D_UART3_ROOT_CG		236
#define IMX7D_UART3_ROOT_DIV		237
#define IMX7D_UART4_ROOT_CLK		238
#define IMX7D_UART4_ROOT_SRC		239
#define IMX7D_UART4_ROOT_CG		240
#define IMX7D_UART4_ROOT_DIV		241
#define IMX7D_UART5_ROOT_CLK		242
#define IMX7D_UART5_ROOT_SRC		243
#define IMX7D_UART5_ROOT_CG		244
#define IMX7D_UART5_ROOT_DIV		245
#define IMX7D_UART6_ROOT_CLK		246
#define IMX7D_UART6_ROOT_SRC		247
#define IMX7D_UART6_ROOT_CG		248
#define IMX7D_UART6_ROOT_DIV		249
#define IMX7D_UART7_ROOT_CLK		250
#define IMX7D_UART7_ROOT_SRC		251
#define IMX7D_UART7_ROOT_CG		252
#define IMX7D_UART7_ROOT_DIV		253
#define IMX7D_ECSPI1_ROOT_CLK		254
#define IMX7D_ECSPI1_ROOT_SRC		255
#define IMX7D_ECSPI1_ROOT_CG		256
#define IMX7D_ECSPI1_ROOT_DIV		257
#define IMX7D_ECSPI2_ROOT_CLK		258
#define IMX7D_ECSPI2_ROOT_SRC		259
#define IMX7D_ECSPI2_ROOT_CG		260
#define IMX7D_ECSPI2_ROOT_DIV		261
#define IMX7D_ECSPI3_ROOT_CLK		262
#define IMX7D_ECSPI3_ROOT_SRC		263
#define IMX7D_ECSPI3_ROOT_CG		264
#define IMX7D_ECSPI3_ROOT_DIV		265
#define IMX7D_ECSPI4_ROOT_CLK		266
#define IMX7D_ECSPI4_ROOT_SRC		267
#define IMX7D_ECSPI4_ROOT_CG		268
#define IMX7D_ECSPI4_ROOT_DIV		269
#define IMX7D_PWM1_ROOT_CLK		270
#define IMX7D_PWM1_ROOT_SRC		271
#define IMX7D_PWM1_ROOT_CG		272
#define IMX7D_PWM1_ROOT_DIV		273
#define IMX7D_PWM2_ROOT_CLK		274
#define IMX7D_PWM2_ROOT_SRC		275
#define IMX7D_PWM2_ROOT_CG		276
#define IMX7D_PWM2_ROOT_DIV		277
#define IMX7D_PWM3_ROOT_CLK		278
#define IMX7D_PWM3_ROOT_SRC		279
#define IMX7D_PWM3_ROOT_CG		280
#define IMX7D_PWM3_ROOT_DIV		281
#define IMX7D_PWM4_ROOT_CLK		282
#define IMX7D_PWM4_ROOT_SRC		283
#define IMX7D_PWM4_ROOT_CG		284
#define IMX7D_PWM4_ROOT_DIV		285
#define IMX7D_FLEXTIMER1_ROOT_CLK	286
#define IMX7D_FLEXTIMER1_ROOT_SRC	287
#define IMX7D_FLEXTIMER1_ROOT_CG	288
#define IMX7D_FLEXTIMER1_ROOT_DIV	289
#define IMX7D_FLEXTIMER2_ROOT_CLK	290
#define IMX7D_FLEXTIMER2_ROOT_SRC	291
#define IMX7D_FLEXTIMER2_ROOT_CG	292
#define IMX7D_FLEXTIMER2_ROOT_DIV	293
#define IMX7D_SIM1_ROOT_CLK		294
#define IMX7D_SIM1_ROOT_SRC		295
#define IMX7D_SIM1_ROOT_CG		296
#define IMX7D_SIM1_ROOT_DIV		297
#define IMX7D_SIM2_ROOT_CLK		298
#define IMX7D_SIM2_ROOT_SRC		299
#define IMX7D_SIM2_ROOT_CG		300
#define IMX7D_SIM2_ROOT_DIV		301
#define IMX7D_GPT1_ROOT_CLK		302
#define IMX7D_GPT1_ROOT_SRC		303
#define IMX7D_GPT1_ROOT_CG		304
#define IMX7D_GPT1_ROOT_DIV		305
#define IMX7D_GPT2_ROOT_CLK		306
#define IMX7D_GPT2_ROOT_SRC		307
#define IMX7D_GPT2_ROOT_CG		308
#define IMX7D_GPT2_ROOT_DIV		309
#define IMX7D_GPT3_ROOT_CLK		310
#define IMX7D_GPT3_ROOT_SRC		311
#define IMX7D_GPT3_ROOT_CG		312
#define IMX7D_GPT3_ROOT_DIV		313
#define IMX7D_GPT4_ROOT_CLK		314
#define IMX7D_GPT4_ROOT_SRC		315
#define IMX7D_GPT4_ROOT_CG		316
#define IMX7D_GPT4_ROOT_DIV		317
#define IMX7D_TRACE_ROOT_CLK		318
#define IMX7D_TRACE_ROOT_SRC		319
#define IMX7D_TRACE_ROOT_CG		320
#define IMX7D_TRACE_ROOT_DIV		321
#define IMX7D_WDOG1_ROOT_CLK		322
#define IMX7D_WDOG_ROOT_SRC		323
#define IMX7D_WDOG_ROOT_CG		324
#define IMX7D_WDOG_ROOT_DIV		325
#define IMX7D_CSI_MCLK_ROOT_CLK		326
#define IMX7D_CSI_MCLK_ROOT_SRC		327
#define IMX7D_CSI_MCLK_ROOT_CG		328
#define IMX7D_CSI_MCLK_ROOT_DIV		329
#define IMX7D_AUDIO_MCLK_ROOT_CLK	330
#define IMX7D_AUDIO_MCLK_ROOT_SRC	331
#define IMX7D_AUDIO_MCLK_ROOT_CG	332
#define IMX7D_AUDIO_MCLK_ROOT_DIV	333
#define IMX7D_WRCLK_ROOT_CLK		334
#define IMX7D_WRCLK_ROOT_SRC		335
#define IMX7D_WRCLK_ROOT_CG		336
#define IMX7D_WRCLK_ROOT_DIV		337
#define IMX7D_CLKO1_ROOT_SRC		338
#define IMX7D_CLKO1_ROOT_CG		339
#define IMX7D_CLKO1_ROOT_DIV		340
#define IMX7D_CLKO2_ROOT_SRC		341
#define IMX7D_CLKO2_ROOT_CG		342
#define IMX7D_CLKO2_ROOT_DIV		343
#define IMX7D_MAIN_AXI_ROOT_PRE_DIV	344
#define IMX7D_DISP_AXI_ROOT_PRE_DIV	345
#define IMX7D_ENET_AXI_ROOT_PRE_DIV	346
#define IMX7D_NAND_USDHC_BUS_ROOT_PRE_DIV 347
#define IMX7D_AHB_CHANNEL_ROOT_PRE_DIV	348
#define IMX7D_USB_HSIC_ROOT_PRE_DIV	349
#define IMX7D_PCIE_CTRL_ROOT_PRE_DIV	350
#define IMX7D_PCIE_PHY_ROOT_PRE_DIV	351
#define IMX7D_EPDC_PIXEL_ROOT_PRE_DIV	352
#define IMX7D_LCDIF_PIXEL_ROOT_PRE_DIV	353
#define IMX7D_MIPI_DSI_ROOT_PRE_DIV	354
#define IMX7D_MIPI_CSI_ROOT_PRE_DIV	355
#define IMX7D_MIPI_DPHY_ROOT_PRE_DIV	356
#define IMX7D_SAI1_ROOT_PRE_DIV		357
#define IMX7D_SAI2_ROOT_PRE_DIV		358
#define IMX7D_SAI3_ROOT_PRE_DIV		359
#define IMX7D_SPDIF_ROOT_PRE_DIV	360
#define IMX7D_ENET1_REF_ROOT_PRE_DIV	361
#define IMX7D_ENET1_TIME_ROOT_PRE_DIV	362
#define IMX7D_ENET2_REF_ROOT_PRE_DIV	363
#define IMX7D_ENET2_TIME_ROOT_PRE_DIV	364
#define IMX7D_ENET_PHY_REF_ROOT_PRE_DIV 365
#define IMX7D_EIM_ROOT_PRE_DIV		366
#define IMX7D_NAND_ROOT_PRE_DIV		367
#define IMX7D_QSPI_ROOT_PRE_DIV		368
#define IMX7D_USDHC1_ROOT_PRE_DIV	369
#define IMX7D_USDHC2_ROOT_PRE_DIV	370
#define IMX7D_USDHC3_ROOT_PRE_DIV	371
#define IMX7D_CAN1_ROOT_PRE_DIV		372
#define IMX7D_CAN2_ROOT_PRE_DIV		373
#define IMX7D_I2C1_ROOT_PRE_DIV		374
#define IMX7D_I2C2_ROOT_PRE_DIV		375
#define IMX7D_I2C3_ROOT_PRE_DIV		376
#define IMX7D_I2C4_ROOT_PRE_DIV		377
#define IMX7D_UART1_ROOT_PRE_DIV	378
#define IMX7D_UART2_ROOT_PRE_DIV	379
#define IMX7D_UART3_ROOT_PRE_DIV	380
#define IMX7D_UART4_ROOT_PRE_DIV	381
#define IMX7D_UART5_ROOT_PRE_DIV	382
#define IMX7D_UART6_ROOT_PRE_DIV	383
#define IMX7D_UART7_ROOT_PRE_DIV	384
#define IMX7D_ECSPI1_ROOT_PRE_DIV	385
#define IMX7D_ECSPI2_ROOT_PRE_DIV	386
#define IMX7D_ECSPI3_ROOT_PRE_DIV	387
#define IMX7D_ECSPI4_ROOT_PRE_DIV	388
#define IMX7D_PWM1_ROOT_PRE_DIV		389
#define IMX7D_PWM2_ROOT_PRE_DIV		390
#define IMX7D_PWM3_ROOT_PRE_DIV		391
#define IMX7D_PWM4_ROOT_PRE_DIV		392
#define IMX7D_FLEXTIMER1_ROOT_PRE_DIV	393
#define IMX7D_FLEXTIMER2_ROOT_PRE_DIV	394
#define IMX7D_SIM1_ROOT_PRE_DIV		395
#define IMX7D_SIM2_ROOT_PRE_DIV		396
#define IMX7D_GPT1_ROOT_PRE_DIV		397
#define IMX7D_GPT2_ROOT_PRE_DIV		398
#define IMX7D_GPT3_ROOT_PRE_DIV		399
#define IMX7D_GPT4_ROOT_PRE_DIV		400
#define IMX7D_TRACE_ROOT_PRE_DIV	401
#define IMX7D_WDOG_ROOT_PRE_DIV		402
#define IMX7D_CSI_MCLK_ROOT_PRE_DIV	403
#define IMX7D_AUDIO_MCLK_ROOT_PRE_DIV	404
#define IMX7D_WRCLK_ROOT_PRE_DIV	405
#define IMX7D_CLKO1_ROOT_PRE_DIV	406
#define IMX7D_CLKO2_ROOT_PRE_DIV	407
#define IMX7D_DRAM_PHYM_ALT_ROOT_PRE_DIV 408
#define IMX7D_DRAM_ALT_ROOT_PRE_DIV	409
#define IMX7D_LVDS1_IN_CLK		410
#define IMX7D_LVDS1_OUT_SEL		411
#define IMX7D_LVDS1_OUT_CLK		412
#define IMX7D_CLK_DUMMY			413
#define IMX7D_GPT_3M_CLK		414
#define IMX7D_OCRAM_CLK			415
#define IMX7D_OCRAM_S_CLK		416
#define IMX7D_WDOG2_ROOT_CLK		417
#define IMX7D_WDOG3_ROOT_CLK		418
#define IMX7D_WDOG4_ROOT_CLK		419
#define IMX7D_SDMA_CORE_CLK		420
#define IMX7D_USB1_MAIN_480M_CLK	421
#define IMX7D_USB_CTRL_CLK		422
#define IMX7D_USB_PHY1_CLK		423
#define IMX7D_USB_PHY2_CLK		424
#define IMX7D_IPG_ROOT_CLK		425
#define IMX7D_SAI1_IPG_CLK		426
#define IMX7D_SAI2_IPG_CLK		427
#define IMX7D_SAI3_IPG_CLK		428
#define IMX7D_PLL_AUDIO_TEST_DIV	429
#define IMX7D_PLL_AUDIO_POST_DIV	430
#define IMX7D_PLL_VIDEO_TEST_DIV	431
#define IMX7D_PLL_VIDEO_POST_DIV	432
#define IMX7D_MU_ROOT_CLK		433
#define IMX7D_SEMA4_HS_ROOT_CLK		434
#define IMX7D_PLL_DRAM_TEST_DIV		435
#define IMX7D_ADC_ROOT_CLK		436
#define IMX7D_CLK_END			437
#endif /* __DT_BINDINGS_CLOCK_IMX7D_H */
