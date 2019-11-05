/*******************************************************************************
* File Name: Timer_Sytem_PM.c
* Version 2.80
*
*  Description:
*     This file provides the power management source code to API for the
*     Timer.
*
*   Note:
*     None
*
*******************************************************************************
* Copyright 2008-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#include "Timer_Sytem.h"

static Timer_Sytem_backupStruct Timer_Sytem_backup;


/*******************************************************************************
* Function Name: Timer_Sytem_SaveConfig
********************************************************************************
*
* Summary:
*     Save the current user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  Timer_Sytem_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void Timer_Sytem_SaveConfig(void) 
{
    #if (!Timer_Sytem_UsingFixedFunction)
        Timer_Sytem_backup.TimerUdb = Timer_Sytem_ReadCounter();
        Timer_Sytem_backup.InterruptMaskValue = Timer_Sytem_STATUS_MASK;
        #if (Timer_Sytem_UsingHWCaptureCounter)
            Timer_Sytem_backup.TimerCaptureCounter = Timer_Sytem_ReadCaptureCount();
        #endif /* Back Up capture counter register  */

        #if(!Timer_Sytem_UDB_CONTROL_REG_REMOVED)
            Timer_Sytem_backup.TimerControlRegister = Timer_Sytem_ReadControlRegister();
        #endif /* Backup the enable state of the Timer component */
    #endif /* Backup non retention registers in UDB implementation. All fixed function registers are retention */
}


/*******************************************************************************
* Function Name: Timer_Sytem_RestoreConfig
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
* Global variables:
*  Timer_Sytem_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void Timer_Sytem_RestoreConfig(void) 
{   
    #if (!Timer_Sytem_UsingFixedFunction)

        Timer_Sytem_WriteCounter(Timer_Sytem_backup.TimerUdb);
        Timer_Sytem_STATUS_MASK =Timer_Sytem_backup.InterruptMaskValue;
        #if (Timer_Sytem_UsingHWCaptureCounter)
            Timer_Sytem_SetCaptureCount(Timer_Sytem_backup.TimerCaptureCounter);
        #endif /* Restore Capture counter register*/

        #if(!Timer_Sytem_UDB_CONTROL_REG_REMOVED)
            Timer_Sytem_WriteControlRegister(Timer_Sytem_backup.TimerControlRegister);
        #endif /* Restore the enable state of the Timer component */
    #endif /* Restore non retention registers in the UDB implementation only */
}


/*******************************************************************************
* Function Name: Timer_Sytem_Sleep
********************************************************************************
*
* Summary:
*     Stop and Save the user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  Timer_Sytem_backup.TimerEnableState:  Is modified depending on the
*  enable state of the block before entering sleep mode.
*
*******************************************************************************/
void Timer_Sytem_Sleep(void) 
{
    #if(!Timer_Sytem_UDB_CONTROL_REG_REMOVED)
        /* Save Counter's enable state */
        if(Timer_Sytem_CTRL_ENABLE == (Timer_Sytem_CONTROL & Timer_Sytem_CTRL_ENABLE))
        {
            /* Timer is enabled */
            Timer_Sytem_backup.TimerEnableState = 1u;
        }
        else
        {
            /* Timer is disabled */
            Timer_Sytem_backup.TimerEnableState = 0u;
        }
    #endif /* Back up enable state from the Timer control register */
    Timer_Sytem_Stop();
    Timer_Sytem_SaveConfig();
}


/*******************************************************************************
* Function Name: Timer_Sytem_Wakeup
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
*  Timer_Sytem_backup.enableState:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Timer_Sytem_Wakeup(void) 
{
    Timer_Sytem_RestoreConfig();
    #if(!Timer_Sytem_UDB_CONTROL_REG_REMOVED)
        if(Timer_Sytem_backup.TimerEnableState == 1u)
        {     /* Enable Timer's operation */
                Timer_Sytem_Enable();
        } /* Do nothing if Timer was disabled before */
    #endif /* Remove this code section if Control register is removed */
}


/* [] END OF FILE */
