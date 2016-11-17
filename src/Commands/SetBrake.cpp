#include "SetBrake.h"
#include "../Robot.h"

SetBrake::SetBrake(Elevator::BrakeValue value)
: mValue(value)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void SetBrake::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SetBrake::Execute()
{
	Robot::elevator->SetBrake(mValue);
}

// Make this return true when this Command no longer needs to run execute()
bool SetBrake::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetBrake::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetBrake::Interrupted()
{

}
