#include "MotorDriver.h"
#include "Arduino.h"
#include "MotorControl.h"
MotorDriver LeftDriver;
MotorDriver RightDriver;
void MotorControl::PivotL(int Pwm){
  RightDriver.initMotors();
  RightDriver.SetR_Direction(1);
  //LeftDriver.SetL_Direction(0);
  RightDriver.SetR_MPower(Pwm);
  //LeftDriver.SetL_MPower(Pwm); 
}
void MotorControl::PivotR(int Pwm){
  RightDriver.SetR_Direction(0);
  LeftDriver.SetL_Direction(1);
  RightDriver.SetR_MPower(Pwm);
  LeftDriver.SetL_MPower(Pwm);
}
void MotorControl::TurnL(int degree){
  //need some stuff to do degree calculations, will put arbitrary to test for now
  int rad;
  rad = (degree*3.14)/180;
  
  RightDriver.SetR_Direction(0);
  LeftDriver.SetL_Direction(0);
  RightDriver.SetR_MPower(150);
  LeftDriver.SetL_MPower(70);
}
void MotorControl::TurnR(int degree){
  //need some stuff to do degree calculations, will put arbitrary to test for now
  RightDriver.SetR_Direction(0);
  LeftDriver.SetL_Direction(0);
  RightDriver.SetR_MPower(70);
  LeftDriver.SetL_MPower(150);
}
/*
void MotorControl::Stop(){   //encoders will probably need to be used to create an efficient way of measuring the speed
                             //then determining the intervals to slow down in      
}
*/
