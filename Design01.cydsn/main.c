/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *333 was the first try shifted ok but not firm hard down shift 
444 was the second try and shifts better but still late on overdrive hard downshifts
300 shifts soft and still late on overdrive hard downshifts
 * ========================================
*/
#include <macros.h>

volatile uint32 readperiod;
volatile float freq;

// (120/RPM) is the actual RPM of the engine!!!
volatile float RPM;
volatile int cold_advance=0;
volatile int mass_air_voltage;
volatile float mass_air_variable=333.0;//was 333 ,444 shif
volatile  int counter=0;
volatile int Not_runing=1;
volatile int cycles =0;
volatile int LowTemp;
volatile int fanSPEED1;
volatile int GlowPlugsCycle;
volatile int Temp;
volatile int mass_voltage;
volatile int RPM_Count=0;
volatile int fan_state;
int main(void)
{
   CyGlobalIntEnable; /* Enable global interrupts. */
   MASS_AIRFLOW_Start();
    isr_CKP_counter_Start();
   isr_Not_Runing_Start();
   Timer_Sytem_Start();
   Timer_1_Start();   
   //Timer_1_WritePeriod((uint32)(Not_running_Idle));
   Crank_Signal_Start();
   Cam_signal_Start();
   
   //mass_air_Start();
   ADC_DelSig_1_Start();
   ADC_DelSig_1_StartConvert();
   AMux_1_Start();
   Opamp_1_Start();
   VDAC8_1_Start();
   PWM_1_FANCONTROLLER_Enable();   
   Battery_interlock_Write(low);
   Glow_plug_indicator_Write(low);
   Glow_Plug_pin_Write(low);
    Cold_Advance_Write(low);
  // GetTemp();
   //Glowglowplugs(half);
//Cold_Advance_Write(1);  
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
//need to check temp if temp is low cycle glow plugs before starting 
    while(ALWAYS){
        switch (Not_runing){
        case Runing:
            GetTemp();
            CheckTemp( Temp);
            if (cycles<1){
            CyDelay(10000);
            Glowglowplugs(GlowPlugsCycle);
            }
            if (Temp>=LOWTemp){ // temp is 80 degrees or less so turn on cold advance 
                Cold_Advance_Write(high);// turns on the cold advance till it gets to a 100 degrees
            }
            else{
                Cold_Advance_Write(low);
            }
            GetFanSpeed(Temp);
        break;
         
        case Not_Runing:
            GetTemp();
            Timer_1_WritePeriod((uint16)Not_running_Idle);
            CheckTemp( Temp);
            if(cycles<1){
               Glowglowplugs(GlowPlugsCycle);
            }
            Cold_Advance_Write(high);
            GetFanSpeed(Temp);
            
        break;
     }
        
  
    
    }
    
        
   
    
}

/* [] END OF FILE */
	
        
        
