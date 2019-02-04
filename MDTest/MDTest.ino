#include "MotorDriver.h"
MotorDriver mdriver;

void setup() {
  Serial.begin(9600);
}

void loop() {
 mdriver.initMotors();
 mdriver.SetR_Direction(0);
 mdriver.SetR_MPower(150);
  delay(5000);
   mdriver.SetL_Direction(0);
 mdriver.SetL_MPower(150);
 delay(5000);
  //delay(2000);
  
}
