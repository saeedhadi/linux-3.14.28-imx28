/*
 * Copyright (c) 2009-2012 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Freescale Semiconductor nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 *
 * ALTERNATIVELY, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") as published by the Free Software
 * Foundation, either version 2 of that License or (at your option) any
 * later version.
 *
 * THIS SOFTWARE IS PROVIDED BY Freescale Semiconductor ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Freescale Semiconductor BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
////////////////////////////////////////////////////////////////////////////////
//
// WARNING!  THIS FILE IS AUTOMATICALLY GENERATED FROM XML.
//                DO NOT MODIFY THIS FILE DIRECTLY.
//
////////////////////////////////////////////////////////////////////////////////
//
// The following naming conventions are followed in this file.
//      XX_<module>_<regname>_<field>
//
// XX specifies the define / macro class
//      HW pertains to a register
//      BM indicates a Bit Mask
//      BF indicates a Bit Field macro
//
// <module> is the hardware module name which can be any of the following...
//      USB20 (Note when there is more than one copy of a given module, the
//      module name includes a number starting from 0 for the first instance
//      of that module)
//
// <regname> is the specific register within that module
//
// <field> is the specific bitfield within that <module>_<register>
//
// We also define the following...
//      hw_<module>_<regname>_t is typedef of anonymous union
//
////////////////////////////////////////////////////////////////////////////////

#ifndef _REGSSIMGPMISEL_H
#define _REGSSIMGPMISEL_H  1

#include "regs.h"

#ifndef REGS_SIMGPMISEL_BASE
#define REGS_SIMGPMISEL_BASE (REGS_BASE + 0x0003C050)
#endif

////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_SIMGPMISEL_CHANn_CFG : base 0x8003C050 : count 4 : offset 0x4
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg16_t  DEV_CODE;
        unsigned DEV_CLASS  :  4;
        unsigned CE_SRC     :  4;
        reg8_t   WIDTH;
    } B;
} hw_simgpmisel_chann_cfg_t;
#endif


//
// constants & macros for entire HW_SIMGPMISEL_CHANn_CFG multi-register
//

#define HW_SIMGPMISEL_CHANn_CFG_COUNT        4
#define HW_SIMGPMISEL_CHANn_CFG_ADDR(n)      (REGS_SIMGPMISEL_BASE + 0x00000000 + ((n) * 0x4))

#ifndef __LANGUAGE_ASM__
#define HW_SIMGPMISEL_CHANn_CFG(n)           (*(volatile hw_simgpmisel_chann_cfg_t *) HW_SIMGPMISEL_CHANn_CFG_ADDR(n))
#define HW_SIMGPMISEL_CHANn_CFG_RD(n)        (HW_SIMGPMISEL_CHANn_CFG(n).U)
#define HW_SIMGPMISEL_CHANn_CFG_WR(n, v)     (HW_SIMGPMISEL_CHANn_CFG(n).U = (v))
#define HW_SIMGPMISEL_CHANn_CFG_SET(n, v)    (HW_SIMGPMISEL_CHANn_CFG_WR(n, HW_SIMGPMISEL_CHANn_CFG_RD(n) |  (v)))
#define HW_SIMGPMISEL_CHANn_CFG_CLR(n, v)    (HW_SIMGPMISEL_CHANn_CFG_WR(n, HW_SIMGPMISEL_CHANn_CFG_RD(n) & ~(v)))
#define HW_SIMGPMISEL_CHANn_CFG_TOG(n, v)    (HW_SIMGPMISEL_CHANn_CFG_WR(n, HW_SIMGPMISEL_CHANn_CFG_RD(n) ^  (v)))
#endif


//
// constants & macros for individual HW_SIMGPMISEL_CHANn_CFG multi-register bitfields
//

//--- Register HW_SIMGPMISEL_CHANn_CFG, field WIDTH

#define BP_SIMGPMISEL_CHANn_CFG_WIDTH      24
#define BM_SIMGPMISEL_CHANn_CFG_WIDTH      0xFF000000

#ifndef __LANGUAGE_ASM__
#define BF_SIMGPMISEL_CHANn_CFG_WIDTH(v)   ((((reg32_t) v) << 24) & BM_SIMGPMISEL_CHANn_CFG_WIDTH)
#else
#define BF_SIMGPMISEL_CHANn_CFG_WIDTH(v)   (((v) << 24) & BM_SIMGPMISEL_CHANn_CFG_WIDTH)
#endif

#ifndef __LANGUAGE_ASM__
#define BW_SIMGPMISEL_CHANn_CFG_WIDTH(n, v)  (HW_SIMGPMISEL_CHANn_CFG(n).B.WIDTH = (v))
#endif

//--- Register HW_SIMGPMISEL_CHANn_CFG, field CE_SRC

#define BP_SIMGPMISEL_CHANn_CFG_CE_SRC      20
#define BM_SIMGPMISEL_CHANn_CFG_CE_SRC      0x00F00000

#define BF_SIMGPMISEL_CHANn_CFG_CE_SRC(v)   (((v) << 20) & BM_SIMGPMISEL_CHANn_CFG_CE_SRC)

#ifndef __LANGUAGE_ASM__
#define BW_SIMGPMISEL_CHANn_CFG_CE_SRC(n, v)  BF_CS1n(SIMGPMISEL_CHANn_CFG, n, CE_SRC, v)
#endif

#define BV_SIMGPMISEL_CHANn_CFG_CE_SRC__PRIMARY      0x0
#define BV_SIMGPMISEL_CHANn_CFG_CE_SRC__ALTERNATE_1  0x1
#define BV_SIMGPMISEL_CHANn_CFG_CE_SRC__ALTERNATE_2  0x2
#define BV_SIMGPMISEL_CHANn_CFG_CE_SRC__ALTERNATE_3  0x3

//--- Register HW_SIMGPMISEL_CHANn_CFG, field DEV_CLASS

#define BP_SIMGPMISEL_CHANn_CFG_DEV_CLASS      16
#define BM_SIMGPMISEL_CHANn_CFG_DEV_CLASS      0x000F0000

#define BF_SIMGPMISEL_CHANn_CFG_DEV_CLASS(v)   (((v) << 16) & BM_SIMGPMISEL_CHANn_CFG_DEV_CLASS)

#ifndef __LANGUAGE_ASM__
#define BW_SIMGPMISEL_CHANn_CFG_DEV_CLASS(n, v)  BF_CS1n(SIMGPMISEL_CHANn_CFG, n, DEV_CLASS, v)
#endif

#define BV_SIMGPMISEL_CHANn_CFG_DEV_CLASS__RSRVD    0x0
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CLASS__NAND_16  0x1
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CLASS__NAND_8   0x2
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CLASS__ATA      0x3

//--- Register HW_SIMGPMISEL_CHANn_CFG, field DEV_CODE

#define BP_SIMGPMISEL_CHANn_CFG_DEV_CODE      0
#define BM_SIMGPMISEL_CHANn_CFG_DEV_CODE      0x0000FFFF

#define BF_SIMGPMISEL_CHANn_CFG_DEV_CODE(v)   (((v) << 0) & BM_SIMGPMISEL_CHANn_CFG_DEV_CODE)

#ifndef __LANGUAGE_ASM__
#define BW_SIMGPMISEL_CHANn_CFG_DEV_CODE(n, v)  (HW_SIMGPMISEL_CHANn_CFG(n).B.DEV_CODE = (v))
#endif

#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__RSRVD                   0x0
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__ATA_SDCFB256            0x1
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__ATA_UDMA                0x2
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_K9F1G08U0M       0x1
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_4M_2k            0x2
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_4M_4k            0x3
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_KM29U128         0x4
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_HN29V1G91        0x5
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_K9F2808U0C       0x6
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_8_TC58NVG0S3AFT05  0x7
#define BV_SIMGPMISEL_CHANn_CFG_DEV_CODE__NAND_16_K9F1G16U0M      0x1


#endif // _REGSSIMGPMISEL_H

////////////////////////////////////////////////////////////////////////////////
