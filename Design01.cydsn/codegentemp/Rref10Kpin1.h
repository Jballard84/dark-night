/*******************************************************************************
* File Name: Rref10Kpin1.h  
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

#if !defined(CY_PINS_Rref10Kpin1_H) /* Pins Rref10Kpin1_H */
#define CY_PINS_Rref10Kpin1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Rref10Kpin1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Rref10Kpin1__PORT == 15 && ((Rref10Kpin1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Rref10Kpin1_Write(uint8 value);
void    Rref10Kpin1_SetDriveMode(uint8 mode);
uint8   Rref10Kpin1_ReadDataReg(void);
uint8   Rref10Kpin1_Read(void);
void    Rref10Kpin1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Rref10Kpin1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Rref10Kpin1_SetDriveMode() function.
     *  @{
     */
        #define Rref10Kpin1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Rref10Kpin1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Rref10Kpin1_DM_RES_UP          PIN_DM_RES_UP
        #define Rref10Kpin1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Rref10Kpin1_DM_OD_LO           PIN_DM_OD_LO
        #define Rref10Kpin1_DM_OD_HI           PIN_DM_OD_HI
        #define Rref10Kpin1_DM_STRONG          PIN_DM_STRONG
        #define Rref10Kpin1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Rref10Kpin1_MASK               Rref10Kpin1__MASK
#define Rref10Kpin1_SHIFT              Rref10Kpin1__SHIFT
#define Rref10Kpin1_WIDTH              1u

/* Interrupt constants */
#if defined(Rref10Kpin1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Rref10Kpin1_SetInterruptMode() function.
     *  @{
     */
        #define Rref10Kpin1_INTR_NONE      (uint16)(0x0000u)
        #define Rref10Kpin1_INTR_RISING    (uint16)(0x0001u)
        #define Rref10Kpin1_INTR_FALLING   (uint16)(0x0002u)
        #define Rref10Kpin1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Rref10Kpin1_INTR_MASK      (0x01u) 
#endif /* (Rref10Kpin1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Rref10Kpin1_PS                     (* (reg8 *) Rref10Kpin1__PS)
/* Data Register */
#define Rref10Kpin1_DR                     (* (reg8 *) Rref10Kpin1__DR)
/* Port Number */
#define Rref10Kpin1_PRT_NUM                (* (reg8 *) Rref10Kpin1__PRT) 
/* Connect to Analog Globals */                                                  
#define Rref10Kpin1_AG                     (* (reg8 *) Rref10Kpin1__AG)                       
/* Analog MUX bux enable */
#define Rref10Kpin1_AMUX                   (* (reg8 *) Rref10Kpin1__AMUX) 
/* Bidirectional Enable */                                                        
#define Rref10Kpin1_BIE                    (* (reg8 *) Rref10Kpin1__BIE)
/* Bit-mask for Aliased Register Access */
#define Rref10Kpin1_BIT_MASK               (* (reg8 *) Rref10Kpin1__BIT_MASK)
/* Bypass Enable */
#define Rref10Kpin1_BYP                    (* (reg8 *) Rref10Kpin1__BYP)
/* Port wide control signals */                                                   
#define Rref10Kpin1_CTL                    (* (reg8 *) Rref10Kpin1__CTL)
/* Drive Modes */
#define Rref10Kpin1_DM0                    (* (reg8 *) Rref10Kpin1__DM0) 
#define Rref10Kpin1_DM1                    (* (reg8 *) Rref10Kpin1__DM1)
#define Rref10Kpin1_DM2                    (* (reg8 *) Rref10Kpin1__DM2) 
/* Input Buffer Disable Override */
#define Rref10Kpin1_INP_DIS                (* (reg8 *) Rref10Kpin1__INP_DIS)
/* LCD Common or Segment Drive */
#define Rref10Kpin1_LCD_COM_SEG            (* (reg8 *) Rref10Kpin1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Rref10Kpin1_LCD_EN                 (* (reg8 *) Rref10Kpin1__LCD_EN)
/* Slew Rate Control */
#define Rref10Kpin1_SLW                    (* (reg8 *) Rref10Kpin1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Rref10Kpin1_PRTDSI__CAPS_SEL       (* (reg8 *) Rref10Kpin1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Rref10Kpin1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Rref10Kpin1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Rref10Kpin1_PRTDSI__OE_SEL0        (* (reg8 *) Rref10Kpin1__PRTDSI__OE_SEL0) 
#define Rref10Kpin1_PRTDSI__OE_SEL1        (* (reg8 *) Rref10Kpin1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Rref10Kpin1_PRTDSI__OUT_SEL0       (* (reg8 *) Rref10Kpin1__PRTDSI__OUT_SEL0) 
#define Rref10Kpin1_PRTDSI__OUT_SEL1       (* (reg8 *) Rref10Kpin1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Rref10Kpin1_PRTDSI__SYNC_OUT       (* (reg8 *) Rref10Kpin1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Rref10Kpin1__SIO_CFG)
    #define Rref10Kpin1_SIO_HYST_EN        (* (reg8 *) Rref10Kpin1__SIO_HYST_EN)
    #define Rref10Kpin1_SIO_REG_HIFREQ     (* (reg8 *) Rref10Kpin1__SIO_REG_HIFREQ)
    #define Rref10Kpin1_SIO_CFG            (* (reg8 *) Rref10Kpin1__SIO_CFG)
    #define Rref10Kpin1_SIO_DIFF           (* (reg8 *) Rref10Kpin1__SIO_DIFF)
#endif /* (Rref10Kpin1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Rref10Kpin1__INTSTAT)
    #define Rref10Kpin1_INTSTAT            (* (reg8 *) Rref10Kpin1__INTSTAT)
    #define Rref10Kpin1_SNAP               (* (reg8 *) Rref10Kpin1__SNAP)
    
	#define Rref10Kpin1_0_INTTYPE_REG 		(* (reg8 *) Rref10Kpin1__0__INTTYPE)
#endif /* (Rref10Kpin1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Rref10Kpin1_H */


/* [] END OF FILE */
