/*******************************************************************************
* File Name: Cam_signal_VDAC8_PM.c  
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

#include "Cam_signal_VDAC8.h"

static Cam_signal_VDAC8_backupStruct Cam_signal_VDAC8_backup;


/*******************************************************************************
* Function Name: Cam_signal_VDAC8_SaveConfig
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
void Cam_signal_VDAC8_SaveConfig(void) 
{
    if (!((Cam_signal_VDAC8_CR1 & Cam_signal_VDAC8_SRC_MASK) == Cam_signal_VDAC8_SRC_UDB))
    {
        Cam_signal_VDAC8_backup.data_value = Cam_signal_VDAC8_Data;
    }
}


/*******************************************************************************
* Function Name: Cam_signal_VDAC8_RestoreConfig
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
void Cam_signal_VDAC8_RestoreConfig(void) 
{
    if (!((Cam_signal_VDAC8_CR1 & Cam_signal_VDAC8_SRC_MASK) == Cam_signal_VDAC8_SRC_UDB))
    {
        if((Cam_signal_VDAC8_Strobe & Cam_signal_VDAC8_STRB_MASK) == Cam_signal_VDAC8_STRB_EN)
        {
            Cam_signal_VDAC8_Strobe &= (uint8)(~Cam_signal_VDAC8_STRB_MASK);
            Cam_signal_VDAC8_Data = Cam_signal_VDAC8_backup.data_value;
            Cam_signal_VDAC8_Strobe |= Cam_signal_VDAC8_STRB_EN;
        }
        else
        {
            Cam_signal_VDAC8_Data = Cam_signal_VDAC8_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: Cam_signal_VDAC8_Sleep
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
*  Cam_signal_VDAC8_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void Cam_signal_VDAC8_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(Cam_signal_VDAC8_ACT_PWR_EN == (Cam_signal_VDAC8_PWRMGR & Cam_signal_VDAC8_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        Cam_signal_VDAC8_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        Cam_signal_VDAC8_backup.enableState = 0u;
    }
    
    Cam_signal_VDAC8_Stop();
    Cam_signal_VDAC8_SaveConfig();
}


/*******************************************************************************
* Function Name: Cam_signal_VDAC8_Wakeup
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
*  Cam_signal_VDAC8_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Cam_signal_VDAC8_Wakeup(void) 
{
    Cam_signal_VDAC8_RestoreConfig();
    
    if(Cam_signal_VDAC8_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        Cam_signal_VDAC8_Enable();

        /* Restore the data register */
        Cam_signal_VDAC8_SetValue(Cam_signal_VDAC8_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
