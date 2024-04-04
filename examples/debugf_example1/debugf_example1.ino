
/*****************************************************************************
* | File      	:	Debugf example
* | Function    :	Debug with C-style printf functionality
* | Info        : JV 2024
*----------------
* |	This version:   V1.0
* | Date        :   2024-01-16
* | Info        :   Basic version
*
******************************************************************************/
#include <Arduino.h>
#include <stdint.h>
#include "DEBUGF.h"

//Global Variable
const char textexample1[] PROGMEM = {"This #1 a debugf-example for a const text-string"};
char  textexample2[] = {"This #2 a debugf-example for a variable text-string"};
float temperature = 0.23434132515;
int t=300,r=10;
long tt=0;

void setup()
{
Serial.begin(115200);
delay(2000);
Serial.print("Starting Debug example\n");
DEBUGF("This is debug text, void-able by undefining \"#define DEBUGF_\"  to 0 - see library \n");
DEBUGF("Printf style : Printing variables with ie %%0.3f in text function: Float on 3 decimals, temperature*100 =  %0.3f\n\n",temperature*100);

DEBUGF("Displaying Data in PROG memory : const char string[%s] in memory :",textexample1);
DEBUGBUFFER_8H((uint8_t*) textexample1,32,8 );
DEBUGF("Displaying data in RAM memory : ie this char string[%s] in memory :",textexample2);
DEBUGBUFFER_8H((uint8_t*) textexample2,32,8 );
delay(2000);

DEBUGF("Displaying program in FLASH memory : ie this function1() in program memory :");
DEBUGBUFFER_8H((uint8_t*) function1,24,8);
DEBUGF("Now calling Function1() \n"); 
delay(2000);
tt=function1(millis());
DEBUGF("Function-call round time is %d ms", tt);

Serial.print("\nEnding Debug example\n");
}



void loop()
{
while(1) ;
}

long function1(long timet)
{
long localtime = millis();
char function1text[] = "Function1() const char text";
DEBUGF("Function1() : Time is %d ms or 0x%x , 32bit memorymap of local variable 'localtime':",localtime,localtime);
DEBUGBUFFER_32H((uint32_t*) &localtime,16,8 );
delay(2000);
DEBUGF("Function1() : 32bit memorymap of local string 'function1text[%s]':",function1text);
DEBUGBUFFER_32H((uint32_t*) function1text,24,8 );
return millis()-timet;
}
