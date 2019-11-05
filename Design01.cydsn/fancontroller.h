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
#if !defined(fancontroller_H)
    #define fancontroller_H
    #include <device.h>
   
    //function to check the temp 
    void GetTemp(void);
    
     //function to measure voltage accross the rtd sensor at zero current
    void CheckTemp(int temp);
    void SetFanSpeed(int fanspeed1);
   
    // function to set fan speed is used in check temp
    void GetFanSpeed(int temp);
    #endif
/* [] END OF FILE */

