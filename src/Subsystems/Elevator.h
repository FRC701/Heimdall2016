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

	bool IsBrakeOn() const;

	//...........haysqueeze..........

	bool IsHaySqueezeOpen() const;

	bool IsHaySqueezeClosed() const;

	void SetHaySqueeze(HaySqueezeValue value);

	//..........spool..........

	void SetSpool(double speed);


};

#endif
