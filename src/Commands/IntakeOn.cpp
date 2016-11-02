#include "IntakeOn.h"

IntakeOn::IntakeOn()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void IntakeOn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeOn::Execute()
{
	//TODO set this to a axis of some point

	if(Robot::oi->getcoDriver()->GetRawAxis(1) >= 0.1)
		Robot::intake->SetIntake(Robot::oi->getcoDriver()->GetRawAxis(1));
	else if(Robot::oi->getcoDriver()->GetRawAxis(2) >= 0.1)
		Robot::intake->SetIntake( -(Robot::oi->getcoDriver()->GetRawAxis(2)) );
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeOn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeOn::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeOn::Interrupted()
{

}
