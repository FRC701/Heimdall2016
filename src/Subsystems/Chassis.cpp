#include "Chassis.h"
#include "../RobotMap.h"
#include"../Commands/MecanumDrive.h"


Chassis::Chassis() : Subsystem("Chassis") {
	leftLightSensor = RobotMap::chassisLeftLightSensor;
  rightLightSensor = RobotMap::chassisRightLightSensor;
  leftFrontWheel = RobotMap::chassisLeftFrontWheel;
  leftRearWheel = RobotMap::chassisLeftRearWheel;
  rightFrontWheel = RobotMap::chassisRightFrontWheel;
  rightRearWheel = RobotMap::chassisRightRearWheel;



}

void Chassis::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new MecanumDrive());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::SetTank(double leftSpeed, double rightSpeed)
{
	leftFrontWheel->Set(-leftSpeed);
	leftRearWheel->Set(-leftSpeed);
	rightFrontWheel->Set(-rightSpeed);
	rightRearWheel->Set(-rightSpeed);
}
