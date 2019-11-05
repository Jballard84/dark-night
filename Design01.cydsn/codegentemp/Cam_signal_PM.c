/*******************************************************************************
* File Name: Cam_signal_PM.c  
* Version 2.10
*
* Description:
*  This file provides the power manager source code to the API for 
*  the WaveDAC8 component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Cam_signal.h"

static Cam_signal_BACKUP_STRUCT  Cam_signal_backup;


/*******************************************************************************
* Function Name: Cam_signal_Sleep
********************************************************************************
*
* Summary:
*  Stops the component and saves its configuration. Should be called 
*  just prior to entering sleep.
*  
* Parameters:  
*  None
*
* Return: 
*  None
*
* Global variables:
*  Cam_signal_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void Cam_signal_Sleep(void) 
{
	/* Save DAC8's enable state */

	Cam_signal_backup.enableState = (Cam_signal_VDAC8_ACT_PWR_EN == 
		(Cam_signal_VDAC8_PWRMGR_REG & Cam_signal_VDAC8_ACT_PWR_EN)) ? 1u : 0u ;
	
	Cam_signal_Stop();
	Cam_signal_SaveConfig();
}


/*******************************************************************************
* Function Name: Cam_signal_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component configuration. Should be called
*  just after awaking from sleep.
*  
* Parameters:  
*  None
*
* Return: 
*  void
*
* Global variables:
*  Cam_signal_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void Cam_signal_Wakeup(void) 
{
	Cam_signal_RestoreConfig();

	if(Cam_signal_backup.enableState == 1u)
	{
		Cam_signal_Enable();
	}
}


/* [] END OF FILE */
