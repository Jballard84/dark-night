/*******************************************************************************
* File Name: Crank_Output_ecm.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Crank_Output_ecm_ALIASES_H) /* Pins Crank_Output_ecm_ALIASES_H */
#define CY_PINS_Crank_Output_ecm_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Crank_Output_ecm_0			(Crank_Output_ecm__0__PC)
#define Crank_Output_ecm_0_INTR	((uint16)((uint16)0x0001u << Crank_Output_ecm__0__SHIFT))

#define Crank_Output_ecm_INTR_ALL	 ((uint16)(Crank_Output_ecm_0_INTR))

#endif /* End Pins Crank_Output_ecm_ALIASES_H */


/* [] END OF FILE */
