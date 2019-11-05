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

#include <removeOffsetNoise.h>
#include <measurement.h>
#include <device.h>
#include <macros.h>

int32 FilterSignal(int32 ADCSample , uint8 sensor){
    static int32 filteredValue[NUM_SENSORS] = {0,0};
    int32 filValueRounded;
    ADCSample <<= MAX_FILTER_COEFF_SHIFT;
    if ((ADCSample > (filteredValue[sensor]+FILTER_FEEDFORWARD)) || (ADCSample<(filteredValue[sensor]-FILTER_FEEDFORWARD))) {
        filteredValue[sensor]=ADCSample;
    }
   else{
    filteredValue[sensor]=filteredValue[sensor]+((ADCSample - filteredValue[sensor]) >> (RTD_FILTER_COEFF_SHIFT));
}
   filValueRounded=(filteredValue[sensor]>>MAX_FILTER_COEFF_SHIFT)+((filteredValue[sensor] & 0x00000080) >> (MAX_FILTER_COEFF_SHIFT-1));
    return filValueRounded;
}

int32 GetOffset(void){
    int32 result;
    AMux_1_FastSelect(AMUX_1_CDS);
    ADC_DelSig_1_StartConvert();
    ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT);
    
    result = ADC_DelSig_1_GetResult32();
    
    return result;
    
}







/* [] END OF FILE */
