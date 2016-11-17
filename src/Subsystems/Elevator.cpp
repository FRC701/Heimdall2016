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

// already done in wiring //    rightSpool->SetInverted(true);

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

bool Elevator::IsBrakeOn () const
{
	return brake->Get() == static_cast<DoubleSolenoid::Value>(kBrake);
}

bool Elevator::IsHaySqueezeOpen() const
{
	return haySqueeze->Get() == static_cast<DoubleSolenoid::Value>(kOpen);
}

bool Elevator::IsHaySqueezeClosed() const
{
	return !( leftHaySqueezeSensor->Get() || rightHaySqueezeSensor->Get() );
}

void Elevator::SetHaySqueeze(HaySqueezeValue value)
{
	haySqueeze->Set(static_cast<DoubleSolenoid::Value>(value));
}
