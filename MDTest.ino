#include "MotorDriver.h"
MotorDriver mdriver;

void setup() {
  Serial.begin(9600);
}

void loop() {

 mdriver.initMotors();
 mdriver.PivotL(1);
 //mdriver.SetR_Direction(1);
 //mdriver.SetL_Direction(1);
// mdriver.SetL_MPower(75);
 //mdriver.SetR_MPower(75);
 //delay(50);
  
}
