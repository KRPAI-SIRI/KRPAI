#include "servo.h"
#include "Arduino.h"
#include "main.h"


void setup(){
    
  Serial.begin(9600);
  Serial.println("KPAI Coba 1");
  servo beg();  // Analog servos run at ~60 Hz updates
}

void loop(){
    servo maju();
    delay(100);
}

//Ilyas kontol