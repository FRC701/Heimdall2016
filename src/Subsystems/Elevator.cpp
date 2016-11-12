// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Elevator.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Elevator::Elevator() : Subsystem("Elevator") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    haySqueeze = RobotMap::elevatorhaySqueeze;
    rightHaySqueezeSensor = RobotMap::elevatorrightHaySqueezeSensor;
    leftHaySqueezeSensor = RobotMap::elevatorleftHaySqueezeSensor;
    brake = RobotMap::elevatorbrake;
    leftSpool = RobotMap::elevatorleftSpool;
    rightSpool = RobotMap::elevatorrightSpool;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Elevator::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Elevator::SetSpool(float left, float right) {
	leftSpool->Set(left);
	rightSpool->Set(right);
}

DoubleSolenoid::Value Elevator::GetHaySqueeze() const {
	DoubleSolenoid::Value value = haySqueeze->Get();
	return value;
}

void Elevator::SetHaySqueeze(DoubleSolenoid::Value value) {
	haySqueeze->Set(value);
}
