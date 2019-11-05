/*******************************************************************************
* File Name: Thermoster_Vss.h  
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

#if !defined(CY_PINS_Thermoster_Vss_H) /* Pins Thermoster_Vss_H */
#define CY_PINS_Thermoster_Vss_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Thermoster_Vss_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Thermoster_Vss__PORT == 15 && ((Thermoster_Vss__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Thermoster_Vss_Write(uint8 value);
void    Thermoster_Vss_SetDriveMode(uint8 mode);
uint8   Thermoster_Vss_ReadDataReg(void);
uint8   Thermoster_Vss_Read(void);
void    Thermoster_Vss_SetInterruptMode(uint16 position, uint16 mode);
uint8   Thermoster_Vss_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Thermoster_Vss_SetDriveMode() function.
     *  @{
     */
        #define Thermoster_Vss_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Thermoster_Vss_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Thermoster_Vss_DM_RES_UP          PIN_DM_RES_UP
        #define Thermoster_Vss_DM_RES_DWN         PIN_DM_RES_DWN
        #define Thermoster_Vss_DM_OD_LO           PIN_DM_OD_LO
        #define Thermoster_Vss_DM_OD_HI           PIN_DM_OD_HI
        #define Thermoster_Vss_DM_STRONG          PIN_DM_STRONG
        #define Thermoster_Vss_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Thermoster_Vss_MASK               Thermoster_Vss__MASK
#define Thermoster_Vss_SHIFT              Thermoster_Vss__SHIFT
#define Thermoster_Vss_WIDTH              1u

/* Interrupt constants */
#if defined(Thermoster_Vss__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Thermoster_Vss_SetInterruptMode() function.
     *  @{
     */
        #define Thermoster_Vss_INTR_NONE      (uint16)(0x0000u)
        #define Thermoster_Vss_INTR_RISING    (uint16)(0x0001u)
        #define Thermoster_Vss_INTR_FALLING   (uint16)(0x0002u)
        #define Thermoster_Vss_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Thermoster_Vss_INTR_MASK      (0x01u) 
#endif /* (Thermoster_Vss__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Thermoster_Vss_PS                     (* (reg8 *) Thermoster_Vss__PS)
/* Data Register */
#define Thermoster_Vss_DR                     (* (reg8 *) Thermoster_Vss__DR)
/* Port Number */
#define Thermoster_Vss_PRT_NUM                (* (reg8 *) Thermoster_Vss__PRT) 
/* Connect to Analog Globals */                                                  
#define Thermoster_Vss_AG                     (* (reg8 *) Thermoster_Vss__AG)                       
/* Analog MUX bux enable */
#define Thermoster_Vss_AMUX                   (* (reg8 *) Thermoster_Vss__AMUX) 
/* Bidirectional Enable */                                                        
#define Thermoster_Vss_BIE                    (* (reg8 *) Thermoster_Vss__BIE)
/* Bit-mask for Aliased Register Access */
#define Thermoster_Vss_BIT_MASK               (* (reg8 *) Thermoster_Vss__BIT_MASK)
/* Bypass Enable */
#define Thermoster_Vss_BYP                    (* (reg8 *) Thermoster_Vss__BYP)
/* Port wide control signals */                                                   
#define Thermoster_Vss_CTL                    (* (reg8 *) Thermoster_Vss__CTL)
/* Drive Modes */
#define Thermoster_Vss_DM0                    (* (reg8 *) Thermoster_Vss__DM0) 
#define Thermoster_Vss_DM1                    (* (reg8 *) Thermoster_Vss__DM1)
#define Thermoster_Vss_DM2                    (* (reg8 *) Thermoster_Vss__DM2) 
/* Input Buffer Disable Override */
#define Thermoster_Vss_INP_DIS                (* (reg8 *) Thermoster_Vss__INP_DIS)
/* LCD Common or Segment Drive */
#define Thermoster_Vss_LCD_COM_SEG            (* (reg8 *) Thermoster_Vss__LCD_COM_SEG)
/* Enable Segment LCD */
#define Thermoster_Vss_LCD_EN                 (* (reg8 *) Thermoster_Vss__LCD_EN)
/* Slew Rate Control */
#define Thermoster_Vss_SLW                    (* (reg8 *) Thermoster_Vss__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Thermoster_Vss_PRTDSI__CAPS_SEL       (* (reg8 *) Thermoster_Vss__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Thermoster_Vss_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Thermoster_Vss__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Thermoster_Vss_PRTDSI__OE_SEL0        (* (reg8 *) Thermoster_Vss__PRTDSI__OE_SEL0) 
#define Thermoster_Vss_PRTDSI__OE_SEL1        (* (reg8 *) Thermoster_Vss__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Thermoster_Vss_PRTDSI__OUT_SEL0       (* (reg8 *) Thermoster_Vss__PRTDSI__OUT_SEL0) 
#define Thermoster_Vss_PRTDSI__OUT_SEL1       (* (reg8 *) Thermoster_Vss__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Thermoster_Vss_PRTDSI__SYNC_OUT       (* (reg8 *) Thermoster_Vss__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Thermoster_Vss__SIO_CFG)
    #define Thermoster_Vss_SIO_HYST_EN        (* (reg8 *) Thermoster_Vss__SIO_HYST_EN)
    #define Thermoster_Vss_SIO_REG_HIFREQ     (* (reg8 *) Thermoster_Vss__SIO_REG_HIFREQ)
    #define Thermoster_Vss_SIO_CFG            (* (reg8 *) Thermoster_Vss__SIO_CFG)
    #define Thermoster_Vss_SIO_DIFF           (* (reg8 *) Thermoster_Vss__SIO_DIFF)
#endif /* (Thermoster_Vss__SIO_CFG) */

/* Interrupt Registers */
#if defined(Thermoster_Vss__INTSTAT)
    #define Thermoster_Vss_INTSTAT            (* (reg8 *) Thermoster_Vss__INTSTAT)
    #define Thermoster_Vss_SNAP               (* (reg8 *) Thermoster_Vss__SNAP)
    
	#define Thermoster_Vss_0_INTTYPE_REG 		(* (reg8 *) Thermoster_Vss__0__INTTYPE)
#endif /* (Thermoster_Vss__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Thermoster_Vss_H */


/* [] END OF FILE */
