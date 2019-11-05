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

#include <macros.h>
int32 MeasureResistorVoltage(uint8 channel){
    //voltage across resistor
    int32 result;
    
    //offset voltage
    int32 offset;
    
    //select correct AMUX channel
    AMux_1_FastSelect(channel);
    
    //read voltage accross resistor
    ADC_DelSig_1_StartConvert();
    
    ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT);
    result = ADC_DelSig_1_GetResult32();
    
    //get  the offset voltage
    offset=GetOffset();
    
    //get CDS differance
    result = result-offset;
    
    //filter the signal
    result = FilterSignal(result,channel);
    
    return result;
}
    
/* [] END OF FILE */
