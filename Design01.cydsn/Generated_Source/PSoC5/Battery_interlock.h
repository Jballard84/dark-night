/*******************************************************************************
* File Name: Battery_interlock.h  
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

#if !defined(CY_PINS_Battery_interlock_H) /* Pins Battery_interlock_H */
#define CY_PINS_Battery_interlock_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Battery_interlock_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Battery_interlock__PORT == 15 && ((Battery_interlock__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Battery_interlock_Write(uint8 value);
void    Battery_interlock_SetDriveMode(uint8 mode);
uint8   Battery_interlock_ReadDataReg(void);
uint8   Battery_interlock_Read(void);
void    Battery_interlock_SetInterruptMode(uint16 position, uint16 mode);
uint8   Battery_interlock_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Battery_interlock_SetDriveMode() function.
     *  @{
     */
        #define Battery_interlock_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Battery_interlock_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Battery_interlock_DM_RES_UP          PIN_DM_RES_UP
        #define Battery_interlock_DM_RES_DWN         PIN_DM_RES_DWN
        #define Battery_interlock_DM_OD_LO           PIN_DM_OD_LO
        #define Battery_interlock_DM_OD_HI           PIN_DM_OD_HI
        #define Battery_interlock_DM_STRONG          PIN_DM_STRONG
        #define Battery_interlock_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Battery_interlock_MASK               Battery_interlock__MASK
#define Battery_interlock_SHIFT              Battery_interlock__SHIFT
#define Battery_interlock_WIDTH              1u

/* Interrupt constants */
#if defined(Battery_interlock__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Battery_interlock_SetInterruptMode() function.
     *  @{
     */
        #define Battery_interlock_INTR_NONE      (uint16)(0x0000u)
        #define Battery_interlock_INTR_RISING    (uint16)(0x0001u)
        #define Battery_interlock_INTR_FALLING   (uint16)(0x0002u)
        #define Battery_interlock_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Battery_interlock_INTR_MASK      (0x01u) 
#endif /* (Battery_interlock__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Battery_interlock_PS                     (* (reg8 *) Battery_interlock__PS)
/* Data Register */
#define Battery_interlock_DR                     (* (reg8 *) Battery_interlock__DR)
/* Port Number */
#define Battery_interlock_PRT_NUM                (* (reg8 *) Battery_interlock__PRT) 
/* Connect to Analog Globals */                                                  
#define Battery_interlock_AG                     (* (reg8 *) Battery_interlock__AG)                       
/* Analog MUX bux enable */
#define Battery_interlock_AMUX                   (* (reg8 *) Battery_interlock__AMUX) 
/* Bidirectional Enable */                                                        
#define Battery_interlock_BIE                    (* (reg8 *) Battery_interlock__BIE)
/* Bit-mask for Aliased Register Access */
#define Battery_interlock_BIT_MASK               (* (reg8 *) Battery_interlock__BIT_MASK)
/* Bypass Enable */
#define Battery_interlock_BYP                    (* (reg8 *) Battery_interlock__BYP)
/* Port wide control signals */                                                   
#define Battery_interlock_CTL                    (* (reg8 *) Battery_interlock__CTL)
/* Drive Modes */
#define Battery_interlock_DM0                    (* (reg8 *) Battery_interlock__DM0) 
#define Battery_interlock_DM1                    (* (reg8 *) Battery_interlock__DM1)
#define Battery_interlock_DM2                    (* (reg8 *) Battery_interlock__DM2) 
/* Input Buffer Disable Override */
#define Battery_interlock_INP_DIS                (* (reg8 *) Battery_interlock__INP_DIS)
/* LCD Common or Segment Drive */
#define Battery_interlock_LCD_COM_SEG            (* (reg8 *) Battery_interlock__LCD_COM_SEG)
/* Enable Segment LCD */
#define Battery_interlock_LCD_EN                 (* (reg8 *) Battery_interlock__LCD_EN)
/* Slew Rate Control */
#define Battery_interlock_SLW                    (* (reg8 *) Battery_interlock__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Battery_interlock_PRTDSI__CAPS_SEL       (* (reg8 *) Battery_interlock__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Battery_interlock_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Battery_interlock__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Battery_interlock_PRTDSI__OE_SEL0        (* (reg8 *) Battery_interlock__PRTDSI__OE_SEL0) 
#define Battery_interlock_PRTDSI__OE_SEL1        (* (reg8 *) Battery_interlock__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Battery_interlock_PRTDSI__OUT_SEL0       (* (reg8 *) Battery_interlock__PRTDSI__OUT_SEL0) 
#define Battery_interlock_PRTDSI__OUT_SEL1       (* (reg8 *) Battery_interlock__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Battery_interlock_PRTDSI__SYNC_OUT       (* (reg8 *) Battery_interlock__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Battery_interlock__SIO_CFG)
    #define Battery_interlock_SIO_HYST_EN        (* (reg8 *) Battery_interlock__SIO_HYST_EN)
    #define Battery_interlock_SIO_REG_HIFREQ     (* (reg8 *) Battery_interlock__SIO_REG_HIFREQ)
    #define Battery_interlock_SIO_CFG            (* (reg8 *) Battery_interlock__SIO_CFG)
    #define Battery_interlock_SIO_DIFF           (* (reg8 *) Battery_interlock__SIO_DIFF)
#endif /* (Battery_interlock__SIO_CFG) */

/* Interrupt Registers */
#if defined(Battery_interlock__INTSTAT)
    #define Battery_interlock_INTSTAT            (* (reg8 *) Battery_interlock__INTSTAT)
    #define Battery_interlock_SNAP               (* (reg8 *) Battery_interlock__SNAP)
    
	#define Battery_interlock_0_INTTYPE_REG 		(* (reg8 *) Battery_interlock__0__INTTYPE)
#endif /* (Battery_interlock__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Battery_interlock_H */


/* [] END OF FILE */
