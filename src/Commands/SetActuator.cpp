#include "SetActuator.h"

SetActuator::SetActuator(Intake::ActuatorValue value)
: mValue(value)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void SetActuator::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SetActuator::Execute()
{
	Robot::intake->SetActuator(mValue);
}

// Make this return true when this Command no longer needs to run execute()
bool SetActuator::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetActuator::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetActuator::Interrupted()
{

}
