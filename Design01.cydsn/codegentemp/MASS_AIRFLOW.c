/*******************************************************************************
* File Name: MASS_AIRFLOW.c  
* Version 1.90
*
* Description:
*  This file provides the source code to the API for the 8-bit Voltage DAC 
*  (VDAC8) User Module.
*
* Note:
*  Any unusual or non-standard behavior should be noted here. Other-
*  wise, this section should remain blank.
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "MASS_AIRFLOW.h"

#if (CY_PSOC5A)
#include <CyLib.h>
#endif /* CY_PSOC5A */

uint8 MASS_AIRFLOW_initVar = 0u;

#if (CY_PSOC5A)
    static uint8 MASS_AIRFLOW_restoreVal = 0u;
#endif /* CY_PSOC5A */

#if (CY_PSOC5A)
    static MASS_AIRFLOW_backupStruct MASS_AIRFLOW_backup;
#endif /* CY_PSOC5A */


/*******************************************************************************
* Function Name: MASS_AIRFLOW_Init
********************************************************************************
* Summary:
*  Initialize to the schematic state.
* 
* Parameters:
*  void:
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_Init(void) 
{
    MASS_AIRFLOW_CR0 = (MASS_AIRFLOW_MODE_V );

    /* Set default data source */
    #if(MASS_AIRFLOW_DEFAULT_DATA_SRC != 0 )
        MASS_AIRFLOW_CR1 = (MASS_AIRFLOW_DEFAULT_CNTL | MASS_AIRFLOW_DACBUS_ENABLE) ;
    #else
        MASS_AIRFLOW_CR1 = (MASS_AIRFLOW_DEFAULT_CNTL | MASS_AIRFLOW_DACBUS_DISABLE) ;
    #endif /* (MASS_AIRFLOW_DEFAULT_DATA_SRC != 0 ) */

    /* Set default strobe mode */
    #if(MASS_AIRFLOW_DEFAULT_STRB != 0)
        MASS_AIRFLOW_Strobe |= MASS_AIRFLOW_STRB_EN ;
    #endif/* (MASS_AIRFLOW_DEFAULT_STRB != 0) */

    /* Set default range */
    MASS_AIRFLOW_SetRange(MASS_AIRFLOW_DEFAULT_RANGE); 

    /* Set default speed */
    MASS_AIRFLOW_SetSpeed(MASS_AIRFLOW_DEFAULT_SPEED);
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_Enable
********************************************************************************
* Summary:
*  Enable the VDAC8
* 
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_Enable(void) 
{
    MASS_AIRFLOW_PWRMGR |= MASS_AIRFLOW_ACT_PWR_EN;
    MASS_AIRFLOW_STBY_PWRMGR |= MASS_AIRFLOW_STBY_PWR_EN;

    /*This is to restore the value of register CR0 ,
    which is modified  in Stop API , this prevents misbehaviour of VDAC */
    #if (CY_PSOC5A)
        if(MASS_AIRFLOW_restoreVal == 1u) 
        {
             MASS_AIRFLOW_CR0 = MASS_AIRFLOW_backup.data_value;
             MASS_AIRFLOW_restoreVal = 0u;
        }
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as
*  executing the stop function.
*
* Parameters:
*  Power: Sets power level between off (0) and (3) high power
*
* Return:
*  void 
*
* Global variables:
*  MASS_AIRFLOW_initVar: Is modified when this function is called for the 
*  first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void MASS_AIRFLOW_Start(void)  
{
    /* Hardware initiazation only needs to occure the first time */
    if(MASS_AIRFLOW_initVar == 0u)
    { 
        MASS_AIRFLOW_Init();
        MASS_AIRFLOW_initVar = 1u;
    }

    /* Enable power to DAC */
    MASS_AIRFLOW_Enable();

    /* Set default value */
    MASS_AIRFLOW_SetValue(MASS_AIRFLOW_DEFAULT_DATA); 
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_Stop
********************************************************************************
*
* Summary:
*  Powers down DAC to lowest power state.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_Stop(void) 
{
    /* Disble power to DAC */
    MASS_AIRFLOW_PWRMGR &= (uint8)(~MASS_AIRFLOW_ACT_PWR_EN);
    MASS_AIRFLOW_STBY_PWRMGR &= (uint8)(~MASS_AIRFLOW_STBY_PWR_EN);

    /* This is a work around for PSoC5A  ,
    this sets VDAC to current mode with output off */
    #if (CY_PSOC5A)
        MASS_AIRFLOW_backup.data_value = MASS_AIRFLOW_CR0;
        MASS_AIRFLOW_CR0 = MASS_AIRFLOW_CUR_MODE_OUT_OFF;
        MASS_AIRFLOW_restoreVal = 1u;
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_SetSpeed
********************************************************************************
*
* Summary:
*  Set DAC speed
*
* Parameters:
*  power: Sets speed value
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_SetSpeed(uint8 speed) 
{
    /* Clear power mask then write in new value */
    MASS_AIRFLOW_CR0 &= (uint8)(~MASS_AIRFLOW_HS_MASK);
    MASS_AIRFLOW_CR0 |=  (speed & MASS_AIRFLOW_HS_MASK);
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_SetRange
********************************************************************************
*
* Summary:
*  Set one of three current ranges.
*
* Parameters:
*  Range: Sets one of Three valid ranges.
*
* Return:
*  void 
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_SetRange(uint8 range) 
{
    MASS_AIRFLOW_CR0 &= (uint8)(~MASS_AIRFLOW_RANGE_MASK);      /* Clear existing mode */
    MASS_AIRFLOW_CR0 |= (range & MASS_AIRFLOW_RANGE_MASK);      /*  Set Range  */
    MASS_AIRFLOW_DacTrim();
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_SetValue
********************************************************************************
*
* Summary:
*  Set 8-bit DAC value
*
* Parameters:  
*  value:  Sets DAC value between 0 and 255.
*
* Return: 
*  void 
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_SetValue(uint8 value) 
{
    #if (CY_PSOC5A)
        uint8 MASS_AIRFLOW_intrStatus = CyEnterCriticalSection();
    #endif /* CY_PSOC5A */

    MASS_AIRFLOW_Data = value;                /*  Set Value  */

    /* PSOC5A requires a double write */
    /* Exit Critical Section */
    #if (CY_PSOC5A)
        MASS_AIRFLOW_Data = value;
        CyExitCriticalSection(MASS_AIRFLOW_intrStatus);
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_DacTrim
********************************************************************************
*
* Summary:
*  Set the trim value for the given range.
*
* Parameters:
*  range:  1V or 4V range.  See constants.
*
* Return:
*  void
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void MASS_AIRFLOW_DacTrim(void) 
{
    uint8 mode;

    mode = (uint8)((MASS_AIRFLOW_CR0 & MASS_AIRFLOW_RANGE_MASK) >> 2) + MASS_AIRFLOW_TRIM_M7_1V_RNG_OFFSET;
    MASS_AIRFLOW_TR = CY_GET_XTND_REG8((uint8 *)(MASS_AIRFLOW_DAC_TRIM_BASE + mode));
}


/* [] END OF FILE */
