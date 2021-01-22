/*
  Name: LED control
  Date: January 21, 2021
  Author: Joost Lassche
  
  Description: Small program that controls the LEDs with the values of a potentiometer

  Revision: V1.0

  Rev update: V1.0    Januari 21, 2021       *--*  Written the main code
*/

// ------------------------- Declare Global Variables ------------------------- //
int PPin = 2;                 // input pin for the potentiometer is (analog) 2
int del = 200;                // Duration of the delay, change this number to increase or decrease delay time
int x = 0;                    // variable to store the value coming from the sensor
 x = analogRead(PPin);        // read the value from the sensor

// Setup
void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);        // Sets digital pin 13 as output
  pinMode(12, OUTPUT);        // Sets digital pin 12 as output
  pinMode(11, OUTPUT);        // Sets digital pin 11 as output
  pinMode(10, OUTPUT);        // Sets digital pin 10 as output
  pinMode(9,  OUTPUT);        // Sets digital pin 9 as output
  pinMode(8,  OUTPUT);        // Sets digital pin 8 as output
  pinMode(7,  OUTPUT);        // Sets digital pin 7 as output
}

// Main loop
void loop()
{
  LR();             // Function LR
  RL();             // Function RL
  INS();            // Function INS
  OUT();            // Function OUT
  ALT();            // Function ALT
}

// function - LEDs blink from left to right
void LR() {
  if ((x >= 0) && (x <= 200)) {     // if the value of x is between 0 and 200, then execute next code
   digitalWrite(13,HIGH);           // make pin 13 HIGH - LED on pin 13 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(13,LOW);            // make pin 13 LOW - LED on pin 13 off
   
   digitalWrite(12,HIGH);           // make pin 12 HIGH - LED on pin 12 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(12,LOW);            // make pin 12 LOW - LED on pin 12 off
   
   digitalWrite(11,HIGH);           // make pin 11 HIGH - LED on pin 11 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(11,LOW);            // make pin 11 LOW - LED on pin 11 off
   
   digitalWrite(10,HIGH);           // make pin 10 HIGH - LED on pin 10 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(10,LOW);            // make pin 10 LOW - LED on pin 10 off
   
   digitalWrite(9,HIGH);            // make pin 9 HIGH - LED on pin 9 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(9,LOW);             // make pin 9 LOW - LED on pin 9 off
   
   digitalWrite(8,HIGH);            // make pin 8 HIGH - LED on pin 8 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(8,LOW);             // make pin 8 LOW - LED on pin 8 off
   
   digitalWrite(7,HIGH);            // make pin 7 HIGH - LED on pin 7 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(7,LOW);             // make pin 7 LOW - LED on pin 7 off 
  }
}

// function - LEDs blink from right to left
void RL() {
  if ((x >= 200) && (x <= 400)) {   // if the value of x is between 200 and 400, then execute next code
   digitalWrite(7,HIGH);            // make pin 7 HIGH - LED on pin 7 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(7,LOW);             // make pin 7 LOW - LED on pin 7 off
   
   digitalWrite(8,HIGH);            // make pin 8 HIGH - LED on pin 8 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(8,LOW);             // make pin 8 LOW - LED on pin 8 off
   
   digitalWrite(9,HIGH);            // make pin 9 HIGH - LED on pin 9 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(9,LOW);             // make pin 9 LOW - LED on pin 9 off
   
   digitalWrite(10,HIGH);           // make pin 10 HIGH - LED on pin 10 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(10,LOW);            // make pin 10 LOW - LED on pin 10 off
   
   digitalWrite(11,HIGH);           // make pin 11 HIGH - LED on pin 11 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(11,LOW);            // make pin 11 LOW - LED on pin 11 off
   
   digitalWrite(12,HIGH);           // make pin 12 HIGH - LED on pin 12 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(12,LOW);            // make pin 12 LOW - LED on pin 12 off
   
   digitalWrite(13,HIGH);           // make pin 13 HIGH - LED on pin 13 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(13,LOW);            // make pin 13 LOW - LED on pin 13 off
  }
}

