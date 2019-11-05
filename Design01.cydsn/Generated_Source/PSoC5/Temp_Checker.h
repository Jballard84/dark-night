/*******************************************************************************
* File Name: Temp_Checker.h
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
#if !defined(CY_ISR_Temp_Checker_H)
#define CY_ISR_Temp_Checker_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Temp_Checker_Start(void);
void Temp_Checker_StartEx(cyisraddress address);
void Temp_Checker_Stop(void);

CY_ISR_PROTO(Temp_Checker_Interrupt);

void Temp_Checker_SetVector(cyisraddress address);
cyisraddress Temp_Checker_GetVector(void);

void Temp_Checker_SetPriority(uint8 priority);
uint8 Temp_Checker_GetPriority(void);

void Temp_Checker_Enable(void);
uint8 Temp_Checker_GetState(void);
void Temp_Checker_Disable(void);

void Temp_Checker_SetPending(void);
void Temp_Checker_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Temp_Checker ISR. */
#define Temp_Checker_INTC_VECTOR            ((reg32 *) Temp_Checker__INTC_VECT)

/* Address of the Temp_Checker ISR priority. */
#define Temp_Checker_INTC_PRIOR             ((reg8 *) Temp_Checker__INTC_PRIOR_REG)

/* Priority of the Temp_Checker interrupt. */
#define Temp_Checker_INTC_PRIOR_NUMBER      Temp_Checker__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Temp_Checker interrupt. */
#define Temp_Checker_INTC_SET_EN            ((reg32 *) Temp_Checker__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Temp_Checker interrupt. */
#define Temp_Checker_INTC_CLR_EN            ((reg32 *) Temp_Checker__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Temp_Checker interrupt state to pending. */
#define Temp_Checker_INTC_SET_PD            ((reg32 *) Temp_Checker__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Temp_Checker interrupt. */
#define Temp_Checker_INTC_CLR_PD            ((reg32 *) Temp_Checker__INTC_CLR_PD_REG)


#endif /* CY_ISR_Temp_Checker_H */


/* [] END OF FILE */
