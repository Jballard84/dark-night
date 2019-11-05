/*******************************************************************************
* File Name: Crank_Signal_VDAC8_PM.c  
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

#include "Crank_Signal_VDAC8.h"

static Crank_Signal_VDAC8_backupStruct Crank_Signal_VDAC8_backup;


/*******************************************************************************
* Function Name: Crank_Signal_VDAC8_SaveConfig
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
void Crank_Signal_VDAC8_SaveConfig(void) 
{
    if (!((Crank_Signal_VDAC8_CR1 & Crank_Signal_VDAC8_SRC_MASK) == Crank_Signal_VDAC8_SRC_UDB))
    {
        Crank_Signal_VDAC8_backup.data_value = Crank_Signal_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: Crank_Signal_VDAC8_RestoreConfig
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
void Crank_Signal_VDAC8_RestoreConfig(void) 
{
    if (!((Crank_Signal_VDAC8_CR1 & Crank_Signal_VDAC8_SRC_MASK) == Crank_Signal_VDAC8_SRC_UDB))
    {
        if((Crank_Signal_VDAC8_Strobe & Crank_Signal_VDAC8_STRB_MASK) == Crank_Signal_VDAC8_STRB_EN)
        {
            Crank_Signal_VDAC8_Strobe &= (uint8)(~Crank_Signal_VDAC8_STRB_MASK);
            Crank_Signal_VDAC8_Data = Crank_Signal_VDAC8_backup.data_value;
            Crank_Signal_VDAC8_Strobe |= Crank_Signal_VDAC8_STRB_EN;
        }
        else
        {
            Crank_Signal_VDAC8_Data = Crank_Signal_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: Crank_Signal_VDAC8_Sleep
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
*  Crank_Signal_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void Crank_Signal_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(Crank_Signal_VDAC8_ACT_PWR_EN == (Crank_Signal_VDAC8_PWRMGR & Crank_Signal_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        Crank_Signal_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        Crank_Signal_VDAC8_backup.enableState = 0u;
    }
    
    Crank_Signal_VDAC8_Stop();
    Crank_Signal_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: Crank_Signal_VDAC8_Wakeup
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
*  Crank_Signal_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Crank_Signal_VDAC8_Wakeup(void) 
{
    Crank_Signal_VDAC8_RestoreConfig();
    
    if(Crank_Signal_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        Crank_Signal_VDAC8_Enable();

        /* Restore the data register */
        Crank_Signal_VDAC8_SetValue(Crank_Signal_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
