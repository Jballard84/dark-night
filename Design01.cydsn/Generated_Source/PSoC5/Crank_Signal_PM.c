/*******************************************************************************
* File Name: Crank_Signal_PM.c  
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

#include "Crank_Signal.h"

static Crank_Signal_BACKUP_STRUCT  Crank_Signal_backup;


/*******************************************************************************
* Function Name: Crank_Signal_Sleep
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
*  Crank_Signal_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void Crank_Signal_Sleep(void) 
{
	/* Save DAC8's enable state */

	Crank_Signal_backup.enableState = (Crank_Signal_VDAC8_ACT_PWR_EN == 
		(Crank_Signal_VDAC8_PWRMGR_REG & Crank_Signal_VDAC8_ACT_PWR_EN)) ? 1u : 0u ;
	
	Crank_Signal_Stop();
	Crank_Signal_SaveConfig();
}


/*******************************************************************************
* Function Name: Crank_Signal_Wakeup
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
*  Crank_Signal_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void Crank_Signal_Wakeup(void) 
{
	Crank_Signal_RestoreConfig();

	if(Crank_Signal_backup.enableState == 1u)
	{
		Crank_Signal_Enable();
	}
}


/* [] END OF FILE */
