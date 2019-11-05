/*******************************************************************************
* File Name: Crank_Signal_BuffAmp_PM.c
* Version 1.90
*
* Description:
*  This file provides the power management source code to the API for the 
*  OpAmp (Analog Buffer) component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Crank_Signal_BuffAmp.h"

static Crank_Signal_BuffAmp_BACKUP_STRUCT  Crank_Signal_BuffAmp_backup;


/*******************************************************************************  
* Function Name: Crank_Signal_BuffAmp_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration registers.
* 
* Parameters:
*  void
* 
* Return:
*  void
*
*******************************************************************************/
void Crank_Signal_BuffAmp_SaveConfig(void) 
{
    /* Nothing to save as registers are System reset on retention flops */
}


/*******************************************************************************  
* Function Name: Crank_Signal_BuffAmp_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration registers.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void Crank_Signal_BuffAmp_RestoreConfig(void) 
{
    /* Nothing to restore */
}


/*******************************************************************************   
* Function Name: Crank_Signal_BuffAmp_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves its configuration. Should be called 
*  just prior to entering sleep.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  Crank_Signal_BuffAmp_backup: The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void Crank_Signal_BuffAmp_Sleep(void) 
{
    /* Save OpAmp enable state */
    if((Crank_Signal_BuffAmp_PM_ACT_CFG_REG & Crank_Signal_BuffAmp_ACT_PWR_EN) != 0u)
    {
        /* Component is enabled */
        Crank_Signal_BuffAmp_backup.enableState = 1u;
         /* Stops the component */
         Crank_Signal_BuffAmp_Stop();
    }
    else
    {
        /* Component is disabled */
        Crank_Signal_BuffAmp_backup.enableState = 0u;
    }
    /* Saves the configuration */
    Crank_Signal_BuffAmp_SaveConfig();
}


/*******************************************************************************  
* Function Name: Crank_Signal_BuffAmp_Wakeup
********************************************************************************
*
* Summary:
*  Enables block's operation and restores its configuration. Should be called
*  just after awaking from sleep.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  Crank_Signal_BuffAmp_backup: The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void Crank_Signal_BuffAmp_Wakeup(void) 
{
    /* Restore the user configuration */
    Crank_Signal_BuffAmp_RestoreConfig();

    /* Enables the component operation */
    if(Crank_Signal_BuffAmp_backup.enableState == 1u)
    {
        Crank_Signal_BuffAmp_Enable();
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
