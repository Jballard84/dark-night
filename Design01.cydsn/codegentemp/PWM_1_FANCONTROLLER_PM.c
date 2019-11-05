/*******************************************************************************
* File Name: PWM_1_FANCONTROLLER_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_1_FANCONTROLLER.h"

static PWM_1_FANCONTROLLER_backupStruct PWM_1_FANCONTROLLER_backup;


/*******************************************************************************
* Function Name: PWM_1_FANCONTROLLER_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_1_FANCONTROLLER_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_1_FANCONTROLLER_SaveConfig(void) 
{

    #if(!PWM_1_FANCONTROLLER_UsingFixedFunction)
        #if(!PWM_1_FANCONTROLLER_PWMModeIsCenterAligned)
            PWM_1_FANCONTROLLER_backup.PWMPeriod = PWM_1_FANCONTROLLER_ReadPeriod();
        #endif /* (!PWM_1_FANCONTROLLER_PWMModeIsCenterAligned) */
        PWM_1_FANCONTROLLER_backup.PWMUdb = PWM_1_FANCONTROLLER_ReadCounter();
        #if (PWM_1_FANCONTROLLER_UseStatus)
            PWM_1_FANCONTROLLER_backup.InterruptMaskValue = PWM_1_FANCONTROLLER_STATUS_MASK;
        #endif /* (PWM_1_FANCONTROLLER_UseStatus) */

        #if(PWM_1_FANCONTROLLER_DeadBandMode == PWM_1_FANCONTROLLER__B_PWM__DBM_256_CLOCKS || \
            PWM_1_FANCONTROLLER_DeadBandMode == PWM_1_FANCONTROLLER__B_PWM__DBM_2_4_CLOCKS)
            PWM_1_FANCONTROLLER_backup.PWMdeadBandValue = PWM_1_FANCONTROLLER_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_1_FANCONTROLLER_KillModeMinTime)
             PWM_1_FANCONTROLLER_backup.PWMKillCounterPeriod = PWM_1_FANCONTROLLER_ReadKillTime();
        #endif /* (PWM_1_FANCONTROLLER_KillModeMinTime) */

        #if(PWM_1_FANCONTROLLER_UseControl)
            PWM_1_FANCONTROLLER_backup.PWMControlRegister = PWM_1_FANCONTROLLER_ReadControlRegister();
        #endif /* (PWM_1_FANCONTROLLER_UseControl) */
    #endif  /* (!PWM_1_FANCONTROLLER_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_1_FANCONTROLLER_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_1_FANCONTROLLER_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_1_FANCONTROLLER_RestoreConfig(void) 
{
        #if(!PWM_1_FANCONTROLLER_UsingFixedFunction)
            #if(!PWM_1_FANCONTROLLER_PWMModeIsCenterAligned)
                PWM_1_FANCONTROLLER_WritePeriod(PWM_1_FANCONTROLLER_backup.PWMPeriod);
            #endif /* (!PWM_1_FANCONTROLLER_PWMModeIsCenterAligned) */

            PWM_1_FANCONTROLLER_WriteCounter(PWM_1_FANCONTROLLER_backup.PWMUdb);

            #if (PWM_1_FANCONTROLLER_UseStatus)
                PWM_1_FANCONTROLLER_STATUS_MASK = PWM_1_FANCONTROLLER_backup.InterruptMaskValue;
            #endif /* (PWM_1_FANCONTROLLER_UseStatus) */

            #if(PWM_1_FANCONTROLLER_DeadBandMode == PWM_1_FANCONTROLLER__B_PWM__DBM_256_CLOCKS || \
                PWM_1_FANCONTROLLER_DeadBandMode == PWM_1_FANCONTROLLER__B_PWM__DBM_2_4_CLOCKS)
                PWM_1_FANCONTROLLER_WriteDeadTime(PWM_1_FANCONTROLLER_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_1_FANCONTROLLER_KillModeMinTime)
                PWM_1_FANCONTROLLER_WriteKillTime(PWM_1_FANCONTROLLER_backup.PWMKillCounterPeriod);
            #endif /* (PWM_1_FANCONTROLLER_KillModeMinTime) */

            #if(PWM_1_FANCONTROLLER_UseControl)
                PWM_1_FANCONTROLLER_WriteControlRegister(PWM_1_FANCONTROLLER_backup.PWMControlRegister);
            #endif /* (PWM_1_FANCONTROLLER_UseControl) */
        #endif  /* (!PWM_1_FANCONTROLLER_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_1_FANCONTROLLER_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_1_FANCONTROLLER_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_1_FANCONTROLLER_Sleep(void) 
{
    #if(PWM_1_FANCONTROLLER_UseControl)
        if(PWM_1_FANCONTROLLER_CTRL_ENABLE == (PWM_1_FANCONTROLLER_CONTROL & PWM_1_FANCONTROLLER_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_1_FANCONTROLLER_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_1_FANCONTROLLER_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_1_FANCONTROLLER_UseControl) */

    /* Stop component */
    PWM_1_FANCONTROLLER_Stop();

    /* Save registers configuration */
    PWM_1_FANCONTROLLER_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_1_FANCONTROLLER_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_1_FANCONTROLLER_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_1_FANCONTROLLER_Wakeup(void) 
{
     /* Restore registers values */
    PWM_1_FANCONTROLLER_RestoreConfig();

    if(PWM_1_FANCONTROLLER_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_1_FANCONTROLLER_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
