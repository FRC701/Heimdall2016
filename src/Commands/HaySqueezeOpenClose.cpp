#include "HaySqueezeOpenClose.h"
#include "../Robot.h"

HaySqueezeOpenClose::HaySqueezeOpenClose()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void HaySqueezeOpenClose::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void HaySqueezeOpenClose::Execute()
{
	if(Robot::elevator->GetHaySqueeze() == DoubleSolenoid::kForward)
			Robot::elevator->SetHaySqueeze(DoubleSolenoid::kReverse);
		else
			Robot::elevator->SetHaySqueeze(DoubleSolenoid::kForward);

}

// Make this return true when this Command no longer needs to run execute()
bool HaySqueezeOpenClose::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void HaySqueezeOpenClose::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HaySqueezeOpenClose::Interrupted()
{

}
