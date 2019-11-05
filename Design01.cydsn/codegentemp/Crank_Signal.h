/*******************************************************************************
* File Name: Crank_Signal.h  
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

#if !defined(CY_WaveDAC8_Crank_Signal_H) 
#define CY_WaveDAC8_Crank_Signal_H

#include "cytypes.h"
#include "cyfitter.h"
#include <Crank_Signal_Wave1_DMA_dma.h>
#include <Crank_Signal_Wave2_DMA_dma.h>
#include <Crank_Signal_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define Crank_Signal_WAVE1_TYPE     (11u)     /* Waveform for wave1 */
#define Crank_Signal_WAVE2_TYPE     (2u)     /* Waveform for wave2 */
#define Crank_Signal_SINE_WAVE      (0u)
#define Crank_Signal_SQUARE_WAVE    (1u)
#define Crank_Signal_TRIANGLE_WAVE  (2u)
#define Crank_Signal_SAWTOOTH_WAVE  (3u)
#define Crank_Signal_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define Crank_Signal_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define Crank_Signal_WAVE1_LENGTH   (3749u)   /* Length for wave1 */
#define Crank_Signal_WAVE2_LENGTH   (100u)   /* Length for wave2 */
	
#define Crank_Signal_DEFAULT_RANGE    (16u) /* Default DAC range */
#define Crank_Signal_DAC_RANGE_1V     (0u)
#define Crank_Signal_DAC_RANGE_1V_BUF (16u)
#define Crank_Signal_DAC_RANGE_4V     (1u)
#define Crank_Signal_DAC_RANGE_4V_BUF (17u)
#define Crank_Signal_VOLT_MODE        (0u)
#define Crank_Signal_CURRENT_MODE     (1u)
#define Crank_Signal_DAC_MODE         (((Crank_Signal_DEFAULT_RANGE == Crank_Signal_DAC_RANGE_1V) || \
									  (Crank_Signal_DEFAULT_RANGE == Crank_Signal_DAC_RANGE_4V) || \
							  		  (Crank_Signal_DEFAULT_RANGE == Crank_Signal_DAC_RANGE_1V_BUF) || \
									  (Crank_Signal_DEFAULT_RANGE == Crank_Signal_DAC_RANGE_4V_BUF)) ? \
									   Crank_Signal_VOLT_MODE : Crank_Signal_CURRENT_MODE)

#define Crank_Signal_DACMODE Crank_Signal_DAC_MODE /* legacy definition for backward compatibility */

#define Crank_Signal_DIRECT_MODE (0u)
#define Crank_Signal_BUFFER_MODE (1u)
#define Crank_Signal_OUT_MODE    (((Crank_Signal_DEFAULT_RANGE == Crank_Signal_DAC_RANGE_1V_BUF) || \
								 (Crank_Signal_DEFAULT_RANGE == Crank_Signal_DAC_RANGE_4V_BUF)) ? \
								  Crank_Signal_BUFFER_MODE : Crank_Signal_DIRECT_MODE)

#if(Crank_Signal_OUT_MODE == Crank_Signal_BUFFER_MODE)
    #include <Crank_Signal_BuffAmp.h>
#endif /* Crank_Signal_OUT_MODE == Crank_Signal_BUFFER_MODE */

#define Crank_Signal_CLOCK_INT      (1u)
#define Crank_Signal_CLOCK_EXT      (0u)
#define Crank_Signal_CLOCK_SRC      (0u)

#if(Crank_Signal_CLOCK_SRC == Crank_Signal_CLOCK_INT)  
	#include <Crank_Signal_DacClk.h>
	#if defined(Crank_Signal_DacClk_PHASE)
		#define Crank_Signal_CLK_PHASE_0nS (1u)
	#endif /* defined(Crank_Signal_DacClk_PHASE) */
#endif /* Crank_Signal_CLOCK_SRC == Crank_Signal_CLOCK_INT */

#if (CY_PSOC3)
	#define Crank_Signal_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define Crank_Signal_Wave1_DMA_BYTES_PER_BURST      (1u)
#define Crank_Signal_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define Crank_Signal_Wave2_DMA_BYTES_PER_BURST      (1u)
#define Crank_Signal_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}Crank_Signal_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void Crank_Signal_Start(void)             ;
void Crank_Signal_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void Crank_Signal_Init(void)              ;
void Crank_Signal_Enable(void)            ;
void Crank_Signal_Stop(void)              ;

void Crank_Signal_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void Crank_Signal_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void Crank_Signal_Sleep(void)             ;
void Crank_Signal_Wakeup(void)            ;

#define Crank_Signal_SetSpeed       Crank_Signal_VDAC8_SetSpeed
#define Crank_Signal_SetRange       Crank_Signal_VDAC8_SetRange
#define Crank_Signal_SetValue       Crank_Signal_VDAC8_SetValue
#define Crank_Signal_DacTrim        Crank_Signal_VDAC8_DacTrim
#define Crank_Signal_SaveConfig     Crank_Signal_VDAC8_SaveConfig
#define Crank_Signal_RestoreConfig  Crank_Signal_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 Crank_Signal_initVar;

extern const uint8 CYCODE Crank_Signal_wave1[Crank_Signal_WAVE1_LENGTH];
extern const uint8 CYCODE Crank_Signal_wave2[Crank_Signal_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(Crank_Signal_DAC_MODE == Crank_Signal_VOLT_MODE)
    #define Crank_Signal_RANGE_1V       (0x00u)
    #define Crank_Signal_RANGE_4V       (0x04u)
#else /* current mode */
    #define Crank_Signal_RANGE_32uA     (0x00u)
    #define Crank_Signal_RANGE_255uA    (0x04u)
    #define Crank_Signal_RANGE_2mA      (0x08u)
    #define Crank_Signal_RANGE_2048uA   Crank_Signal_RANGE_2mA
#endif /* Crank_Signal_DAC_MODE == Crank_Signal_VOLT_MODE */

/* Power setting for SetSpeed API */
#define Crank_Signal_LOWSPEED       (0x00u)
#define Crank_Signal_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define Crank_Signal_DAC8__D Crank_Signal_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define Crank_Signal_HS_MASK        (0x02u)
#define Crank_Signal_HS_LOWPOWER    (0x00u)
#define Crank_Signal_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define Crank_Signal_MODE_MASK      (0x10u)
#define Crank_Signal_MODE_V         (0x00u)
#define Crank_Signal_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define Crank_Signal_RANGE_MASK     (0x0Cu)
#define Crank_Signal_RANGE_0        (0x00u)
#define Crank_Signal_RANGE_1        (0x04u)
#define Crank_Signal_RANGE_2        (0x08u)
#define Crank_Signal_RANGE_3        (0x0Cu)
#define Crank_Signal_IDIR_MASK      (0x04u)

#define Crank_Signal_DAC_RANGE      ((uint8)(16u << 2u) & Crank_Signal_RANGE_MASK)
#define Crank_Signal_DAC_POL        ((uint8)(16u >> 1u) & Crank_Signal_IDIR_MASK)


#endif /* CY_WaveDAC8_Crank_Signal_H  */

/* [] END OF FILE */
