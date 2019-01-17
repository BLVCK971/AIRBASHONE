#include <Servo.h>


int val = 0; // set values you need to zero

Servo firstESC; //Create as much as Servoobject you want. You can controll 2 or more Servos at the same time

void setup() {

  firstESC.attach(9);    // attached to pin 9 I just do this with 1 Servo
  delay(15);
  Serial.begin(9600);    // start serial at 9600 baud


   firstESC.write(0);
   delay(1000);
   firstESC.write(90);
   delay(1000);
}

void loop() {

//First connect your ESC WITHOUT Arming. Then Open Serial and follo Instructions
 
  if(Serial.available()) 
    val = Serial.parseInt();    // Parse an Integer from Serial
    Serial.println(val);
    firstESC.write(val);             
      delay(15);
}
