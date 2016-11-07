// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.
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

    //so that when they are all given +volts they move forward
    leftFrontWheel->SetInverted(true);
    leftRearWheel->SetInverted(true);
    rightFrontWheel->SetInverted(true);
    rightRearWheel->SetInverted(true);


}

void Chassis::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new MecanumDrive());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

/*
void Chassis::MecanumDrive_Cartesian(float x, float y, float rotation, float gyro) {
	MecanumDrive_Cartesian(x, y, rotation, gyro);
}
*/

void Chassis::SetTank(double leftSpeed, double rightSpeed)
{
	leftFrontWheel->Set(-leftSpeed);
	leftRearWheel->Set(-leftSpeed);
	rightFrontWheel->Set(-rightSpeed);
	rightRearWheel->Set(-rightSpeed);

}

void Chassis::SetStrafe(double frontSpeed, double rearSpeed)
{
	leftFrontWheel->Set(frontSpeed);
	leftRearWheel->Set(rearSpeed);
	rightFrontWheel->Set(frontSpeed);
	rightRearWheel->Set(rearSpeed);
}
