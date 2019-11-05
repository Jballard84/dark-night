/*******************************************************************************
* File Name: Rref_and_thermistor_between.h  
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

#if !defined(CY_PINS_Rref_and_thermistor_between_H) /* Pins Rref_and_thermistor_between_H */
#define CY_PINS_Rref_and_thermistor_between_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Rref_and_thermistor_between_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Rref_and_thermistor_between__PORT == 15 && ((Rref_and_thermistor_between__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Rref_and_thermistor_between_Write(uint8 value);
void    Rref_and_thermistor_between_SetDriveMode(uint8 mode);
uint8   Rref_and_thermistor_between_ReadDataReg(void);
uint8   Rref_and_thermistor_between_Read(void);
void    Rref_and_thermistor_between_SetInterruptMode(uint16 position, uint16 mode);
uint8   Rref_and_thermistor_between_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Rref_and_thermistor_between_SetDriveMode() function.
     *  @{
     */
        #define Rref_and_thermistor_between_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Rref_and_thermistor_between_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Rref_and_thermistor_between_DM_RES_UP          PIN_DM_RES_UP
        #define Rref_and_thermistor_between_DM_RES_DWN         PIN_DM_RES_DWN
        #define Rref_and_thermistor_between_DM_OD_LO           PIN_DM_OD_LO
        #define Rref_and_thermistor_between_DM_OD_HI           PIN_DM_OD_HI
        #define Rref_and_thermistor_between_DM_STRONG          PIN_DM_STRONG
        #define Rref_and_thermistor_between_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Rref_and_thermistor_between_MASK               Rref_and_thermistor_between__MASK
#define Rref_and_thermistor_between_SHIFT              Rref_and_thermistor_between__SHIFT
#define Rref_and_thermistor_between_WIDTH              1u

/* Interrupt constants */
#if defined(Rref_and_thermistor_between__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Rref_and_thermistor_between_SetInterruptMode() function.
     *  @{
     */
        #define Rref_and_thermistor_between_INTR_NONE      (uint16)(0x0000u)
        #define Rref_and_thermistor_between_INTR_RISING    (uint16)(0x0001u)
        #define Rref_and_thermistor_between_INTR_FALLING   (uint16)(0x0002u)
        #define Rref_and_thermistor_between_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Rref_and_thermistor_between_INTR_MASK      (0x01u) 
#endif /* (Rref_and_thermistor_between__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Rref_and_thermistor_between_PS                     (* (reg8 *) Rref_and_thermistor_between__PS)
/* Data Register */
#define Rref_and_thermistor_between_DR                     (* (reg8 *) Rref_and_thermistor_between__DR)
/* Port Number */
#define Rref_and_thermistor_between_PRT_NUM                (* (reg8 *) Rref_and_thermistor_between__PRT) 
/* Connect to Analog Globals */                                                  
#define Rref_and_thermistor_between_AG                     (* (reg8 *) Rref_and_thermistor_between__AG)                       
/* Analog MUX bux enable */
#define Rref_and_thermistor_between_AMUX                   (* (reg8 *) Rref_and_thermistor_between__AMUX) 
/* Bidirectional Enable */                                                        
#define Rref_and_thermistor_between_BIE                    (* (reg8 *) Rref_and_thermistor_between__BIE)
/* Bit-mask for Aliased Register Access */
#define Rref_and_thermistor_between_BIT_MASK               (* (reg8 *) Rref_and_thermistor_between__BIT_MASK)
/* Bypass Enable */
#define Rref_and_thermistor_between_BYP                    (* (reg8 *) Rref_and_thermistor_between__BYP)
/* Port wide control signals */                                                   
#define Rref_and_thermistor_between_CTL                    (* (reg8 *) Rref_and_thermistor_between__CTL)
/* Drive Modes */
#define Rref_and_thermistor_between_DM0                    (* (reg8 *) Rref_and_thermistor_between__DM0) 
#define Rref_and_thermistor_between_DM1                    (* (reg8 *) Rref_and_thermistor_between__DM1)
#define Rref_and_thermistor_between_DM2                    (* (reg8 *) Rref_and_thermistor_between__DM2) 
/* Input Buffer Disable Override */
#define Rref_and_thermistor_between_INP_DIS                (* (reg8 *) Rref_and_thermistor_between__INP_DIS)
/* LCD Common or Segment Drive */
#define Rref_and_thermistor_between_LCD_COM_SEG            (* (reg8 *) Rref_and_thermistor_between__LCD_COM_SEG)
/* Enable Segment LCD */
#define Rref_and_thermistor_between_LCD_EN                 (* (reg8 *) Rref_and_thermistor_between__LCD_EN)
/* Slew Rate Control */
#define Rref_and_thermistor_between_SLW                    (* (reg8 *) Rref_and_thermistor_between__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Rref_and_thermistor_between_PRTDSI__CAPS_SEL       (* (reg8 *) Rref_and_thermistor_between__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Rref_and_thermistor_between_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Rref_and_thermistor_between__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Rref_and_thermistor_between_PRTDSI__OE_SEL0        (* (reg8 *) Rref_and_thermistor_between__PRTDSI__OE_SEL0) 
#define Rref_and_thermistor_between_PRTDSI__OE_SEL1        (* (reg8 *) Rref_and_thermistor_between__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Rref_and_thermistor_between_PRTDSI__OUT_SEL0       (* (reg8 *) Rref_and_thermistor_between__PRTDSI__OUT_SEL0) 
#define Rref_and_thermistor_between_PRTDSI__OUT_SEL1       (* (reg8 *) Rref_and_thermistor_between__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Rref_and_thermistor_between_PRTDSI__SYNC_OUT       (* (reg8 *) Rref_and_thermistor_between__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Rref_and_thermistor_between__SIO_CFG)
    #define Rref_and_thermistor_between_SIO_HYST_EN        (* (reg8 *) Rref_and_thermistor_between__SIO_HYST_EN)
    #define Rref_and_thermistor_between_SIO_REG_HIFREQ     (* (reg8 *) Rref_and_thermistor_between__SIO_REG_HIFREQ)
    #define Rref_and_thermistor_between_SIO_CFG            (* (reg8 *) Rref_and_thermistor_between__SIO_CFG)
    #define Rref_and_thermistor_between_SIO_DIFF           (* (reg8 *) Rref_and_thermistor_between__SIO_DIFF)
#endif /* (Rref_and_thermistor_between__SIO_CFG) */

/* Interrupt Registers */
#if defined(Rref_and_thermistor_between__INTSTAT)
    #define Rref_and_thermistor_between_INTSTAT            (* (reg8 *) Rref_and_thermistor_between__INTSTAT)
    #define Rref_and_thermistor_between_SNAP               (* (reg8 *) Rref_and_thermistor_between__SNAP)
    
	#define Rref_and_thermistor_between_0_INTTYPE_REG 		(* (reg8 *) Rref_and_thermistor_between__0__INTTYPE)
#endif /* (Rref_and_thermistor_between__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Rref_and_thermistor_between_H */


/* [] END OF FILE */
