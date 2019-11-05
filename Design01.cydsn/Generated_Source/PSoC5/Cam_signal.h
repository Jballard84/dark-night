/*******************************************************************************
* File Name: Cam_signal.h  
* Version 2.10
*
* Description:
*  This file contains the function prototypes and constants used in
*  the 8-bit Waveform DAC (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_WaveDAC8_Cam_signal_H) 
#define CY_WaveDAC8_Cam_signal_H

#include "cytypes.h"
#include "cyfitter.h"
#include <Cam_signal_Wave1_DMA_dma.h>
#include <Cam_signal_Wave2_DMA_dma.h>
#include <Cam_signal_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define Cam_signal_WAVE1_TYPE     (11u)     /* Waveform for wave1 */
#define Cam_signal_WAVE2_TYPE     (2u)     /* Waveform for wave2 */
#define Cam_signal_SINE_WAVE      (0u)
#define Cam_signal_SQUARE_WAVE    (1u)
#define Cam_signal_TRIANGLE_WAVE  (2u)
#define Cam_signal_SAWTOOTH_WAVE  (3u)
#define Cam_signal_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define Cam_signal_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define Cam_signal_WAVE1_LENGTH   (3749u)   /* Length for wave1 */
#define Cam_signal_WAVE2_LENGTH   (100u)   /* Length for wave2 */
	
#define Cam_signal_DEFAULT_RANGE    (17u) /* Default DAC range */
#define Cam_signal_DAC_RANGE_1V     (0u)
#define Cam_signal_DAC_RANGE_1V_BUF (16u)
#define Cam_signal_DAC_RANGE_4V     (1u)
#define Cam_signal_DAC_RANGE_4V_BUF (17u)
#define Cam_signal_VOLT_MODE        (0u)
#define Cam_signal_CURRENT_MODE     (1u)
#define Cam_signal_DAC_MODE         (((Cam_signal_DEFAULT_RANGE == Cam_signal_DAC_RANGE_1V) || \
									  (Cam_signal_DEFAULT_RANGE == Cam_signal_DAC_RANGE_4V) || \
							  		  (Cam_signal_DEFAULT_RANGE == Cam_signal_DAC_RANGE_1V_BUF) || \
									  (Cam_signal_DEFAULT_RANGE == Cam_signal_DAC_RANGE_4V_BUF)) ? \
									   Cam_signal_VOLT_MODE : Cam_signal_CURRENT_MODE)

#define Cam_signal_DACMODE Cam_signal_DAC_MODE /* legacy definition for backward compatibility */

#define Cam_signal_DIRECT_MODE (0u)
#define Cam_signal_BUFFER_MODE (1u)
#define Cam_signal_OUT_MODE    (((Cam_signal_DEFAULT_RANGE == Cam_signal_DAC_RANGE_1V_BUF) || \
								 (Cam_signal_DEFAULT_RANGE == Cam_signal_DAC_RANGE_4V_BUF)) ? \
								  Cam_signal_BUFFER_MODE : Cam_signal_DIRECT_MODE)

#if(Cam_signal_OUT_MODE == Cam_signal_BUFFER_MODE)
    #include <Cam_signal_BuffAmp.h>
#endif /* Cam_signal_OUT_MODE == Cam_signal_BUFFER_MODE */

#define Cam_signal_CLOCK_INT      (1u)
#define Cam_signal_CLOCK_EXT      (0u)
#define Cam_signal_CLOCK_SRC      (0u)

#if(Cam_signal_CLOCK_SRC == Cam_signal_CLOCK_INT)  
	#include <Cam_signal_DacClk.h>
	#if defined(Cam_signal_DacClk_PHASE)
		#define Cam_signal_CLK_PHASE_0nS (1u)
	#endif /* defined(Cam_signal_DacClk_PHASE) */
#endif /* Cam_signal_CLOCK_SRC == Cam_signal_CLOCK_INT */

#if (CY_PSOC3)
	#define Cam_signal_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define Cam_signal_Wave1_DMA_BYTES_PER_BURST      (1u)
#define Cam_signal_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define Cam_signal_Wave2_DMA_BYTES_PER_BURST      (1u)
#define Cam_signal_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}Cam_signal_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void Cam_signal_Start(void)             ;
void Cam_signal_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void Cam_signal_Init(void)              ;
void Cam_signal_Enable(void)            ;
void Cam_signal_Stop(void)              ;

void Cam_signal_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void Cam_signal_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void Cam_signal_Sleep(void)             ;
void Cam_signal_Wakeup(void)            ;

#define Cam_signal_SetSpeed       Cam_signal_VDAC8_SetSpeed
#define Cam_signal_SetRange       Cam_signal_VDAC8_SetRange
#define Cam_signal_SetValue       Cam_signal_VDAC8_SetValue
#define Cam_signal_DacTrim        Cam_signal_VDAC8_DacTrim
#define Cam_signal_SaveConfig     Cam_signal_VDAC8_SaveConfig
#define Cam_signal_RestoreConfig  Cam_signal_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 Cam_signal_initVar;

extern const uint8 CYCODE Cam_signal_wave1[Cam_signal_WAVE1_LENGTH];
extern const uint8 CYCODE Cam_signal_wave2[Cam_signal_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(Cam_signal_DAC_MODE == Cam_signal_VOLT_MODE)
    #define Cam_signal_RANGE_1V       (0x00u)
    #define Cam_signal_RANGE_4V       (0x04u)
#else /* current mode */
    #define Cam_signal_RANGE_32uA     (0x00u)
    #define Cam_signal_RANGE_255uA    (0x04u)
    #define Cam_signal_RANGE_2mA      (0x08u)
    #define Cam_signal_RANGE_2048uA   Cam_signal_RANGE_2mA
#endif /* Cam_signal_DAC_MODE == Cam_signal_VOLT_MODE */

/* Power setting for SetSpeed API */
#define Cam_signal_LOWSPEED       (0x00u)
#define Cam_signal_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define Cam_signal_DAC8__D Cam_signal_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define Cam_signal_HS_MASK        (0x02u)
#define Cam_signal_HS_LOWPOWER    (0x00u)
#define Cam_signal_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define Cam_signal_MODE_MASK      (0x10u)
#define Cam_signal_MODE_V         (0x00u)
#define Cam_signal_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define Cam_signal_RANGE_MASK     (0x0Cu)
#define Cam_signal_RANGE_0        (0x00u)
#define Cam_signal_RANGE_1        (0x04u)
#define Cam_signal_RANGE_2        (0x08u)
#define Cam_signal_RANGE_3        (0x0Cu)
#define Cam_signal_IDIR_MASK      (0x04u)

#define Cam_signal_DAC_RANGE      ((uint8)(17u << 2u) & Cam_signal_RANGE_MASK)
#define Cam_signal_DAC_POL        ((uint8)(17u >> 1u) & Cam_signal_IDIR_MASK)


#endif /* CY_WaveDAC8_Cam_signal_H  */

/* [] END OF FILE */
