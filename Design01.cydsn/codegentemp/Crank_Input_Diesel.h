/*******************************************************************************
* File Name: Crank_Input_Diesel.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Crank_Input_Diesel_H) /* Pins Crank_Input_Diesel_H */
#define CY_PINS_Crank_Input_Diesel_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Crank_Input_Diesel_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Crank_Input_Diesel__PORT == 15 && ((Crank_Input_Diesel__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Crank_Input_Diesel_Write(uint8 value);
void    Crank_Input_Diesel_SetDriveMode(uint8 mode);
uint8   Crank_Input_Diesel_ReadDataReg(void);
uint8   Crank_Input_Diesel_Read(void);
void    Crank_Input_Diesel_SetInterruptMode(uint16 position, uint16 mode);
uint8   Crank_Input_Diesel_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Crank_Input_Diesel_SetDriveMode() function.
     *  @{
     */
        #define Crank_Input_Diesel_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Crank_Input_Diesel_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Crank_Input_Diesel_DM_RES_UP          PIN_DM_RES_UP
        #define Crank_Input_Diesel_DM_RES_DWN         PIN_DM_RES_DWN
        #define Crank_Input_Diesel_DM_OD_LO           PIN_DM_OD_LO
        #define Crank_Input_Diesel_DM_OD_HI           PIN_DM_OD_HI
        #define Crank_Input_Diesel_DM_STRONG          PIN_DM_STRONG
        #define Crank_Input_Diesel_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Crank_Input_Diesel_MASK               Crank_Input_Diesel__MASK
#define Crank_Input_Diesel_SHIFT              Crank_Input_Diesel__SHIFT
#define Crank_Input_Diesel_WIDTH              1u

/* Interrupt constants */
#if defined(Crank_Input_Diesel__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Crank_Input_Diesel_SetInterruptMode() function.
     *  @{
     */
        #define Crank_Input_Diesel_INTR_NONE      (uint16)(0x0000u)
        #define Crank_Input_Diesel_INTR_RISING    (uint16)(0x0001u)
        #define Crank_Input_Diesel_INTR_FALLING   (uint16)(0x0002u)
        #define Crank_Input_Diesel_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Crank_Input_Diesel_INTR_MASK      (0x01u) 
#endif /* (Crank_Input_Diesel__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Crank_Input_Diesel_PS                     (* (reg8 *) Crank_Input_Diesel__PS)
/* Data Register */
#define Crank_Input_Diesel_DR                     (* (reg8 *) Crank_Input_Diesel__DR)
/* Port Number */
#define Crank_Input_Diesel_PRT_NUM                (* (reg8 *) Crank_Input_Diesel__PRT) 
/* Connect to Analog Globals */                                                  
#define Crank_Input_Diesel_AG                     (* (reg8 *) Crank_Input_Diesel__AG)                       
/* Analog MUX bux enable */
#define Crank_Input_Diesel_AMUX                   (* (reg8 *) Crank_Input_Diesel__AMUX) 
/* Bidirectional Enable */                                                        
#define Crank_Input_Diesel_BIE                    (* (reg8 *) Crank_Input_Diesel__BIE)
/* Bit-mask for Aliased Register Access */
#define Crank_Input_Diesel_BIT_MASK               (* (reg8 *) Crank_Input_Diesel__BIT_MASK)
/* Bypass Enable */
#define Crank_Input_Diesel_BYP                    (* (reg8 *) Crank_Input_Diesel__BYP)
/* Port wide control signals */                                                   
#define Crank_Input_Diesel_CTL                    (* (reg8 *) Crank_Input_Diesel__CTL)
/* Drive Modes */
#define Crank_Input_Diesel_DM0                    (* (reg8 *) Crank_Input_Diesel__DM0) 
#define Crank_Input_Diesel_DM1                    (* (reg8 *) Crank_Input_Diesel__DM1)
#define Crank_Input_Diesel_DM2                    (* (reg8 *) Crank_Input_Diesel__DM2) 
/* Input Buffer Disable Override */
#define Crank_Input_Diesel_INP_DIS                (* (reg8 *) Crank_Input_Diesel__INP_DIS)
/* LCD Common or Segment Drive */
#define Crank_Input_Diesel_LCD_COM_SEG            (* (reg8 *) Crank_Input_Diesel__LCD_COM_SEG)
/* Enable Segment LCD */
#define Crank_Input_Diesel_LCD_EN                 (* (reg8 *) Crank_Input_Diesel__LCD_EN)
/* Slew Rate Control */
#define Crank_Input_Diesel_SLW                    (* (reg8 *) Crank_Input_Diesel__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Crank_Input_Diesel_PRTDSI__CAPS_SEL       (* (reg8 *) Crank_Input_Diesel__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Crank_Input_Diesel_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Crank_Input_Diesel__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Crank_Input_Diesel_PRTDSI__OE_SEL0        (* (reg8 *) Crank_Input_Diesel__PRTDSI__OE_SEL0) 
#define Crank_Input_Diesel_PRTDSI__OE_SEL1        (* (reg8 *) Crank_Input_Diesel__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Crank_Input_Diesel_PRTDSI__OUT_SEL0       (* (reg8 *) Crank_Input_Diesel__PRTDSI__OUT_SEL0) 
#define Crank_Input_Diesel_PRTDSI__OUT_SEL1       (* (reg8 *) Crank_Input_Diesel__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Crank_Input_Diesel_PRTDSI__SYNC_OUT       (* (reg8 *) Crank_Input_Diesel__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Crank_Input_Diesel__SIO_CFG)
    #define Crank_Input_Diesel_SIO_HYST_EN        (* (reg8 *) Crank_Input_Diesel__SIO_HYST_EN)
    #define Crank_Input_Diesel_SIO_REG_HIFREQ     (* (reg8 *) Crank_Input_Diesel__SIO_REG_HIFREQ)
    #define Crank_Input_Diesel_SIO_CFG            (* (reg8 *) Crank_Input_Diesel__SIO_CFG)
    #define Crank_Input_Diesel_SIO_DIFF           (* (reg8 *) Crank_Input_Diesel__SIO_DIFF)
#endif /* (Crank_Input_Diesel__SIO_CFG) */

/* Interrupt Registers */
#if defined(Crank_Input_Diesel__INTSTAT)
    #define Crank_Input_Diesel_INTSTAT            (* (reg8 *) Crank_Input_Diesel__INTSTAT)
    #define Crank_Input_Diesel_SNAP               (* (reg8 *) Crank_Input_Diesel__SNAP)
    
	#define Crank_Input_Diesel_0_INTTYPE_REG 		(* (reg8 *) Crank_Input_Diesel__0__INTTYPE)
#endif /* (Crank_Input_Diesel__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Crank_Input_Diesel_H */


/* [] END OF FILE */
