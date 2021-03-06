#include "LightsOn.h"
#include "../Robot.h"

LightsOn::LightsOn(Lights::LightValue value)
: mValue(value)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::lights.get());
}

// Called just before this Command runs the first time
void LightsOn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LightsOn::Execute()
{
  Robot::lights->LightOn(mValue);
}

// Make this return true when this Command no longer needs to run execute()
bool LightsOn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void LightsOn::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LightsOn::Interrupted()
{

}
