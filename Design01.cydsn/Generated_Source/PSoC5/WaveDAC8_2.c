/*******************************************************************************
* File Name: WaveDAC8_2.c
* Version 2.10
*
* Description:
*  This file provides the source code for the 8-bit Waveform DAC 
*  (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "WaveDAC8_2.h"

uint8  WaveDAC8_2_initVar = 0u;

const uint8 CYCODE WaveDAC8_2_wave1[WaveDAC8_2_WAVE1_LENGTH] = { 249u,248u,249u,248u,248u,249u,248u,248u,248u,247u,247u,248u,248u,249u,248u,248u,249u,248u,249u,248u,248u,249u,248u,250u,250u,250u,250u,252u,251u,252u,251u,251u,251u,251u,251u,251u,250u,250u,250u,250u,251u,250u,250u,250u,248u,248u,248u,247u,249u,248u,249u,249u,248u,249u,249u,249u,249u,248u,249u,249u,248u,248u,249u,248u,249u,248u,249u,249u,248u,250u,250u,250u,251u,249u,250u,252u,250u,252u,251u,252u,253u,252u,252u,253u,252u,252u,251u,251u,251u,250u,251u,250u,249u,250u,249u,248u,249u,249u,249u,249u,248u,249u,248u,248u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,248u,249u,249u,250u,251u,250u,251u,251u,251u,252u,252u,252u,254u,252u,253u,252u,253u,253u,252u,251u,252u,250u,251u,250u,248u,248u,247u,247u,247u,246u,247u,248u,247u,247u,247u,247u,248u,246u,247u,248u,245u,247u,246u,246u,248u,246u,247u,247u,247u,246u,248u,247u,248u,248u,248u,250u,249u,249u,250u,249u,249u,251u,251u,251u,251u,250u,251u,251u,250u,250u,249u,250u,250u,248u,248u,248u,248u,248u,248u,246u,247u,248u,247u,247u,247u,247u,248u,247u,247u,248u,248u,248u,248u,247u,249u,247u,248u,248u,248u,248u,249u,249u,249u,249u,249u,251u,250u,251u,251u,250u,251u,250u,250u,251u,251u,250u,250u,250u,248u,249u,249u,248u,248u,246u,246u,246u,246u,246u,246u,246u,246u,246u,245u,245u,246u,245u,245u,244u,245u,246u,245u,245u,245u,244u,245u,245u,244u,245u,245u,246u,247u,245u,246u,247u,247u,247u,248u,247u,248u,250u,249u,249u,250u,248u,249u,249u,247u,248u,247u,247u,248u,246u,245u,246u,246u,247u,247u,246u,246u,246u,244u,245u,245u,245u,246u,246u,245u,245u,246u,246u,247u,246u,246u,245u,244u,245u,246u,245u,247u,247u,247u,248u,247u,247u,248u,249u,248u,249u,248u,248u,248u,247u,249u,249u,248u,248u,248u,247u,246u,247u,245u,245u,245u,244u,245u,244u,245u,245u,246u,245u,246u,245u,244u,245u,245u,244u,246u,244u,245u,246u,244u,245u,246u,245u,246u,247u,246u,247u,248u,247u,248u,248u,248u,248u,248u,249u,251u,250u,249u,250u,249u,249u,250u,248u,248u,249u,247u,248u,247u,245u,246u,246u,245u,246u,245u,244u,245u,245u,244u,242u,242u,244u,244u,243u,245u,244u,244u,245u,244u,244u,245u,245u,245u,247u,246u,247u,247u,247u,248u,249u,248u,250u,250u,249u,251u,250u,250u,250u,250u,250u,250u,249u,249u,250u,248u,248u,248u,246u,245u,246u,244u,245u,246u,245u,245u,244u,246u,246u,246u,246u,247u,246u,246u,246u,246u,247u,246u,246u,246u,245u,245u,246u,245u,246u,247u,247u,248u,248u,248u,249u,249u,249u,250u,250u,250u,250u,249u,250u,249u,249u,250u,249u,248u,248u,247u,248u,247u,246u,246u,247u,246u,233u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,2u,2u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,90u,247u,248u,247u,248u,247u,248u,248u,246u,248u,249u,248u,249u,248u,247u,248u,247u,248u,248u,248u,248u,248u,247u,248u,248u,248u,250u,250u,250u,251u,251u,251u,251u,251u,251u,251u,252u,252u,251u,252u,252u,251u,250u,250u,249u,249u,248u,248u,248u,247u,248u,248u,248u,249u,248u,248u,249u,248u,248u,249u,247u,249u,247u,249u,249u,248u,248u,249u,247u,247u,248u,247u,249u,248u,248u,249u,249u,249u,249u,249u,250u,249u,249u,250u,249u,249u,249u,249u,250u,250u,249u,249u,251u,249u,250u,248u,247u,248u,247u,248u,248u,247u,247u,246u,247u,247u,246u,245u,246u,246u,245u,241u,238u,245u,246u,246u,245u,246u,247u,247u,247u,246u,247u,247u,248u,248u,246u,248u,249u,249u,249u,250u,250u,251u,250u,249u,250u,249u,250u,250u,249u,249u,248u,247u,247u,247u,247u,247u,247u,247u,247u,246u,246u,245u,245u,245u,247u,247u,247u,246u,247u,247u,246u,247u,247u,247u,247u,247u,247u,249u,247u,249u,248u,249u,250u,251u,251u,251u,251u,251u,252u,250u,251u,251u,251u,251u,250u,251u,251u,250u,249u,249u,248u,248u,246u,245u,246u,248u,247u,248u,247u,247u,247u,247u,248u,248u,247u,247u,246u,246u,247u,246u,247u,247u,247u,247u,247u,246u,248u,248u,248u,249u,249u,249u,250u,250u,251u,251u,251u,252u,251u,252u,252u,251u,251u,251u,250u,250u,250u,249u,248u,247u,247u,248u,247u,247u,248u,247u,247u,246u,247u,248u,246u,248u,248u,248u,248u,248u,248u,249u,248u,248u,249u,247u,248u,248u,247u,248u,248u,249u,250u,250u,251u,251u,251u,252u,251u,251u,253u,251u,252u,252u,252u,253u,252u,251u,252u,251u,250u,250u,248u,248u,249u,248u,248u,248u,249u,249u,248u,12u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,28u,246u,248u,248u,248u,246u,247u,247u,246u,247u,248u,247u,248u,247u,246u,246u,246u,245u,246u,246u,247u,246u,247u,246u,246u,246u,247u,246u,245u,245u,246u,245u,247u,247u,247u,249u,248u,249u,249u,248u,248u,250u,249u,248u,250u,248u,249u,250u,248u,249u,247u,247u,248u,246u,246u,246u,245u,245u,246u,245u,245u,246u,244u,246u,246u,244u,246u,246u,245u,246u,245u,245u,244u,244u,244u,245u,245u,244u,244u,244u,244u,246u,244u,244u,246u,245u,245u,246u,245u,245u,248u,245u,246u,249u,248u,248u,248u,248u,247u,249u,246u,246u,246u,244u,244u,244u,244u,245u,245u,245u,245u,245u,243u,245u,244u,245u,244u,245u,244u,245u,245u,243u,245u,244u,244u,245u,245u,244u,244u,245u,245u,246u,246u,245u,247u,246u,247u,247u,248u,248u,249u,248u,247u,249u,247u,247u,247u,247u,247u,247u,245u,245u,245u,243u,244u,244u,244u,245u,245u,244u,242u,244u,244u,243u,244u,243u,244u,243u,243u,244u,244u,243u,243u,244u,243u,243u,244u,244u,245u,245u,245u,246u,246u,246u,247u,248u,247u,249u,248u,247u,247u,247u,247u,247u,247u,247u,246u,245u,246u,246u,244u,244u,245u,245u,243u,244u,244u,243u,244u,244u,244u,245u,243u,244u,245u,244u,244u,244u,245u,244u,244u,243u,243u,244u,243u,245u,245u,245u,247u,247u,247u,247u,248u,246u,248u,249u,247u,248u,249u,247u,249u,248u,248u,249u,248u,247u,247u,246u,246u,245u,245u,244u,245u,244u,244u,245u,245u,245u,246u,245u,244u,245u,244u,245u,246u,245u,245u,246u,244u,246u,245u,244u,246u,246u,245u,247u,246u,246u,247u,247u,247u,247u,247u,248u,249u,248u,248u,249u,247u,248u,248u,247u,249u,248u,247u,248u,247u,245u,246u,245u,245u,246u,246u,246u,246u,245u,245u,246u,245u,245u,245u,244u,245u,245u,245u,246u,246u,244u,170u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,2u,2u,2u,2u,3u,3u,3u,3u,3u,65u,244u,245u,244u,244u,243u,244u,244u,244u,245u,245u,244u,245u,245u,245u,244u,245u,244u,244u,245u,242u,244u,244u,244u,245u,245u,244u,245u,245u,245u,247u,246u,247u,247u,247u,247u,247u,247u,247u,249u,247u,247u,248u,247u,247u,246u,246u,245u,245u,244u,244u,245u,243u,245u,244u,244u,245u,245u,244u,244u,244u,243u,244u,244u,244u,244u,244u,244u,244u,244u,243u,245u,245u,245u,245u,246u,245u,246u,246u,246u,248u,247u,247u,248u,247u,248u,249u,247u,248u,248u,247u,247u,246u,245u,246u,247u,245u,245u,244u,242u,244u,244u,244u,245u,245u,244u,245u,245u,244u,245u,244u,245u,245u,245u,245u,246u,245u,245u,246u,245u,245u,245u,245u,246u,247u,246u,247u,248u,247u,249u,248u,248u,249u,249u,249u,250u,248u,249u,250u,248u,249u,249u,248u,249u,247u,246u,245u,245u,244u,245u,245u,244u,245u,244u,246u,246u,245u,244u,246u,245u,246u,246u,244u,246u,246u,245u,246u,245u,245u,245u,246u,246u,247u,247u,247u,248u,247u,248u,248u,247u,248u,248u,249u,250u,249u,248u,249u,249u,249u,249u,248u,248u,249u,247u,247u,246u,246u,247u,246u,245u,246u,246u,245u,247u,246u,246u,246u,245u,246u,245u,245u,246u,246u,245u,246u,246u,246u,246u,245u,246u,248u,246u,248u,248u,248u,249u,249u,249u,250u,250u,250u,251u,250u,250u,250u,249u,250u,249u,249u,250u,249u,247u,248u,246u,247u,247u,246u,247u,247u,246u,247u,247u,247u,248u,247u,247u,248u,247u,247u,246u,246u,246u,246u,246u,246u,245u,247u,247u,246u,248u,248u,248u,249u,249u,249u,250u,249u,251u,250u,250u,251u,251u,251u,252u,250u,250u,250u,249u,249u,249u,248u,247u,247u,247u,248u,247u,246u,248u,247u,248u,248u,247u,248u,247u,248u,248u,247u,248u,248u,247u,249u,248u,248u,249u,248u,248u,248u,248u,249u,249u,250u,251u,251u,251u,252u,251u,251u,252u,251u,252u,252u,252u,252u,252u,252u,252u,251u,252u,250u,249u,249u,247u,247u,248u,248u,247u,247u,247u,248u,248u,248u,249u,247u,247u,247u,247u,249u,247u,247u,248u,247u,248u,247u,247u,248u,247u,246u,247u,246u,248u,249u,248u,248u,249u,248u,250u,250u,247u,250u,249u,247u,249u,248u,247u,248u,248u,248u,247u,246u,246u,246u,244u,245u,246u,246u,245u,245u,244u,245u,245u,245u,246u,245u,246u,246u,244u,246u,246u,245u,245u,246u,245u,247u,245u,247u,247u,247u,248u,248u,248u,249u,249u,250u,250u,249u,250u,251u,250u,251u,250u,249u,249u,250u,249u,250u,249u,249u,247u,248u,247u,247u,245u,247u,247u,246u,247u,246u,246u,246u,246u,245u,246u,246u,245u,246u,245u,246u,245u,245u,246u,245u,243u,245u,245u,245u,246u,245u,245u,247u,247u,248u,249u,248u,248u,250u,248u,248u,249u,249u,248u,249u,248u,248u,248u,246u,245u,246u,244u,246u,244u,245u,246u,245u,245u,245u,245u,244u,245u,243u,245u,245u,246u,245u,246u,245u,246u,246u,245u,246u,246u,246u,247u,246u,247u,247u,247u,248u,249u,248u,248u,249u,249u,250u,250u,249u,250u,250u,249u,250u,249u,248u,249u,247u,247u,247u,245u,245u,246u,245u,245u,245u,244u,245u,245u,245u,246u,246u,244u,246u,245u,245u,246u,245u,246u,247u,244u,245u,245u,245u,246u,246u,246u,248u,248u,248u,248u,248u,248u,250u,248u,249u,249u,248u,248u,248u,248u,249u,249u,248u,248u,248u,247u,247u,246u,245u,246u,245u,246u,246u,246u,247u,246u,246u,245u,245u,245u,246u,247u,245u,246u,245u,245u,246u,246u,245u,246u,245u,247u,247u,246u,247u,248u,248u,249u,249u,249u,250u,250u,250u,251u,250u,250u,251u,249u,250u,250u,249u,249u,248u,248u,249u,247u,247u,247u,246u,247u,247u,246u,247u,247u,245u,247u,246u,247u,247u,246u,247u,247u,246u,246u,247u,246u,247u,247u,245u,246u,245u,247u,248u,247u,248u,249u,249u,249u,250u,249u,251u,250u,250u,251u,250u,250u,251u,250u,250u,250u,249u,249u,249u,248u,248u,246u,247u,70u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,49u,245u,246u,247u,246u,247u,246u,246u,246u,246u,246u,247u,246u,247u,249u,248u,248u,249u,249u,249u,249u,250u,251u,251u,251u,251u,251u,251u,251u,250u,251u,251u,250u,250u,248u,248u,247u,247u,247u,247u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,247u,246u,247u,246u,246u,245u,246u,245u,246u,246u,246u,246u,246u,247u,248u,247u,248u,249u,248u,248u,249u,249u,249u,250u,249u,249u,249u,249u,250u,248u,248u,249u,248u,248u,248u,246u,246u,245u,245u,246u,246u,246u,246u,245u,245u,245u,245u,245u,245u,244u,244u,246u,245u,245u,244u,245u,246u,245u,246u,246u,246u,247u,247u,247u,248u,248u,249u,250u,249u,250u,250u,250u,251u,251u,251u,251u,250u,250u,250u,249u,249u,249u,248u,248u,248u,246u,248u,247u,247u,248u,246u,247u,248u,246u,247u,246u,247u,248u,247u,247u,248u,247u,247u,248u,247u,247u,248u,246u,247u,246u,248u,248u,247u,249u,249u,249u,249u,249u,249u,250u,250u,251u,251u,250u,251u,251u,250u,250u,249u,249u,250u,249u,248u,247u,246u,247u,246u,247u,248u,247u,248u,248u,247u,247u };
const uint8 CYCODE WaveDAC8_2_wave2[WaveDAC8_2_WAVE2_LENGTH] = { 128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u };

static uint8  WaveDAC8_2_Wave1Chan;
static uint8  WaveDAC8_2_Wave2Chan;
static uint8  WaveDAC8_2_Wave1TD;
static uint8  WaveDAC8_2_Wave2TD;


/*******************************************************************************
* Function Name: WaveDAC8_2_Init
********************************************************************************
*
* Summary:
*  Initializes component with parameters set in the customizer.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_2_Init(void) 
{
	WaveDAC8_2_VDAC8_Init();
	WaveDAC8_2_VDAC8_SetSpeed(WaveDAC8_2_HIGHSPEED);
	WaveDAC8_2_VDAC8_SetRange(WaveDAC8_2_DAC_RANGE);

	#if(WaveDAC8_2_DAC_MODE == WaveDAC8_2_CURRENT_MODE)
		WaveDAC8_2_IDAC8_SetPolarity(WaveDAC8_2_DAC_POL);
	#endif /* WaveDAC8_2_DAC_MODE == WaveDAC8_2_CURRENT_MODE */

	#if(WaveDAC8_2_OUT_MODE == WaveDAC8_2_BUFFER_MODE)
	   WaveDAC8_2_BuffAmp_Init();
	#endif /* WaveDAC8_2_OUT_MODE == WaveDAC8_2_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	WaveDAC8_2_Wave1TD = CyDmaTdAllocate();
	WaveDAC8_2_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	WaveDAC8_2_Wave1Setup(WaveDAC8_2_wave1, WaveDAC8_2_WAVE1_LENGTH) ;
	WaveDAC8_2_Wave2Setup(WaveDAC8_2_wave2, WaveDAC8_2_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(WaveDAC8_2_DacClk_PHASE)
	   WaveDAC8_2_DacClk_SetPhase(WaveDAC8_2_CLK_PHASE_0nS);
	#endif /* defined(WaveDAC8_2_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: WaveDAC8_2_Enable
********************************************************************************
*  
* Summary: 
*  Enables the DAC block and DMA operation.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_2_Enable(void) 
{
	WaveDAC8_2_VDAC8_Enable();

	#if(WaveDAC8_2_OUT_MODE == WaveDAC8_2_BUFFER_MODE)
	   WaveDAC8_2_BuffAmp_Enable();
	#endif /* WaveDAC8_2_OUT_MODE == WaveDAC8_2_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(WaveDAC8_2_Wave1Chan, 1u);
	(void)CyDmaChEnable(WaveDAC8_2_Wave2Chan, 1u);
	
	/* set the initial value */
	WaveDAC8_2_SetValue(0u);
	
	#if(WaveDAC8_2_CLOCK_SRC == WaveDAC8_2_CLOCK_INT)  	
	   WaveDAC8_2_DacClk_Start();
	#endif /* WaveDAC8_2_CLOCK_SRC == WaveDAC8_2_CLOCK_INT */
}


/*******************************************************************************
* Function Name: WaveDAC8_2_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as 
*  executing the stop function.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void WaveDAC8_2_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(WaveDAC8_2_initVar == 0u)
	{
		WaveDAC8_2_Init();
		WaveDAC8_2_initVar = 1u;
	}
	
	WaveDAC8_2_Enable();
}


/*******************************************************************************
* Function Name: WaveDAC8_2_StartEx
********************************************************************************
*
* Summary:
*  The StartEx function sets pointers and sizes for both waveforms
*  and then starts the component.
*
* Parameters:  
*   uint8 * wavePtr1:     Pointer to the waveform 1 array.
*   uint16  sampleSize1:  The amount of samples in the waveform 1.
*   uint8 * wavePtr2:     Pointer to the waveform 2 array.
*   uint16  sampleSize2:  The amount of samples in the waveform 2.
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void WaveDAC8_2_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	WaveDAC8_2_Wave1Setup(wavePtr1, sampleSize1);
	WaveDAC8_2_Wave2Setup(wavePtr2, sampleSize2);
	WaveDAC8_2_Start();
}


/*******************************************************************************
* Function Name: WaveDAC8_2_Stop
********************************************************************************
*
* Summary:
*  Stops the clock (if internal), disables the DMA channels
*  and powers down the DAC.
*
* Parameters:  
*  None  
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_2_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(WaveDAC8_2_CLOCK_SRC == WaveDAC8_2_CLOCK_INT)  	
	   WaveDAC8_2_DacClk_Stop();
	#endif /* WaveDAC8_2_CLOCK_SRC == WaveDAC8_2_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(WaveDAC8_2_Wave1Chan);
	(void)CyDmaChDisable(WaveDAC8_2_Wave2Chan);

	/* Disable power to DAC */
	WaveDAC8_2_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: WaveDAC8_2_Wave1Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 1.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None 
*
*******************************************************************************/
void WaveDAC8_2_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (WaveDAC8_2_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		WaveDAC8_2_Wave1Chan = WaveDAC8_2_Wave1_DMA_DmaInitialize(
		WaveDAC8_2_Wave1_DMA_BYTES_PER_BURST, WaveDAC8_2_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		WaveDAC8_2_Wave1Chan = WaveDAC8_2_Wave1_DMA_DmaInitialize(
		WaveDAC8_2_Wave1_DMA_BYTES_PER_BURST, WaveDAC8_2_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(WaveDAC8_2_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(WaveDAC8_2_Wave1TD, sampleSize, WaveDAC8_2_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)WaveDAC8_2_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(WaveDAC8_2_Wave1TD, LO16((uint32)wavePtr), LO16(WaveDAC8_2_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(WaveDAC8_2_Wave1Chan, WaveDAC8_2_Wave1TD);
}


/*******************************************************************************
* Function Name: WaveDAC8_2_Wave2Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 2.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_2_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (WaveDAC8_2_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		WaveDAC8_2_Wave2Chan = WaveDAC8_2_Wave2_DMA_DmaInitialize(
		WaveDAC8_2_Wave2_DMA_BYTES_PER_BURST, WaveDAC8_2_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		WaveDAC8_2_Wave2Chan = WaveDAC8_2_Wave2_DMA_DmaInitialize(
		WaveDAC8_2_Wave2_DMA_BYTES_PER_BURST, WaveDAC8_2_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(WaveDAC8_2_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(WaveDAC8_2_Wave2TD, sampleSize, WaveDAC8_2_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)WaveDAC8_2_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(WaveDAC8_2_Wave2TD, LO16((uint32)wavePtr), LO16(WaveDAC8_2_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(WaveDAC8_2_Wave2Chan, WaveDAC8_2_Wave2TD);
}


/* [] END OF FILE */
