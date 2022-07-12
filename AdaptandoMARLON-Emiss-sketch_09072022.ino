/*
Autor: Marlon Nardi Walendorff
Baseado no trabalho de: Ken Shirriff
*/
 
#include <IRremote.h>
 
IRsend irsend;

#define Power 4
#define Up 5
#define Down 6
#define Circ 7
#define Mode 8
#define Timer 9
#define Eco 10
 
byte flag = 0;
byte flag2 = 0;
byte flag3 = 0;
byte flag4 = 0;
byte flag5 = 0;
byte flag6 = 0;
byte flag7 = 0;
 
void setup()
{
pinMode(Power, INPUT_PULLUP);
pinMode(Up, INPUT_PULLUP);
pinMode(Down, INPUT_PULLUP);
pinMode(Circ, INPUT_PULLUP);
pinMode(Mode, INPUT_PULLUP);
pinMode(Timer, INPUT_PULLUP);
pinMode(Eco, INPUT_PULLUP);
}
 
void loop() {
 
if(!digitalRead(Power)) flag = 1;

if(digitalRead(Power) && flag == 1) irsend.sendNEC(0xFF708F, 32), flag = 0;



if(!digitalRead(Up)) flag2 = 1;
 
if(digitalRead(Up) && flag2 == 1) irsend.sendNEC(0xFF6897, 32), flag2 = 0;
 
 
 
if(!digitalRead(Down)) flag3 = 1;
 
if(digitalRead(Down) && flag3 == 1) irsend.sendNEC(0xFF48B7, 32), flag3 = 0;
 
 
 
if(!digitalRead(Circ)) flag4 = 1;
 
if(digitalRead(Circ) && flag4 == 1) irsend.sendNEC(0xFF58A7, 32), flag4 = 0;



if(!digitalRead(Mode)) flag5 = 1;
 
if(digitalRead(Mode) && flag5 == 1) irsend.sendNEC(0xFFF00F, 32), flag5 = 0;



if(!digitalRead(Timer)) flag6 = 1;
 
if(digitalRead(Timer) && flag6 == 1) irsend.sendNEC(0xFFC837, 32), flag6 = 0;



if(!digitalRead(Eco)) flag7 = 1;
 
if(digitalRead(Eco) && flag7 == 1) irsend.sendNEC(0xFFE817, 32), flag7 = 0;

 
}
