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
// need to check if it is running 
	void Glowglowplugs(int which_cycle){
        extern volatile int Not_runing;
        extern volatile int cycles;
        extern volatile int RPM_Count;
    switch (which_cycle){
    case fullplusafter:
        if(Not_Runing==1){
        Glow_Plug_pin_Write(high);//writes pin high to energize the glow plug relay
        Glow_plug_indicator_Write(high);//writes the pin high to energize the relay
        CyDelay(23000);     // waits 35 sec
        Glow_Plug_pin_Write(low);  // turns off the relay
        cycles=1;
        }
        Battery_interlock_Write(high);
        Glow_Plug_pin_Write(low);
        Glow_plug_indicator_Write(low);// turns off the relay that controls the dash light 
        
        break;
         
    case half:
        if(Not_runing==1){
        Glow_plug_indicator_Write(high);    
        Glow_Plug_pin_Write(high);
        CyDelay(15000);     // 20 secs for warm engine
        Glow_Plug_pin_Write(low);
        Glow_plug_indicator_Write(low);
        cycles=1;
        }
       
        Battery_interlock_Write(high);
        break;
        
    case NONE:
        Battery_interlock_Write(high);
        break;
     }
        
        
        
        
    }
/* [] END OF FILE */
