#include <Wire.h> //fetching serial comunication of Arduino boards

int LEDpin=7;    //set pin7 as LEDpin
int x=0;         //declare variable called x
void setup()
{
  Wire.begin(1);  //set data transfer between 2 boards
  Wire.onReceive(receiveEvent); //begine data receiving between 2 boards
  pinMode(LEDpin,OUTPUT);  //set pin7 as output
}

void loop()
{
 delay(100); 
}

void receiveEvent(int howMany){    //start receiving void
  x = Wire.read();          //read from transmitter board to x
  if (x==1){			    //if x equals to 1 then...
   digitalWrite(LEDpin,HIGH);//turn on LED light
   delay(500);
  }
  
  else{digitalWrite(LEDpin,LOW);//if else turn off LED light
       delay(500);
      }}
  