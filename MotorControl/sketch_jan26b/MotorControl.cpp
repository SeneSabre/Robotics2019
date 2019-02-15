#include <MotorDriver.h>
#include "Arduino.h"
#include "MotorControl.h"
MotorDriver RightDriver;
MotorDriver LeftDriver;
void MotorControl::PivotL(int degree){
  RightDriver.initMotors();
  RightDriver.SetR_Direction(0);
  RightDriver.SetL_Direction(0);
  RightDriver.SetR_MPower(200);
  RightDriver.SetL_MPower(200); 
  delay(degree*8);
  Stop();
}
void MotorControl::PivotR(int degree){
  RightDriver.initMotors();
  RightDriver.SetR_Direction(1);
  RightDriver.SetL_Direction(1);
  RightDriver.SetR_MPower(200);
  RightDriver.SetL_MPower(200);
  delay(degree*8);
  Stop();
}
void MotorControl::TurnL(int degree){
  //need some stuff to do degree calculations, will put arbitrary to test for now
  int rad;
  rad = (degree*3.14)/180;
  RightDriver.initMotors();
  LeftDriver.initMotors();
  RightDriver.SetR_Direction(0);
  LeftDriver.SetL_Direction(0);
  RightDriver.SetR_MPower(220);
  LeftDriver.SetL_MPower(200);
  
  
}
void MotorControl::TurnR(int degree){
  //need some stuff to do degree calculations, will put arbitrary to test for now
  //RightDriver.SetR_Direction(1);
  LeftDriver.SetL_Direction(1);
  //RightDriver.SetR_MPower(245);
  LeftDriver.SetL_MPower(250);
  delay(50);
}

void MotorControl::Stop(){   //encoders will probably need to be used to create an efficient way of measuring the speed
    RightDriver.SetL_MPower(0);
    LeftDriver.SetR_MPower(0);//then determining the intervals to slow down in      
}
