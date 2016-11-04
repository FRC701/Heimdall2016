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
#include "../Commands/ElevatorOn.h"

Elevator::Elevator() : Subsystem("Elevator") {
    haySqueeze = RobotMap::elevatorHaySqueeze;
    rightHaySqueezeSensor = RobotMap::elevatorRightHaySqueezeSensor;
    leftHaySqueezeSensor = RobotMap::elevatorLeftHaySqueezeSensor;
    brake = RobotMap::elevatorBrake;
    leftSpool = RobotMap::elevatorLeftSpool;
    rightSpool = RobotMap::elevatorRightSpool;

    rightSpool->SetInverted(true);

    SetBrake(Elevator::kBrake);
}

void Elevator::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new ElevatorOn(0.0));
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Elevator::SetSpool(double speed)
{
	leftSpool->Set(speed);
	rightSpool->Set(speed);
}

void Elevator::SetBrake(BrakeValue value)
{
	brake->Set(static_cast<DoubleSolenoid::Value>(value));
}

bool Elevator::IsBrakeOn()
{
	return brake->Get() == static_cast<DoubleSolenoid::Value>(kBrake);
}

bool Elevator::IsHaySqueezeOpen()
{
	return leftHaySqueezeSensor->Get() || rightHaySqueezeSensor->Get();
}

bool Elevator::IsHaySqueezeClosed()
{
	return !( leftHaySqueezeSensor->Get() || rightHaySqueezeSensor->Get() );
}

void Elevator::SetHaySqueeze(HaySqueezeValue value)
{
	haySqueeze->Set(static_cast<DoubleSolenoid::Value>(value));
}
