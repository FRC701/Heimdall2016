// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ELEVATOR_H
#define ELEVATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Elevator: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities

	std::shared_ptr<DoubleSolenoid> haySqueeze;
	std::shared_ptr<DigitalInput> rightHaySqueezeSensor;
	std::shared_ptr<DigitalInput> leftHaySqueezeSensor;
	std::shared_ptr<DoubleSolenoid> brake;
	std::shared_ptr<CANTalon> leftSpool;
	std::shared_ptr<CANTalon> rightSpool;

public:

	enum BrakeValue {kBrake = DoubleSolenoid::kForward, kBrakeOff = DoubleSolenoid::kReverse };
	enum HaySqueezeValue {kOpen = DoubleSolenoid::kForward, kClose = DoubleSolenoid::kReverse };

	Elevator();
	void InitDefaultCommand();

	//..........brake..........

	void SetBrake(BrakeValue value);

	bool IsBrakeOn();

	//...........haysqueeze..........

	bool IsHaySqueezeOpen();

	bool IsHaySqueezeClosed();

	void SetHaySqueeze(HaySqueezeValue value);

	//..........spool..........

	void SetSpool(double speed);


};

#endif
