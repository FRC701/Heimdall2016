#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:

//..........Talons..........

	//..........chassis..........

	static std::shared_ptr<CANTalon> chassisLeftFrontWheel;
	static std::shared_ptr<CANTalon> chassisLeftRearWheel;
	static std::shared_ptr<CANTalon> chassisRightFrontWheel;
	static std::shared_ptr<CANTalon> chassisRightRearWheel;

	//..........elevator..........

	static std::shared_ptr<CANTalon> elevatorLeftSpool;
	static std::shared_ptr<CANTalon> elevatorRightSpool;

	//..........intake..........

	static std::shared_ptr<CANTalon> intakeLeftSpinner;
	static std::shared_ptr<CANTalon> intakeRightSpinner;

//..........Solenoids..........

	//..........elevator..........

	static std::shared_ptr<DoubleSolenoid> elevatorHaySqueeze;
	static std::shared_ptr<DoubleSolenoid> elevatorBrake;

	//..........intake..........

	static std::shared_ptr<DoubleSolenoid> intakeActuator;

//..........sensors..........

	//..........chassis..........

	static std::shared_ptr<DigitalInput> chassisLeftLightSensor;
	static std::shared_ptr<DigitalInput> chassisRightLightSensor;

	//..........elevator..........

	static std::shared_ptr<DigitalInput> elevatorRightHaySqueezeSensor;
	static std::shared_ptr<DigitalInput> elevatorLeftHaySqueezeSensor;

//..........Lights..........

	static std::shared_ptr<Relay> lightsHeimdallGlow;
	static std::shared_ptr<Relay> lightsLeftUnderGlow;
	static std::shared_ptr<Relay> lightsRightUnderGlow;

//..........TalonIDs..........

	//..........chassis..........

	static const int kLeftFrontID = 5;
	static const int kLeftRearID = 11;
	static const int kRightFrontID = 6;
	static const int kRightRearID = 12;

	//..........elevator..........

	static const int kLeftSpoolID = 2;
	static const int kRightSpoolID = 4;

	//..........intake..........

	static const int kLeftSpinnerID = 8;
	static const int kRightSpinnerID = 7;

//..........SolenoidIDs..........

	//..........elevator..........

	static const int kHaySqueezeF = 1;
	static const int kHaySqueezeR = 6;
	static const int kBrakeF = 2;
	static const int kBrakeR = 5;

	//..........intake..........

	static const int kActuatorF = 0;
	static const int kActuatorR = 7;

//..........SensorIDs..........

	//..........chassis..........

	static const int kLeftLightSensorID = 0;
	static const int kRightLightSensorID = 1;

	//..........elevator..........

	static const int kLeftHaySqueezeSensorID = 3;
	static const int kRightHaySqueezeSensorID = 2;

//..........LightIDs..........

	static const int kHeimdallGlowID = 0;
	static const int kLeftLightID = 1;
	static const int kRightLightID = 2;

	static void init();
};
#endif