// function - LEDs blink from the inside to the outside
void INS()  {
  if ((x >= 400) && (x <= 600)) {   // if the value of x is between 400 and 600, then execute next code
   digitalWrite(7,HIGH);            // make pin 7 HIGH - LED on pin 7 on
   digitalWrite(13,HIGH);           // make pin 13 HIGH - LED on pin 13 on
   delay(del);                      // the delay is del in milliseconds
   
   digitalWrite(7,LOW);             // make pin 7 LOW - LED on pin 7 off
   digitalWrite(13,LOW);            // make pin 13 LOW - LED on pin 13 off
   digitalWrite(8,HIGH);            // make pin 8 HIGH - LED on pin 8 on
   digitalWrite(12,HIGH);           // make pin 12 HIGH - LED on pin 12 on
   delay(del);                      // the delay is del in milliseconds

   digitalWrite(8,LOW);             // make pin 8 LOW - LED on pin 8 off
   digitalWrite(12,LOW);            // make pin 12 LOW - LED on pin 12 off
   digitalWrite(9,HIGH);            // make pin 9 HIGH - LED on pin 9 on
   digitalWrite(11,HIGH);           // make pin 11 HIGH - LED on pin 11 on
   delay(del);                      // the delay is value in milliseconds

   digitalWrite(9,LOW);             // make pin 9 LOW - LED on pin 9 off
   digitalWrite(11,LOW);            // make pin 11 LOW - LED on pin 11 off
   digitalWrite(10,HIGH);           // make pin 10 HIGH - LED on pin 10 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(10,LOW);            // make pin 10 LOW - LED on pin 10 off
  }
}

// function - LEDs blink from the outside to the inside
void OUT()  {
  if ((x >= 600) && (x <= 800)) {   // if the value of x is between 600 and 800, then execute next code
   digitalWrite(10,HIGH);           // make pin 10 HIGH - LED on pin 10 on
   delay(del);                      // the delay is del in milliseconds

   digitalWrite(10,LOW);            // make pin 10 LOW - LED on pin 10 off
   digitalWrite(11,HIGH);           // make pin 11 HIGH - LED on pin 11 on
   digitalWrite(9,HIGH);            // make pin 9 HIGH - LED on pin 9 on
   delay(del);                      // the delay is del in milliseconds

   digitalWrite(11,LOW);            // make pin 11 LOW - LED on pin 11 off
   digitalWrite(9,LOW);             // make pin 9 LOW - LED on pin 9 off
   digitalWrite(12,HIGH);           // make pin 12 HIGH - LED on pin 12 on
   digitalWrite(8,HIGH);            // make pin 8 HIGH - LED on pin 8 on
   delay(del);                      // the delay is del in milliseconds

   digitalWrite(12,LOW);            // make pin 12 LOW - LED on pin 12 off
   digitalWrite(8,LOW);             // make pin 8 LOW - LED on pin 8 off
   digitalWrite(13,HIGH);           // make pin 13 HIGH - LED on pin 13 on
   digitalWrite(7,HIGH);            // make pin 7 HIGH - LED on pin 7 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(13,LOW);            // make pin 13 LOW - LED on pin 13 off
   digitalWrite(7,LOW);             // make pin 7 LOW - LED on pin 7 off
  }
}

// function - LEDs blink alternately
void ALT()  {
  if (x > 800)  {                   // if the value of x greater than 800, then execute next code
   digitalWrite(13,HIGH);           // make pin 13 HIGH - LED on pin 13 on
   digitalWrite(11,HIGH);           // make pin 11 HIGH - LED on pin 11 on
   digitalWrite(9,HIGH);            // make pin 9 HIGH - LED on pin 9 on
   digitalWrite(7,HIGH);            // make pin 7 HIGH - LED on pin 7 on
   delay(del);                      // the delay is del in milliseconds
    
   digitalWrite(13,LOW);            // make pin 13 LOW - LED on pin 13 off
   digitalWrite(11,LOW);            // make pin 11 LOW - LED on pin 11 off
   digitalWrite(9,LOW);             // make pin 9 LOW - LED on pin 9 off
   digitalWrite(7,LOW);             // make pin 7 LOW - LED on pin 7 off

   digitalWrite(12,HIGH);           // make pin 12 HIGH - LED on pin 12 on
   digitalWrite(10,HIGH);           // make pin 10 HIGH - LED on pin 10 on
   digitalWrite(8,HIGH);            // make pin 8 HIGH - LED on pin 8 on
   delay(del);                      // the delay is del in milliseconds
   digitalWrite(12,LOW);            // make pin 12 LOW - LED on pin 12 off
   digitalWrite(10,LOW);            // make pin 10 LOW - LED on pin 10 off
   digitalWrite(8,LOW);             // make pin 8 LOW - LED on pin 8 off
  }
}
