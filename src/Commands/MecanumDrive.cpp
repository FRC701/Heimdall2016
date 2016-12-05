#include "MecanumDrive.h"
#include "../Robot.h"

MecanumDrive::MecanumDrive(): Command() {
  // Use requires() here to declare subsystem dependencies
  // eg. requires(chassis);

	Requires(Robot::chassis.get());

}

// Called just before this Command runs the first time
void MecanumDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MecanumDrive::Execute() {

	Robot::chassis->SetTank(Robot::oi->getdriver()->GetRawAxis(1), Robot::oi->getdriver()->GetRawAxis(5));
	/*MecanumDrive_Cartesian(Robot::oi->getdriver()->GetRawAxis(0),
										   Robot::oi->getdriver()->GetRawAxis(1),
										   Robot::oi->getdriver()->GetRawAxis(4),
										   Robot::oi->getdriver()->GetRawAxis(5));
*/
}

// Make this return true when this Command no longer needs to run execute()
bool MecanumDrive::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void MecanumDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MecanumDrive::Interrupted() {

}
