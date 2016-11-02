#include "AutoIntakeOn.h"

AutoIntakeOn::AutoIntakeOn(double speed)
: mSpeed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void AutoIntakeOn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoIntakeOn::Execute()
{
	//TODO set this to a axis of some point
		Robot::intake->SetIntake(mSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoIntakeOn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void AutoIntakeOn::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoIntakeOn::Interrupted()
{

}
