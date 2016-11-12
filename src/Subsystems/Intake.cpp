#include "Intake.h"
#include "../RobotMap.h"
#include "../Commands/IntakeOn.h"



Intake::Intake() : Subsystem("Intake") {

    actuator = RobotMap::intakeActuator;
    leftSpinner = RobotMap::intakeLeftSpinner;
    rightSpinner = RobotMap::intakeRightSpinner;

}

void Intake::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new IntakeOn(0.0));

}

bool Intake::IsActuatorClosed(){

return actuator->Get() == static_cast<DoubleSolenoid::Value>(kActuatorClosed);

}

void Intake::SetActuator(ActuatorValue value){

	actuator->Set(static_cast<DoubleSolenoid::Value>(value));
}

void Intake::SetIntake(double speed){
	leftSpinner->Set(speed);
	rightSpinner->Set(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

