//SLAVE RECEIVER
//Program for Arduino 1

#include <Wire.h>
void setup(){
  Wire.begin(8);
  Wire.onRequest(requestEvent);
}

void loop(){
  delay(100);
}

void requestEvent(){
  Write.write("hello ");
}
