#include "ElevatorOn.h"

ElevatorOn::ElevatorOn(double speed)
: mSpeed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void ElevatorOn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ElevatorOn::Execute()
{
	//TODO set this to trigger axis
	Robot::elevator->SetSpool(mSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorOn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ElevatorOn::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorOn::Interrupted()
{

}
