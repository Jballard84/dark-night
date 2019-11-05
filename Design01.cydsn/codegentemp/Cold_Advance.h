/*******************************************************************************
* File Name: Cold_Advance.h  
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

#if !defined(CY_PINS_Cold_Advance_H) /* Pins Cold_Advance_H */
#define CY_PINS_Cold_Advance_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Cold_Advance_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Cold_Advance__PORT == 15 && ((Cold_Advance__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Cold_Advance_Write(uint8 value);
void    Cold_Advance_SetDriveMode(uint8 mode);
uint8   Cold_Advance_ReadDataReg(void);
uint8   Cold_Advance_Read(void);
void    Cold_Advance_SetInterruptMode(uint16 position, uint16 mode);
uint8   Cold_Advance_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Cold_Advance_SetDriveMode() function.
     *  @{
     */
        #define Cold_Advance_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Cold_Advance_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Cold_Advance_DM_RES_UP          PIN_DM_RES_UP
        #define Cold_Advance_DM_RES_DWN         PIN_DM_RES_DWN
        #define Cold_Advance_DM_OD_LO           PIN_DM_OD_LO
        #define Cold_Advance_DM_OD_HI           PIN_DM_OD_HI
        #define Cold_Advance_DM_STRONG          PIN_DM_STRONG
        #define Cold_Advance_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Cold_Advance_MASK               Cold_Advance__MASK
#define Cold_Advance_SHIFT              Cold_Advance__SHIFT
#define Cold_Advance_WIDTH              1u

/* Interrupt constants */
#if defined(Cold_Advance__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Cold_Advance_SetInterruptMode() function.
     *  @{
     */
        #define Cold_Advance_INTR_NONE      (uint16)(0x0000u)
        #define Cold_Advance_INTR_RISING    (uint16)(0x0001u)
        #define Cold_Advance_INTR_FALLING   (uint16)(0x0002u)
        #define Cold_Advance_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Cold_Advance_INTR_MASK      (0x01u) 
#endif /* (Cold_Advance__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Cold_Advance_PS                     (* (reg8 *) Cold_Advance__PS)
/* Data Register */
#define Cold_Advance_DR                     (* (reg8 *) Cold_Advance__DR)
/* Port Number */
#define Cold_Advance_PRT_NUM                (* (reg8 *) Cold_Advance__PRT) 
/* Connect to Analog Globals */                                                  
#define Cold_Advance_AG                     (* (reg8 *) Cold_Advance__AG)                       
/* Analog MUX bux enable */
#define Cold_Advance_AMUX                   (* (reg8 *) Cold_Advance__AMUX) 
/* Bidirectional Enable */                                                        
#define Cold_Advance_BIE                    (* (reg8 *) Cold_Advance__BIE)
/* Bit-mask for Aliased Register Access */
#define Cold_Advance_BIT_MASK               (* (reg8 *) Cold_Advance__BIT_MASK)
/* Bypass Enable */
#define Cold_Advance_BYP                    (* (reg8 *) Cold_Advance__BYP)
/* Port wide control signals */                                                   
#define Cold_Advance_CTL                    (* (reg8 *) Cold_Advance__CTL)
/* Drive Modes */
#define Cold_Advance_DM0                    (* (reg8 *) Cold_Advance__DM0) 
#define Cold_Advance_DM1                    (* (reg8 *) Cold_Advance__DM1)
#define Cold_Advance_DM2                    (* (reg8 *) Cold_Advance__DM2) 
/* Input Buffer Disable Override */
#define Cold_Advance_INP_DIS                (* (reg8 *) Cold_Advance__INP_DIS)
/* LCD Common or Segment Drive */
#define Cold_Advance_LCD_COM_SEG            (* (reg8 *) Cold_Advance__LCD_COM_SEG)
/* Enable Segment LCD */
#define Cold_Advance_LCD_EN                 (* (reg8 *) Cold_Advance__LCD_EN)
/* Slew Rate Control */
#define Cold_Advance_SLW                    (* (reg8 *) Cold_Advance__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Cold_Advance_PRTDSI__CAPS_SEL       (* (reg8 *) Cold_Advance__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Cold_Advance_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Cold_Advance__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Cold_Advance_PRTDSI__OE_SEL0        (* (reg8 *) Cold_Advance__PRTDSI__OE_SEL0) 
#define Cold_Advance_PRTDSI__OE_SEL1        (* (reg8 *) Cold_Advance__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Cold_Advance_PRTDSI__OUT_SEL0       (* (reg8 *) Cold_Advance__PRTDSI__OUT_SEL0) 
#define Cold_Advance_PRTDSI__OUT_SEL1       (* (reg8 *) Cold_Advance__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Cold_Advance_PRTDSI__SYNC_OUT       (* (reg8 *) Cold_Advance__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Cold_Advance__SIO_CFG)
    #define Cold_Advance_SIO_HYST_EN        (* (reg8 *) Cold_Advance__SIO_HYST_EN)
    #define Cold_Advance_SIO_REG_HIFREQ     (* (reg8 *) Cold_Advance__SIO_REG_HIFREQ)
    #define Cold_Advance_SIO_CFG            (* (reg8 *) Cold_Advance__SIO_CFG)
    #define Cold_Advance_SIO_DIFF           (* (reg8 *) Cold_Advance__SIO_DIFF)
#endif /* (Cold_Advance__SIO_CFG) */

/* Interrupt Registers */
#if defined(Cold_Advance__INTSTAT)
    #define Cold_Advance_INTSTAT            (* (reg8 *) Cold_Advance__INTSTAT)
    #define Cold_Advance_SNAP               (* (reg8 *) Cold_Advance__SNAP)
    
	#define Cold_Advance_0_INTTYPE_REG 		(* (reg8 *) Cold_Advance__0__INTTYPE)
#endif /* (Cold_Advance__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Cold_Advance_H */


/* [] END OF FILE */
