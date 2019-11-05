/*******************************************************************************
* File Name: mass_air.h
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
#if !defined(CY_ISR_mass_air_H)
#define CY_ISR_mass_air_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void mass_air_Start(void);
void mass_air_StartEx(cyisraddress address);
void mass_air_Stop(void);

CY_ISR_PROTO(mass_air_Interrupt);

void mass_air_SetVector(cyisraddress address);
cyisraddress mass_air_GetVector(void);

void mass_air_SetPriority(uint8 priority);
uint8 mass_air_GetPriority(void);

void mass_air_Enable(void);
uint8 mass_air_GetState(void);
void mass_air_Disable(void);

void mass_air_SetPending(void);
void mass_air_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the mass_air ISR. */
#define mass_air_INTC_VECTOR            ((reg32 *) mass_air__INTC_VECT)

/* Address of the mass_air ISR priority. */
#define mass_air_INTC_PRIOR             ((reg8 *) mass_air__INTC_PRIOR_REG)

/* Priority of the mass_air interrupt. */
#define mass_air_INTC_PRIOR_NUMBER      mass_air__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable mass_air interrupt. */
#define mass_air_INTC_SET_EN            ((reg32 *) mass_air__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the mass_air interrupt. */
#define mass_air_INTC_CLR_EN            ((reg32 *) mass_air__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the mass_air interrupt state to pending. */
#define mass_air_INTC_SET_PD            ((reg32 *) mass_air__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the mass_air interrupt. */
#define mass_air_INTC_CLR_PD            ((reg32 *) mass_air__INTC_CLR_PD_REG)


#endif /* CY_ISR_mass_air_H */


/* [] END OF FILE */
