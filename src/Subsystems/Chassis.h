// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


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


	void MecanumDrive_Cartesian(float x, float y, float rotation, float gyro);

	void SetTank(double leftSpeed, double rightSpeed);
};

#endif
