/*******************************************************************************
* File Name: dacclock.h  
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

#if !defined(CY_PINS_dacclock_H) /* Pins dacclock_H */
#define CY_PINS_dacclock_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "dacclock_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 dacclock__PORT == 15 && ((dacclock__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    dacclock_Write(uint8 value);
void    dacclock_SetDriveMode(uint8 mode);
uint8   dacclock_ReadDataReg(void);
uint8   dacclock_Read(void);
void    dacclock_SetInterruptMode(uint16 position, uint16 mode);
uint8   dacclock_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the dacclock_SetDriveMode() function.
     *  @{
     */
        #define dacclock_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define dacclock_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define dacclock_DM_RES_UP          PIN_DM_RES_UP
        #define dacclock_DM_RES_DWN         PIN_DM_RES_DWN
        #define dacclock_DM_OD_LO           PIN_DM_OD_LO
        #define dacclock_DM_OD_HI           PIN_DM_OD_HI
        #define dacclock_DM_STRONG          PIN_DM_STRONG
        #define dacclock_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define dacclock_MASK               dacclock__MASK
#define dacclock_SHIFT              dacclock__SHIFT
#define dacclock_WIDTH              1u

/* Interrupt constants */
#if defined(dacclock__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in dacclock_SetInterruptMode() function.
     *  @{
     */
        #define dacclock_INTR_NONE      (uint16)(0x0000u)
        #define dacclock_INTR_RISING    (uint16)(0x0001u)
        #define dacclock_INTR_FALLING   (uint16)(0x0002u)
        #define dacclock_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define dacclock_INTR_MASK      (0x01u) 
#endif /* (dacclock__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define dacclock_PS                     (* (reg8 *) dacclock__PS)
/* Data Register */
#define dacclock_DR                     (* (reg8 *) dacclock__DR)
/* Port Number */
#define dacclock_PRT_NUM                (* (reg8 *) dacclock__PRT) 
/* Connect to Analog Globals */                                                  
#define dacclock_AG                     (* (reg8 *) dacclock__AG)                       
/* Analog MUX bux enable */
#define dacclock_AMUX                   (* (reg8 *) dacclock__AMUX) 
/* Bidirectional Enable */                                                        
#define dacclock_BIE                    (* (reg8 *) dacclock__BIE)
/* Bit-mask for Aliased Register Access */
#define dacclock_BIT_MASK               (* (reg8 *) dacclock__BIT_MASK)
/* Bypass Enable */
#define dacclock_BYP                    (* (reg8 *) dacclock__BYP)
/* Port wide control signals */                                                   
#define dacclock_CTL                    (* (reg8 *) dacclock__CTL)
/* Drive Modes */
#define dacclock_DM0                    (* (reg8 *) dacclock__DM0) 
#define dacclock_DM1                    (* (reg8 *) dacclock__DM1)
#define dacclock_DM2                    (* (reg8 *) dacclock__DM2) 
/* Input Buffer Disable Override */
#define dacclock_INP_DIS                (* (reg8 *) dacclock__INP_DIS)
/* LCD Common or Segment Drive */
#define dacclock_LCD_COM_SEG            (* (reg8 *) dacclock__LCD_COM_SEG)
/* Enable Segment LCD */
#define dacclock_LCD_EN                 (* (reg8 *) dacclock__LCD_EN)
/* Slew Rate Control */
#define dacclock_SLW                    (* (reg8 *) dacclock__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define dacclock_PRTDSI__CAPS_SEL       (* (reg8 *) dacclock__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define dacclock_PRTDSI__DBL_SYNC_IN    (* (reg8 *) dacclock__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define dacclock_PRTDSI__OE_SEL0        (* (reg8 *) dacclock__PRTDSI__OE_SEL0) 
#define dacclock_PRTDSI__OE_SEL1        (* (reg8 *) dacclock__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define dacclock_PRTDSI__OUT_SEL0       (* (reg8 *) dacclock__PRTDSI__OUT_SEL0) 
#define dacclock_PRTDSI__OUT_SEL1       (* (reg8 *) dacclock__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define dacclock_PRTDSI__SYNC_OUT       (* (reg8 *) dacclock__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(dacclock__SIO_CFG)
    #define dacclock_SIO_HYST_EN        (* (reg8 *) dacclock__SIO_HYST_EN)
    #define dacclock_SIO_REG_HIFREQ     (* (reg8 *) dacclock__SIO_REG_HIFREQ)
    #define dacclock_SIO_CFG            (* (reg8 *) dacclock__SIO_CFG)
    #define dacclock_SIO_DIFF           (* (reg8 *) dacclock__SIO_DIFF)
#endif /* (dacclock__SIO_CFG) */

/* Interrupt Registers */
#if defined(dacclock__INTSTAT)
    #define dacclock_INTSTAT            (* (reg8 *) dacclock__INTSTAT)
    #define dacclock_SNAP               (* (reg8 *) dacclock__SNAP)
    
	#define dacclock_0_INTTYPE_REG 		(* (reg8 *) dacclock__0__INTTYPE)
#endif /* (dacclock__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_dacclock_H */


/* [] END OF FILE */
