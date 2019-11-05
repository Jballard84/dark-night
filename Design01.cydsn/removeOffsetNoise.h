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
#if !defined(removeOffsetNoise_H)
    #define removeOffsetNoise_H
    #include <device.h>
   #include<macros.h>
    
    //function prototype for IIR filter
    int32 FilterSignal(int32 ADCSample,uint8 sensor);
    
    
    //function to measure voltage accross the rtd sensor at zero current
    int32 GetOffset(void);
    #endif
/* [] END OF FILE */
