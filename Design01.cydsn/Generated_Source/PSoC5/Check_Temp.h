/*******************************************************************************
* File Name: Check_Temp.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Check_Temp_H)
#define CY_ISR_Check_Temp_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Check_Temp_Start(void);
void Check_Temp_StartEx(cyisraddress address);
void Check_Temp_Stop(void);

CY_ISR_PROTO(Check_Temp_Interrupt);

void Check_Temp_SetVector(cyisraddress address);
cyisraddress Check_Temp_GetVector(void);

void Check_Temp_SetPriority(uint8 priority);
uint8 Check_Temp_GetPriority(void);

void Check_Temp_Enable(void);
uint8 Check_Temp_GetState(void);
void Check_Temp_Disable(void);

void Check_Temp_SetPending(void);
void Check_Temp_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Check_Temp ISR. */
#define Check_Temp_INTC_VECTOR            ((reg32 *) Check_Temp__INTC_VECT)

/* Address of the Check_Temp ISR priority. */
#define Check_Temp_INTC_PRIOR             ((reg8 *) Check_Temp__INTC_PRIOR_REG)

/* Priority of the Check_Temp interrupt. */
#define Check_Temp_INTC_PRIOR_NUMBER      Check_Temp__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Check_Temp interrupt. */
#define Check_Temp_INTC_SET_EN            ((reg32 *) Check_Temp__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Check_Temp interrupt. */
#define Check_Temp_INTC_CLR_EN            ((reg32 *) Check_Temp__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Check_Temp interrupt state to pending. */
#define Check_Temp_INTC_SET_PD            ((reg32 *) Check_Temp__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Check_Temp interrupt. */
#define Check_Temp_INTC_CLR_PD            ((reg32 *) Check_Temp__INTC_CLR_PD_REG)


#endif /* CY_ISR_Check_Temp_H */


/* [] END OF FILE */
