/*******************************************************************************
* File Name: flipflop.h  
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

#if !defined(CY_PINS_flipflop_H) /* Pins flipflop_H */
#define CY_PINS_flipflop_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "flipflop_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 flipflop__PORT == 15 && ((flipflop__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    flipflop_Write(uint8 value);
void    flipflop_SetDriveMode(uint8 mode);
uint8   flipflop_ReadDataReg(void);
uint8   flipflop_Read(void);
void    flipflop_SetInterruptMode(uint16 position, uint16 mode);
uint8   flipflop_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the flipflop_SetDriveMode() function.
     *  @{
     */
        #define flipflop_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define flipflop_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define flipflop_DM_RES_UP          PIN_DM_RES_UP
        #define flipflop_DM_RES_DWN         PIN_DM_RES_DWN
        #define flipflop_DM_OD_LO           PIN_DM_OD_LO
        #define flipflop_DM_OD_HI           PIN_DM_OD_HI
        #define flipflop_DM_STRONG          PIN_DM_STRONG
        #define flipflop_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define flipflop_MASK               flipflop__MASK
#define flipflop_SHIFT              flipflop__SHIFT
#define flipflop_WIDTH              1u

/* Interrupt constants */
#if defined(flipflop__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in flipflop_SetInterruptMode() function.
     *  @{
     */
        #define flipflop_INTR_NONE      (uint16)(0x0000u)
        #define flipflop_INTR_RISING    (uint16)(0x0001u)
        #define flipflop_INTR_FALLING   (uint16)(0x0002u)
        #define flipflop_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define flipflop_INTR_MASK      (0x01u) 
#endif /* (flipflop__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define flipflop_PS                     (* (reg8 *) flipflop__PS)
/* Data Register */
#define flipflop_DR                     (* (reg8 *) flipflop__DR)
/* Port Number */
#define flipflop_PRT_NUM                (* (reg8 *) flipflop__PRT) 
/* Connect to Analog Globals */                                                  
#define flipflop_AG                     (* (reg8 *) flipflop__AG)                       
/* Analog MUX bux enable */
#define flipflop_AMUX                   (* (reg8 *) flipflop__AMUX) 
/* Bidirectional Enable */                                                        
#define flipflop_BIE                    (* (reg8 *) flipflop__BIE)
/* Bit-mask for Aliased Register Access */
#define flipflop_BIT_MASK               (* (reg8 *) flipflop__BIT_MASK)
/* Bypass Enable */
#define flipflop_BYP                    (* (reg8 *) flipflop__BYP)
/* Port wide control signals */                                                   
#define flipflop_CTL                    (* (reg8 *) flipflop__CTL)
/* Drive Modes */
#define flipflop_DM0                    (* (reg8 *) flipflop__DM0) 
#define flipflop_DM1                    (* (reg8 *) flipflop__DM1)
#define flipflop_DM2                    (* (reg8 *) flipflop__DM2) 
/* Input Buffer Disable Override */
#define flipflop_INP_DIS                (* (reg8 *) flipflop__INP_DIS)
/* LCD Common or Segment Drive */
#define flipflop_LCD_COM_SEG            (* (reg8 *) flipflop__LCD_COM_SEG)
/* Enable Segment LCD */
#define flipflop_LCD_EN                 (* (reg8 *) flipflop__LCD_EN)
/* Slew Rate Control */
#define flipflop_SLW                    (* (reg8 *) flipflop__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define flipflop_PRTDSI__CAPS_SEL       (* (reg8 *) flipflop__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define flipflop_PRTDSI__DBL_SYNC_IN    (* (reg8 *) flipflop__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define flipflop_PRTDSI__OE_SEL0        (* (reg8 *) flipflop__PRTDSI__OE_SEL0) 
#define flipflop_PRTDSI__OE_SEL1        (* (reg8 *) flipflop__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define flipflop_PRTDSI__OUT_SEL0       (* (reg8 *) flipflop__PRTDSI__OUT_SEL0) 
#define flipflop_PRTDSI__OUT_SEL1       (* (reg8 *) flipflop__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define flipflop_PRTDSI__SYNC_OUT       (* (reg8 *) flipflop__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(flipflop__SIO_CFG)
    #define flipflop_SIO_HYST_EN        (* (reg8 *) flipflop__SIO_HYST_EN)
    #define flipflop_SIO_REG_HIFREQ     (* (reg8 *) flipflop__SIO_REG_HIFREQ)
    #define flipflop_SIO_CFG            (* (reg8 *) flipflop__SIO_CFG)
    #define flipflop_SIO_DIFF           (* (reg8 *) flipflop__SIO_DIFF)
#endif /* (flipflop__SIO_CFG) */

/* Interrupt Registers */
#if defined(flipflop__INTSTAT)
    #define flipflop_INTSTAT            (* (reg8 *) flipflop__INTSTAT)
    #define flipflop_SNAP               (* (reg8 *) flipflop__SNAP)
    
	#define flipflop_0_INTTYPE_REG 		(* (reg8 *) flipflop__0__INTTYPE)
#endif /* (flipflop__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_flipflop_H */


/* [] END OF FILE */
