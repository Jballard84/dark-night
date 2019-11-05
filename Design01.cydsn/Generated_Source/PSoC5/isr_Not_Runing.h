/*******************************************************************************
* File Name: isr_Not_Runing.h
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
#if !defined(CY_ISR_isr_Not_Runing_H)
#define CY_ISR_isr_Not_Runing_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isr_Not_Runing_Start(void);
void isr_Not_Runing_StartEx(cyisraddress address);
void isr_Not_Runing_Stop(void);

CY_ISR_PROTO(isr_Not_Runing_Interrupt);

void isr_Not_Runing_SetVector(cyisraddress address);
cyisraddress isr_Not_Runing_GetVector(void);

void isr_Not_Runing_SetPriority(uint8 priority);
uint8 isr_Not_Runing_GetPriority(void);

void isr_Not_Runing_Enable(void);
uint8 isr_Not_Runing_GetState(void);
void isr_Not_Runing_Disable(void);

void isr_Not_Runing_SetPending(void);
void isr_Not_Runing_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isr_Not_Runing ISR. */
#define isr_Not_Runing_INTC_VECTOR            ((reg32 *) isr_Not_Runing__INTC_VECT)

/* Address of the isr_Not_Runing ISR priority. */
#define isr_Not_Runing_INTC_PRIOR             ((reg8 *) isr_Not_Runing__INTC_PRIOR_REG)

/* Priority of the isr_Not_Runing interrupt. */
#define isr_Not_Runing_INTC_PRIOR_NUMBER      isr_Not_Runing__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isr_Not_Runing interrupt. */
#define isr_Not_Runing_INTC_SET_EN            ((reg32 *) isr_Not_Runing__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isr_Not_Runing interrupt. */
#define isr_Not_Runing_INTC_CLR_EN            ((reg32 *) isr_Not_Runing__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isr_Not_Runing interrupt state to pending. */
#define isr_Not_Runing_INTC_SET_PD            ((reg32 *) isr_Not_Runing__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isr_Not_Runing interrupt. */
#define isr_Not_Runing_INTC_CLR_PD            ((reg32 *) isr_Not_Runing__INTC_CLR_PD_REG)


#endif /* CY_ISR_isr_Not_Runing_H */


/* [] END OF FILE */
