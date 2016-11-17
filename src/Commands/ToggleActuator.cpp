#include "ToggleActuator.h"
#include "../Robot.h"

ToggleActuator::ToggleActuator()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void ToggleActuator::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ToggleActuator::Execute()
{
	Intake::ActuatorValue value
		= Robot::intake->IsActuatorClosed() ?  Intake::kActuatorOpen : Intake::kActuatorClosed;
	Robot::intake->SetActuator(value);

}

// Make this return true when this Command no longer needs to run execute()
bool ToggleActuator::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToggleActuator::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleActuator::Interrupted()
{

}
