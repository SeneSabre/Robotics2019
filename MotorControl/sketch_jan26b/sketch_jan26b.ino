#include "MotorControl.h"
 MotorControl mcontrol;
void setup() {
  Serial.begin(9000);

}

void loop() {
  mcontrol.PivotL(45);
  //delay(1000);
  //mcontrol.PivotR(45);
  delay(1000);
  //mcontrol.PivotR(50);
  ///delay(3000);
  //mcontrol.TurnL(1);
  //delay(1000);
  //mcontrol.Stop();
  //delay(1000);
  //mcontrol.TurnR(1); 
}
