/*******************************************************************************
* File Name: Crank_Signal_BuffAmp.c
* Version 1.90
*
* Description:
*  This file provides the source code to the API for OpAmp (Analog Buffer) 
*  Component.
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

uint8 Crank_Signal_BuffAmp_initVar = 0u;


/*******************************************************************************   
* Function Name: Crank_Signal_BuffAmp_Init
********************************************************************************
*
* Summary:
*  Initialize component's parameters to the parameters set by user in the 
*  customizer of the component placed onto schematic. Usually called in 
*  Crank_Signal_BuffAmp_Start().
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void Crank_Signal_BuffAmp_Init(void) 
{
    Crank_Signal_BuffAmp_SetPower(Crank_Signal_BuffAmp_DEFAULT_POWER);
}


/*******************************************************************************   
* Function Name: Crank_Signal_BuffAmp_Enable
********************************************************************************
*
* Summary:
*  Enables the OpAmp block operation
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void Crank_Signal_BuffAmp_Enable(void) 
{
    /* Enable negative charge pumps in ANIF */
    Crank_Signal_BuffAmp_PUMP_CR1_REG  |= (Crank_Signal_BuffAmp_PUMP_CR1_CLKSEL | Crank_Signal_BuffAmp_PUMP_CR1_FORCE);

    /* Enable power to buffer in active mode */
    Crank_Signal_BuffAmp_PM_ACT_CFG_REG |= Crank_Signal_BuffAmp_ACT_PWR_EN;

    /* Enable power to buffer in alternative active mode */
    Crank_Signal_BuffAmp_PM_STBY_CFG_REG |= Crank_Signal_BuffAmp_STBY_PWR_EN;
}


/*******************************************************************************
* Function Name:   Crank_Signal_BuffAmp_Start
********************************************************************************
*
* Summary:
*  The start function initializes the Analog Buffer with the default values and 
*  sets the power to the given level. A power level of 0, is same as 
*  executing the stop function.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  Crank_Signal_BuffAmp_initVar: Used to check the initial configuration, modified 
*  when this function is called for the first time.
*
*******************************************************************************/
void Crank_Signal_BuffAmp_Start(void) 
{
    if(Crank_Signal_BuffAmp_initVar == 0u)
    {
        Crank_Signal_BuffAmp_initVar = 1u;
        Crank_Signal_BuffAmp_Init();
    }

    Crank_Signal_BuffAmp_Enable();
}


/*******************************************************************************
* Function Name: Crank_Signal_BuffAmp_Stop
********************************************************************************
*
* Summary:
*  Powers down amplifier to lowest power state.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void Crank_Signal_BuffAmp_Stop(void) 
{
    /* Disable power to buffer in active mode template */
    Crank_Signal_BuffAmp_PM_ACT_CFG_REG &= (uint8)(~Crank_Signal_BuffAmp_ACT_PWR_EN);

    /* Disable power to buffer in alternative active mode template */
    Crank_Signal_BuffAmp_PM_STBY_CFG_REG &= (uint8)(~Crank_Signal_BuffAmp_STBY_PWR_EN);
    
    /* Disable negative charge pumps for ANIF only if all ABuf is turned OFF */
    if(Crank_Signal_BuffAmp_PM_ACT_CFG_REG == 0u)
    {
        Crank_Signal_BuffAmp_PUMP_CR1_REG &= (uint8)(~(Crank_Signal_BuffAmp_PUMP_CR1_CLKSEL | Crank_Signal_BuffAmp_PUMP_CR1_FORCE));
    }
}


/*******************************************************************************
* Function Name: Crank_Signal_BuffAmp_SetPower
********************************************************************************
*
* Summary:
*  Sets power level of Analog buffer.
*
* Parameters: 
*  power: PSoC3: Sets power level between low (1) and high power (3).
*         PSoC5: Sets power level High (0)
*
* Return:
*  void
*
**********************************************************************************/
void Crank_Signal_BuffAmp_SetPower(uint8 power) 
{
    #if (CY_PSOC3 || CY_PSOC5LP)
        Crank_Signal_BuffAmp_CR_REG &= (uint8)(~Crank_Signal_BuffAmp_PWR_MASK);
        Crank_Signal_BuffAmp_CR_REG |= power & Crank_Signal_BuffAmp_PWR_MASK;      /* Set device power */
    #else
        CYASSERT(Crank_Signal_BuffAmp_HIGHPOWER == power);
    #endif /* CY_PSOC3 || CY_PSOC5LP */
}


/* [] END OF FILE */
