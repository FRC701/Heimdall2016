#include "ToggleHaySqueeze.h"

ToggleHaySqueeze::ToggleHaySqueeze()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void ToggleHaySqueeze::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ToggleHaySqueeze::Execute()
{
	Elevator::HaySqueezeValue value
			= Robot::elevator->IsHaySqueezeOpen() ? Elevator::kOpen : Elevator::kClose;
		Robot::elevator->SetHaySqueeze(value);
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleHaySqueeze::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToggleHaySqueeze::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleHaySqueeze::Interrupted()
{

}
