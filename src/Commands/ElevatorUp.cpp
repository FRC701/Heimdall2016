#include "ElevatorUp.h"
#include "../Robot.h"

ElevatorUp::ElevatorUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ElevatorUp::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ElevatorUp::Execute()
{
	Robot::elevator->SetSpool(0.5, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorUp::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ElevatorUp::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorUp::Interrupted()
{

}

