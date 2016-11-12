#ifndef INTAKE_H
#define INTAKE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Intake: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities

	std::shared_ptr<DoubleSolenoid> actuator;
	std::shared_ptr<CANTalon> leftSpinner;
	std::shared_ptr<CANTalon> rightSpinner;


public:

	enum ActuatorValue {kActuatorOpen = DoubleSolenoid::kForward, kActuatorClosed = DoubleSolenoid::kReverse };

	Intake();
	void InitDefaultCommand();

	//...........Actuator..........

	bool IsActuatorClosed();

	void SetActuator(ActuatorValue value);

	//..........IntakeWheels..........

	void SetIntake(double speed);

};

#endif
