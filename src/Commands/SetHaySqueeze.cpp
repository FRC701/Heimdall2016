#include "SetHaySqueeze.h"
#include "../Robot.h"

SetHaySqueeze::SetHaySqueeze(Elevator::HaySqueezeValue value)
: mValue(value)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void SetHaySqueeze::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SetHaySqueeze::Execute()
{
	Robot::elevator->SetHaySqueeze(mValue);
}

// Make this return true when this Command no longer needs to run execute()
bool SetHaySqueeze::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetHaySqueeze::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetHaySqueeze::Interrupted()
{

}
