#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Chassis: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<DigitalInput> leftLightSensor;
	std::shared_ptr<DigitalInput> rightLightSensor;
	std::shared_ptr<CANTalon> leftFrontWheel;
	std::shared_ptr<CANTalon> leftRearWheel;
	std::shared_ptr<CANTalon> rightFrontWheel;
	std::shared_ptr<CANTalon> rightRearWheel;


	std::shared_ptr<RobotDrive> robotDrive;

public:
	Chassis();
	void InitDefaultCommand();

	void SetTank(double leftSpeed, double rightSpeed);
};

#endif
