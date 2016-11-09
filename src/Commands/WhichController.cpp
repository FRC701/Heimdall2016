#include "WhichController.h"

WhichController::WhichController(int whichController)
: mWhichController(whichController)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void WhichController::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void WhichController::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool WhichController::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void WhichController::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WhichController::Interrupted()
{

}
