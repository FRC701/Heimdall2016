#include "ToggleBrake.h"

ToggleBrake::ToggleBrake()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void ToggleBrake::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ToggleBrake::Execute()
{
	Elevator::BrakeValue value
			= Robot::elevator->IsBrakeOn() ? Elevator::kBrakeOff : Elevator::kBrake;
		Robot::elevator->SetBrake(value);
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleBrake::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToggleBrake::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleBrake::Interrupted()
{

}
