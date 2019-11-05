/*******************************************************************************
* File Name: Cam_signal.c
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

#include "Cam_signal.h"

uint8  Cam_signal_initVar = 0u;

const uint8 CYCODE Cam_signal_wave1[Cam_signal_WAVE1_LENGTH] = { 249u,248u,249u,248u,248u,249u,248u,248u,248u,247u,247u,248u,248u,249u,248u,248u,249u,248u,249u,248u,248u,249u,248u,250u,250u,250u,250u,252u,251u,252u,251u,251u,251u,251u,251u,251u,250u,250u,250u,250u,251u,250u,250u,250u,248u,248u,248u,247u,249u,248u,249u,249u,248u,249u,249u,249u,249u,248u,249u,249u,248u,248u,249u,248u,249u,248u,249u,249u,248u,250u,250u,250u,251u,249u,250u,252u,250u,252u,251u,252u,253u,252u,252u,253u,252u,252u,251u,251u,251u,250u,251u,250u,249u,250u,249u,248u,249u,249u,249u,249u,248u,249u,248u,248u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,248u,249u,249u,250u,251u,250u,251u,251u,251u,252u,252u,252u,254u,252u,253u,252u,253u,253u,252u,251u,252u,250u,251u,250u,248u,248u,247u,247u,247u,246u,247u,248u,247u,247u,247u,247u,248u,246u,247u,248u,245u,247u,246u,246u,248u,246u,247u,247u,247u,246u,248u,247u,248u,248u,248u,250u,249u,249u,250u,249u,249u,251u,251u,251u,251u,250u,251u,251u,250u,250u,249u,250u,250u,248u,248u,248u,248u,248u,248u,246u,247u,248u,247u,247u,247u,247u,248u,247u,247u,248u,248u,248u,248u,247u,249u,247u,248u,248u,248u,248u,249u,249u,249u,249u,249u,251u,250u,251u,251u,250u,251u,250u,250u,251u,251u,250u,250u,250u,248u,249u,249u,248u,248u,246u,246u,246u,246u,246u,246u,246u,246u,246u,245u,245u,246u,245u,245u,244u,245u,246u,245u,245u,245u,244u,245u,245u,244u,245u,245u,246u,247u,245u,246u,247u,247u,247u,248u,247u,248u,250u,249u,249u,250u,248u,249u,249u,247u,248u,247u,247u,248u,246u,245u,246u,246u,247u,247u,246u,246u,246u,244u,245u,245u,245u,246u,246u,245u,245u,246u,246u,247u,246u,246u,245u,244u,245u,246u,245u,247u,247u,247u,248u,247u,247u,248u,249u,248u,249u,248u,248u,248u,247u,249u,249u,248u,248u,248u,247u,246u,247u,245u,245u,245u,244u,245u,244u,245u,245u,246u,245u,246u,245u,244u,245u,245u,244u,246u,244u,245u,246u,244u,245u,246u,245u,246u,247u,246u,247u,248u,247u,248u,248u,248u,248u,248u,249u,251u,250u,249u,250u,249u,249u,250u,248u,248u,249u,247u,248u,247u,245u,246u,246u,245u,246u,245u,244u,245u,245u,244u,242u,242u,244u,244u,243u,245u,244u,244u,245u,244u,244u,245u,245u,245u,247u,246u,247u,247u,247u,248u,249u,248u,250u,250u,249u,251u,250u,250u,250u,250u,250u,250u,249u,249u,250u,248u,248u,248u,246u,245u,246u,244u,245u,246u,245u,245u,244u,246u,246u,246u,246u,247u,246u,246u,246u,246u,247u,246u,246u,246u,245u,245u,246u,245u,246u,247u,247u,248u,248u,248u,249u,249u,249u,250u,250u,250u,250u,249u,250u,249u,249u,250u,249u,248u,248u,247u,248u,247u,246u,246u,247u,246u,233u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,2u,2u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,90u,247u,248u,247u,248u,247u,248u,248u,246u,248u,249u,248u,249u,248u,247u,248u,247u,248u,248u,248u,248u,248u,247u,248u,248u,248u,250u,250u,250u,251u,251u,251u,251u,251u,251u,251u,252u,252u,251u,252u,252u,251u,250u,250u,249u,249u,248u,248u,248u,247u,248u,248u,248u,249u,248u,248u,249u,248u,248u,249u,247u,249u,247u,249u,249u,248u,248u,249u,247u,247u,248u,247u,249u,248u,248u,249u,249u,249u,249u,249u,250u,249u,249u,250u,249u,249u,249u,249u,250u,250u,249u,249u,251u,249u,250u,248u,247u,248u,247u,248u,248u,247u,247u,246u,247u,247u,246u,245u,246u,246u,245u,241u,238u,245u,246u,246u,245u,246u,247u,247u,247u,246u,247u,247u,248u,248u,246u,248u,249u,249u,249u,250u,250u,251u,250u,249u,250u,249u,250u,250u,249u,249u,248u,247u,247u,247u,247u,247u,247u,247u,247u,246u,246u,245u,245u,245u,247u,247u,247u,246u,247u,247u,246u,247u,247u,247u,247u,247u,247u,249u,247u,249u,248u,249u,250u,251u,251u,251u,251u,251u,252u,250u,251u,251u,251u,251u,250u,251u,251u,250u,249u,249u,248u,248u,246u,245u,246u,248u,247u,248u,247u,247u,247u,247u,248u,248u,247u,247u,246u,246u,247u,246u,247u,247u,247u,247u,247u,246u,248u,248u,248u,249u,249u,249u,250u,250u,251u,251u,251u,252u,251u,252u,252u,251u,251u,251u,250u,250u,250u,249u,248u,247u,247u,248u,247u,247u,248u,247u,247u,246u,247u,248u,246u,248u,248u,248u,248u,248u,248u,249u,248u,248u,249u,247u,248u,248u,247u,248u,248u,249u,250u,250u,251u,251u,251u,252u,251u,251u,253u,251u,252u,252u,252u,253u,252u,251u,252u,251u,250u,250u,248u,248u,249u,248u,248u,248u,249u,249u,248u,12u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,28u,246u,248u,248u,248u,246u,247u,247u,246u,247u,248u,247u,248u,247u,246u,246u,246u,245u,246u,246u,247u,246u,247u,246u,246u,246u,247u,246u,245u,245u,246u,245u,247u,247u,247u,249u,248u,249u,249u,248u,248u,250u,249u,248u,250u,248u,249u,250u,248u,249u,247u,247u,248u,246u,246u,246u,245u,245u,246u,245u,245u,246u,244u,246u,246u,244u,246u,246u,245u,246u,245u,245u,244u,244u,244u,245u,245u,244u,244u,244u,244u,246u,244u,244u,246u,245u,245u,246u,245u,245u,248u,245u,246u,249u,248u,248u,248u,248u,247u,249u,246u,246u,246u,244u,244u,244u,244u,245u,245u,245u,245u,245u,243u,245u,244u,245u,244u,245u,244u,245u,245u,243u,245u,244u,244u,245u,245u,244u,244u,245u,245u,246u,246u,245u,247u,246u,247u,247u,248u,248u,249u,248u,247u,249u,247u,247u,247u,247u,247u,247u,245u,245u,245u,243u,244u,244u,244u,245u,245u,244u,242u,244u,244u,243u,244u,243u,244u,243u,243u,244u,244u,243u,243u,244u,243u,243u,244u,244u,245u,245u,245u,246u,246u,246u,247u,248u,247u,249u,248u,247u,247u,247u,247u,247u,247u,247u,246u,245u,246u,246u,244u,244u,245u,245u,243u,244u,244u,243u,244u,244u,244u,245u,243u,244u,245u,244u,244u,244u,245u,244u,244u,243u,243u,244u,243u,245u,245u,245u,247u,247u,247u,247u,248u,246u,248u,249u,247u,248u,249u,247u,249u,248u,248u,249u,248u,247u,247u,246u,246u,245u,245u,244u,245u,244u,244u,245u,245u,245u,246u,245u,244u,245u,244u,245u,246u,245u,245u,246u,244u,246u,245u,244u,246u,246u,245u,247u,246u,246u,247u,247u,247u,247u,247u,248u,249u,248u,248u,249u,247u,248u,248u,247u,249u,248u,247u,248u,247u,245u,246u,245u,245u,246u,246u,246u,246u,245u,245u,246u,245u,245u,245u,244u,245u,245u,245u,246u,246u,244u,170u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,2u,2u,2u,2u,3u,3u,3u,3u,3u,65u,244u,245u,244u,244u,243u,244u,244u,244u,245u,245u,244u,245u,245u,245u,244u,245u,244u,244u,245u,242u,244u,244u,244u,245u,245u,244u,245u,245u,245u,247u,246u,247u,247u,247u,247u,247u,247u,247u,249u,247u,247u,248u,247u,247u,246u,246u,245u,245u,244u,244u,245u,243u,245u,244u,244u,245u,245u,244u,244u,244u,243u,244u,244u,244u,244u,244u,244u,244u,244u,243u,245u,245u,245u,245u,246u,245u,246u,246u,246u,248u,247u,247u,248u,247u,248u,249u,247u,248u,248u,247u,247u,246u,245u,246u,247u,245u,245u,244u,242u,244u,244u,244u,245u,245u,244u,245u,245u,244u,245u,244u,245u,245u,245u,245u,246u,245u,245u,246u,245u,245u,245u,245u,246u,247u,246u,247u,248u,247u,249u,248u,248u,249u,249u,249u,250u,248u,249u,250u,248u,249u,249u,248u,249u,247u,246u,245u,245u,244u,245u,245u,244u,245u,244u,246u,246u,245u,244u,246u,245u,246u,246u,244u,246u,246u,245u,246u,245u,245u,245u,246u,246u,247u,247u,247u,248u,247u,248u,248u,247u,248u,248u,249u,250u,249u,248u,249u,249u,249u,249u,248u,248u,249u,247u,247u,246u,246u,247u,246u,245u,246u,246u,245u,247u,246u,246u,246u,245u,246u,245u,245u,246u,246u,245u,246u,246u,246u,246u,245u,246u,248u,246u,248u,248u,248u,249u,249u,249u,250u,250u,250u,251u,250u,250u,250u,249u,250u,249u,249u,250u,249u,247u,248u,246u,247u,247u,246u,247u,247u,246u,247u,247u,247u,248u,247u,247u,248u,247u,247u,246u,246u,246u,246u,246u,246u,245u,247u,247u,246u,248u,248u,248u,249u,249u,249u,250u,249u,251u,250u,250u,251u,251u,251u,252u,250u,250u,250u,249u,249u,249u,248u,247u,247u,247u,248u,247u,246u,248u,247u,248u,248u,247u,248u,247u,248u,248u,247u,248u,248u,247u,249u,248u,248u,249u,248u,248u,248u,248u,249u,249u,250u,251u,251u,251u,252u,251u,251u,252u,251u,252u,252u,252u,252u,252u,252u,252u,251u,252u,250u,249u,249u,247u,247u,248u,248u,247u,247u,247u,248u,248u,248u,249u,247u,247u,247u,247u,249u,247u,247u,248u,247u,248u,247u,247u,248u,247u,246u,247u,246u,248u,249u,248u,248u,249u,248u,250u,250u,247u,250u,249u,247u,249u,248u,247u,248u,248u,248u,247u,246u,246u,246u,244u,245u,246u,246u,245u,245u,244u,245u,245u,245u,246u,245u,246u,246u,244u,246u,246u,245u,245u,246u,245u,247u,245u,247u,247u,247u,248u,248u,248u,249u,249u,250u,250u,249u,250u,251u,250u,251u,250u,249u,249u,250u,249u,250u,249u,249u,247u,248u,247u,247u,245u,247u,247u,246u,247u,246u,246u,246u,246u,245u,246u,246u,245u,246u,245u,246u,245u,245u,246u,245u,243u,245u,245u,245u,246u,245u,245u,247u,247u,248u,249u,248u,248u,250u,248u,248u,249u,249u,248u,249u,248u,248u,248u,246u,245u,246u,244u,246u,244u,245u,246u,245u,245u,245u,245u,244u,245u,243u,245u,245u,246u,245u,246u,245u,246u,246u,245u,246u,246u,246u,247u,246u,247u,247u,247u,248u,249u,248u,248u,249u,249u,250u,250u,249u,250u,250u,249u,250u,249u,248u,249u,247u,247u,247u,245u,245u,246u,245u,245u,245u,244u,245u,245u,245u,246u,246u,244u,246u,245u,245u,246u,245u,246u,247u,244u,245u,245u,245u,246u,246u,246u,248u,248u,248u,248u,248u,248u,250u,248u,249u,249u,248u,248u,248u,248u,249u,249u,248u,248u,248u,247u,247u,246u,245u,246u,245u,246u,246u,246u,247u,246u,246u,245u,245u,245u,246u,247u,245u,246u,245u,245u,246u,246u,245u,246u,245u,247u,247u,246u,247u,248u,248u,249u,249u,249u,250u,250u,250u,251u,250u,250u,251u,249u,250u,250u,249u,249u,248u,248u,249u,247u,247u,247u,246u,247u,247u,246u,247u,247u,245u,247u,246u,247u,247u,246u,247u,247u,246u,246u,247u,246u,247u,247u,245u,246u,245u,247u,248u,247u,248u,249u,249u,249u,250u,249u,251u,250u,250u,251u,250u,250u,251u,250u,250u,250u,249u,249u,249u,248u,248u,246u,247u,70u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,49u,245u,246u,247u,246u,247u,246u,246u,246u,246u,246u,247u,246u,247u,249u,248u,248u,249u,249u,249u,249u,250u,251u,251u,251u,251u,251u,251u,251u,250u,251u,251u,250u,250u,248u,248u,247u,247u,247u,247u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,247u,246u,247u,246u,246u,245u,246u,245u,246u,246u,246u,246u,246u,247u,248u,247u,248u,249u,248u,248u,249u,249u,249u,250u,249u,249u,249u,249u,250u,248u,248u,249u,248u,248u,248u,246u,246u,245u,245u,246u,246u,246u,246u,245u,245u,245u,245u,245u,245u,244u,244u,246u,245u,245u,244u,245u,246u,245u,246u,246u,246u,247u,247u,247u,248u,248u,249u,250u,249u,250u,250u,250u,251u,251u,251u,251u,250u,250u,250u,249u,249u,249u,248u,248u,248u,246u,248u,247u,247u,248u,246u,247u,248u,246u,247u,246u,247u,248u,247u,247u,248u,247u,247u,248u,247u,247u,248u,246u,247u,246u,248u,248u,247u,249u,249u,249u,249u,249u,249u,250u,250u,251u,251u,250u,251u,251u,250u,250u,249u,249u,250u,249u,248u,247u,246u,247u,246u,247u,248u,247u,248u,248u,247u,247u };
const uint8 CYCODE Cam_signal_wave2[Cam_signal_WAVE2_LENGTH] = { 128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u };

static uint8  Cam_signal_Wave1Chan;
static uint8  Cam_signal_Wave2Chan;
static uint8  Cam_signal_Wave1TD;
static uint8  Cam_signal_Wave2TD;


/*******************************************************************************
* Function Name: Cam_signal_Init
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
void Cam_signal_Init(void) 
{
	Cam_signal_VDAC8_Init();
	Cam_signal_VDAC8_SetSpeed(Cam_signal_HIGHSPEED);
	Cam_signal_VDAC8_SetRange(Cam_signal_DAC_RANGE);

	#if(Cam_signal_DAC_MODE == Cam_signal_CURRENT_MODE)
		Cam_signal_IDAC8_SetPolarity(Cam_signal_DAC_POL);
	#endif /* Cam_signal_DAC_MODE == Cam_signal_CURRENT_MODE */

	#if(Cam_signal_OUT_MODE == Cam_signal_BUFFER_MODE)
	   Cam_signal_BuffAmp_Init();
	#endif /* Cam_signal_OUT_MODE == Cam_signal_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	Cam_signal_Wave1TD = CyDmaTdAllocate();
	Cam_signal_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	Cam_signal_Wave1Setup(Cam_signal_wave1, Cam_signal_WAVE1_LENGTH) ;
	Cam_signal_Wave2Setup(Cam_signal_wave2, Cam_signal_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(Cam_signal_DacClk_PHASE)
	   Cam_signal_DacClk_SetPhase(Cam_signal_CLK_PHASE_0nS);
	#endif /* defined(Cam_signal_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: Cam_signal_Enable
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
void Cam_signal_Enable(void) 
{
	Cam_signal_VDAC8_Enable();

	#if(Cam_signal_OUT_MODE == Cam_signal_BUFFER_MODE)
	   Cam_signal_BuffAmp_Enable();
	#endif /* Cam_signal_OUT_MODE == Cam_signal_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(Cam_signal_Wave1Chan, 1u);
	(void)CyDmaChEnable(Cam_signal_Wave2Chan, 1u);
	
	/* set the initial value */
	Cam_signal_SetValue(0u);
	
	#if(Cam_signal_CLOCK_SRC == Cam_signal_CLOCK_INT)  	
	   Cam_signal_DacClk_Start();
	#endif /* Cam_signal_CLOCK_SRC == Cam_signal_CLOCK_INT */
}


/*******************************************************************************
* Function Name: Cam_signal_Start
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
void Cam_signal_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(Cam_signal_initVar == 0u)
	{
		Cam_signal_Init();
		Cam_signal_initVar = 1u;
	}
	
	Cam_signal_Enable();
}


/*******************************************************************************
* Function Name: Cam_signal_StartEx
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
void Cam_signal_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	Cam_signal_Wave1Setup(wavePtr1, sampleSize1);
	Cam_signal_Wave2Setup(wavePtr2, sampleSize2);
	Cam_signal_Start();
}


/*******************************************************************************
* Function Name: Cam_signal_Stop
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
void Cam_signal_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(Cam_signal_CLOCK_SRC == Cam_signal_CLOCK_INT)  	
	   Cam_signal_DacClk_Stop();
	#endif /* Cam_signal_CLOCK_SRC == Cam_signal_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(Cam_signal_Wave1Chan);
	(void)CyDmaChDisable(Cam_signal_Wave2Chan);

	/* Disable power to DAC */
	Cam_signal_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: Cam_signal_Wave1Setup
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
void Cam_signal_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (Cam_signal_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		Cam_signal_Wave1Chan = Cam_signal_Wave1_DMA_DmaInitialize(
		Cam_signal_Wave1_DMA_BYTES_PER_BURST, Cam_signal_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		Cam_signal_Wave1Chan = Cam_signal_Wave1_DMA_DmaInitialize(
		Cam_signal_Wave1_DMA_BYTES_PER_BURST, Cam_signal_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(Cam_signal_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(Cam_signal_Wave1TD, sampleSize, Cam_signal_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)Cam_signal_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(Cam_signal_Wave1TD, LO16((uint32)wavePtr), LO16(Cam_signal_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(Cam_signal_Wave1Chan, Cam_signal_Wave1TD);
}


/*******************************************************************************
* Function Name: Cam_signal_Wave2Setup
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
void Cam_signal_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (Cam_signal_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		Cam_signal_Wave2Chan = Cam_signal_Wave2_DMA_DmaInitialize(
		Cam_signal_Wave2_DMA_BYTES_PER_BURST, Cam_signal_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		Cam_signal_Wave2Chan = Cam_signal_Wave2_DMA_DmaInitialize(
		Cam_signal_Wave2_DMA_BYTES_PER_BURST, Cam_signal_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(Cam_signal_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(Cam_signal_Wave2TD, sampleSize, Cam_signal_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)Cam_signal_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(Cam_signal_Wave2TD, LO16((uint32)wavePtr), LO16(Cam_signal_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(Cam_signal_Wave2Chan, Cam_signal_Wave2TD);
}


/* [] END OF FILE */
