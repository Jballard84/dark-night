/* ========================================
 *
 * Copyright Diesel Doctor inc , 2017
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * 
 * ========================================
*/
//#include <removeOffsetNoise.h>
//#include <measurement.h>
//#include <device.h>


#include <macros.h>

 void GetTemp(){
    extern volatile int Temp;
    /* Voltages across reference resistor and thermistor*/
	int32 iVref, iVtherm;
	/* Resistance of Thermistor*/
	uint32 iRes;
	/* Temperature value in 100ths of a degree C*/
	int32 iTemp;
    /*Decimal Temp*/
    int decTemp;
    /*Fractional Temp*/
    int32 fracTemp;
    
/* Measure Voltage Across Thermistor*/
    	iVtherm = MeasureResistorVoltage(AMUX_1_VT); 
		
		/* Measure Voltage Across Reference Resistor*/
    	iVref = MeasureResistorVoltage(AMUX_1_VREF);

	   	/*Calculate the resistance of the Thermistor*/
		iRes = (int32)(((float)iVtherm / iVref) * REFERENCE_RESISTOR);
        
        /* Use the thermistor component API function call to obtain 
        the temperature corresponding to the resistance measured*/	
    	iTemp = Thermistor_1_GetTemperature(iRes);
       
    	/*Display -- For Debug*/	

    	/*Determine decimal portion of temperature by dividing temperature by 100*/
        decTemp = iTemp/100;
        
        /*Determine fraction portion of temperature by subtracting decimal portion from result*/
        fracTemp = iTemp - (decTemp * 100);
        /*If fractional temperature is negative make it positive*/
        if(fracTemp < 0)
        {
            fracTemp *= -1;
        }
    	decTemp = decTemp*(9/5) + 32;//converts to Fahrenheit
        //Temp = decTemp; // to see if you need to cycle glow plugs
       Temp = decTemp;
        
} 
  void  CheckTemp(int temp){
    extern volatile int Not_runing;
    extern volatile int GlowPlugsCycle;
    extern volatile int RPM_Count;
    if((temp>=COLD)||(temp>WARMTemp)){  // temp is less than 32 degrees full cycle to glow plugs plus keep cycling after running  
       if(RPM_Count<2) {
        
        GlowPlugsCycle = fullplusafter;
    }
        return;// dont need fans yet so return
    }
    else if((temp<=WARMTemp)||(temp>HOT)) { // temp is above 80 degrees so only half cycle and no after cycling 
        GlowPlugsCycle = half;
          
     } 
    else if(temp<HOT){//need to find this value
        GlowPlugsCycle = NONE;
    }
    
}
/* Fan speed starts at 150 degrees at 30% and increases 10 percent per 10 degrees
  cannot go over 90 percent and no less than 30 percent
    150     =   30%  which is 77
    160     =   40%  which is 102
    170     =   50%  which is 127
    180     =   60%  which is 153
    190     =   70%  which is 179
    200     =   80%  which is 204
    210     =   90%  which is 230
    220     =   WE ARE FUCKED AND IT IS OVERHEATING!!!!!!!
*/
void GetFanSpeed(int temp){ 
    extern volatile int fanSPEED1;
    extern volatile int fan_state;// for debugging purposes
    
    /*if((temp<=LOW1) && (temp>LOW2)){  // temp is between 150 and 160
        fanSPEED1=thirty;
        SetFanSpeed(fanSPEED1);//set fan speed to 30% 
        fan_state=1;
       return;
    }
    else if ((temp<=LOW2)&&(temp>HALF1)){// temp is in between 160 and 170
        fanSPEED1=fourty;
        SetFanSpeed(fanSPEED1);//set fan speed to 40%
        fan_state=2;
        return;
    }
    else if((temp<=HALF1) && (temp>WARM1)) { // temp is in between 170 and 180 
        fanSPEED1=fiffty;
        SetFanSpeed(fanSPEED1);//set fan speed to 50%
        fan_state=3;
        return;
    }
    else if((temp<=WARM1) && (temp>THREEQUATER1HALF2)) { // temp is in between 180 and 190 
        fanSPEED1=sixty;
        SetFanSpeed(fanSPEED1);//set fan speed to 60%
        fan_state=4;
        return;
    }
    else*/ if((temp<=THREEQUATER1HALF2) && (temp>FULL1THREEQUARTER2)) { // temp is in between 190 and 200 
        fanSPEED1=seventy;
        SetFanSpeed(fanSPEED1);//set fan speed to 70%
        fan_state=5;
        return;
    }// COMMENTED THIS OUT TO SEE IF IT RUN'S HOTTER RIGHT NOW IT IS RUNNING TO COLD
    
   else if((temp<=FULL1THREEQUARTER2) && (temp>FULL2)) { // TEMP IS IN BETWEEN 200 AND 210 
        fanSPEED1=eighty;
        SetFanSpeed(fanSPEED1);//SET FAN SPEED TO 80%
        fan_state=6;
        return;
    }
    else if(temp<=FULL2){
        fanSPEED1= ninety;
        SetFanSpeed(fanSPEED1);//set fan speed to 90%
        fan_state=7;
        return;
        }
    else
    SetFanSpeed(0);
    fan_state=0;
    return;
}


void SetFanSpeed(int fanspeed1){
    extern volatile int fanSPEED1;
    
    PWM_1_FANCONTROLLER_Start();
    PWM_1_FANCONTROLLER_WriteCompare(fanspeed1);
    
    
}
/* [] END OF FILE */
