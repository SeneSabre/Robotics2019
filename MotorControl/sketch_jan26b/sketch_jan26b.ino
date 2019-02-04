#include "MotorControl.h"
 MotorControl mcontrol;
void setup() {
  Serial.begin(9000);

}

void loop() {
  //mcontrol.inMotors();
  mcontrol.PivotL(70);
  //mcontrol.PivotR(50);
  ///delay(3000);
  //mcontrol.TurnL(1);
  //delay(3000);
  //mcontrol.TurnR(1); 
  //delay(3000);
}
