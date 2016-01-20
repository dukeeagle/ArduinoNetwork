//MASTER RECEIVER
//Arduino 2
#include <Wire.h>

void setup(){
  Wire.begin();  //join I^2C bus
  Serial.begin(9600);  //start serial output
}

void loop(){
  Wire.requestFrom(8, 6);  //requests 6 bytes from slave device #8
  
  while (Wire.available()){  //in case slave sends less than requested
    char c = Wire.read();
    Serial.print(c);
  }
  
  delay(500);
}
  
