/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <Fan_1.h>
#include <Fan_2.h>
#include <Check_Temp.h>
#include <MASS_AIRFLOW.h>
#include <mass_air.h>
#include <measurement.h>
#include<Control_Reg_2.h>
#include <removeOffsetNoise.h>
#include <device.h>
#include <AMux_1.h>
#include <ADC_DelSig_1.h>
#include <fancontroller.h>
#include <stdio.h>
#include <glowplugcontroller.h>
#include <PWM_1.h>
#include <Glow_Plug_pin.h>
#include<Timer_Sytem.h>
#include<Control_Reg_1.h>
#include "project.h"
#include <isr_CKP_counter.h>
#include <Clock_1.h>
#include <Timer_1.h>
#include<Glow_plug_indicator.h>
#include <isr_Not_Runing.h>
#include <ADC_DelSig_1.h>
#include <AMux_1.h>
#include <Opamp_1.h>
#include <VDAC8_1.h>
#include <removeOffsetNoise.h>
#include <measurement.h>
#include <device.h>
#include <fancontroller.h>
#include <stdio.h>  
#include<Clock_2.h>

#define CSV_entries (3749)
#define Timer_Sytem_period (16777216)
#define ALWAYS (1)
#define Clock_freq (72000000)
#define Not_running_Idle (200000)
#define Runing (0)
#define Not_Runing (1)
#define HOT (40)
#define LOWTemp (50)
#define WARMTemp (50)
#define COLD (60)
#define fullplusafter (1)
#define thirtysec (30)
#define half (2)
#define NONE (3)
#define LOW1 (25)
#define LOW2 (20)
#define HALF1   (13)
#define WARM1 (9)
#define THREEQUATER1HALF2   (-1)
#define FULL1THREEQUARTER2  (-10)
#define FULL2   (-19)
#define thirty (77)
#define fourty (102)
#define fiffty (127)
#define sixty (153)
#define seventy (179)
#define eighty (204)
#define ninety (230)
#define high    (1)
#define low (0)
#define off (0)
 /* filter coefficent for rtd sensor */
    #define RTD_FILTER_COEFF_SHIFT  0
    #define MAX_FILTER_COEFF_SHIFT  8
    
    //number of sensors reading that require fltering
    #define NUM_SENSORS 2
    
    //number of each sensor
    #define REF_RES 1
    #define THERMISTOR      0
    
    //filter feedforward. it is set equal to 100 adc counts it has been scaled by 256 to account for maximum_filter_coeff 
    #define FILTER_FEEDFORWARD  50*256
    
    #define AMUX_1_VT 0
    #define AMUX_1_VREF 1
    #define AMUX_1_CDS 2
    #define REFERENCE_RESISTOR 10000
/* [] END OF FILE */
