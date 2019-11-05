/*******************************************************************************
* File Name: MASS_AIRFLOW_PM.c  
* Version 1.90
*
* Description:
*  This file provides the power management source code to API for the
*  VDAC8.  
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "MASS_AIRFLOW.h"

static MASS_AIRFLOW_backupStruct MASS_AIRFLOW_backup;


/*******************************************************************************
* Function Name: MASS_AIRFLOW_SaveConfig
********************************************************************************
* Summary:
*  Save the current user configuration
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void MASS_AIRFLOW_SaveConfig(void) 
{
    if (!((MASS_AIRFLOW_CR1 & MASS_AIRFLOW_SRC_MASK) == MASS_AIRFLOW_SRC_UDB))
    {
        MASS_AIRFLOW_backup.data_value = MASS_AIRFLOW_Data;
    }
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
*******************************************************************************/
void MASS_AIRFLOW_RestoreConfig(void) 
{
    if (!((MASS_AIRFLOW_CR1 & MASS_AIRFLOW_SRC_MASK) == MASS_AIRFLOW_SRC_UDB))
    {
        if((MASS_AIRFLOW_Strobe & MASS_AIRFLOW_STRB_MASK) == MASS_AIRFLOW_STRB_EN)
        {
            MASS_AIRFLOW_Strobe &= (uint8)(~MASS_AIRFLOW_STRB_MASK);
            MASS_AIRFLOW_Data = MASS_AIRFLOW_backup.data_value;
            MASS_AIRFLOW_Strobe |= MASS_AIRFLOW_STRB_EN;
        }
        else
        {
            MASS_AIRFLOW_Data = MASS_AIRFLOW_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_Sleep
********************************************************************************
* Summary:
*  Stop and Save the user configuration
*
* Parameters:  
*  void:  
*
* Return: 
*  void
*
* Global variables:
*  MASS_AIRFLOW_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void MASS_AIRFLOW_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(MASS_AIRFLOW_ACT_PWR_EN == (MASS_AIRFLOW_PWRMGR & MASS_AIRFLOW_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        MASS_AIRFLOW_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        MASS_AIRFLOW_backup.enableState = 0u;
    }
    
    MASS_AIRFLOW_Stop();
    MASS_AIRFLOW_SaveConfig();
}


/*******************************************************************************
* Function Name: MASS_AIRFLOW_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  MASS_AIRFLOW_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void MASS_AIRFLOW_Wakeup(void) 
{
    MASS_AIRFLOW_RestoreConfig();
    
    if(MASS_AIRFLOW_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        MASS_AIRFLOW_Enable();

        /* Restore the data register */
        MASS_AIRFLOW_SetValue(MASS_AIRFLOW_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
