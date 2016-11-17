#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"



std::shared_ptr<DoubleSolenoid> RobotMap::elevatorHaySqueeze;
std::shared_ptr<DigitalInput> RobotMap::elevatorRightHaySqueezeSensor;
std::shared_ptr<DigitalInput> RobotMap::elevatorLeftHaySqueezeSensor;
std::shared_ptr<DoubleSolenoid> RobotMap::elevatorBrake;
std::shared_ptr<CANTalon> RobotMap::elevatorLeftSpool;
std::shared_ptr<CANTalon> RobotMap::elevatorRightSpool;
std::shared_ptr<DigitalInput> RobotMap::chassisLeftLightSensor;
std::shared_ptr<DigitalInput> RobotMap::chassisRightLightSensor;
std::shared_ptr<CANTalon> RobotMap::chassisLeftFrontWheel;
std::shared_ptr<CANTalon> RobotMap::chassisLeftRearWheel;
std::shared_ptr<CANTalon> RobotMap::chassisRightFrontWheel;
std::shared_ptr<CANTalon> RobotMap::chassisRightRearWheel;
std::shared_ptr<DoubleSolenoid> RobotMap::intakeActuator;
std::shared_ptr<CANTalon> RobotMap::intakeLeftSpinner;
std::shared_ptr<CANTalon> RobotMap::intakeRightSpinner;
std::shared_ptr<Relay> RobotMap::lightsHeimdallGlow;
std::shared_ptr<Relay> RobotMap::lightsLeftUnderGlow;
std::shared_ptr<Relay> RobotMap::lightsRightUnderGlow;

void RobotMap::init() {

    LiveWindow *lw = LiveWindow::GetInstance();

//..........Talons..........

    //..........chassis..........

    chassisLeftFrontWheel.reset(new CANTalon(kLeftFrontID));
    lw->AddActuator("Chassis", "LeftFrontWheel", chassisLeftFrontWheel);

    chassisLeftRearWheel.reset(new CANTalon(kLeftRearID));
    lw->AddActuator("Chassis", "leftRearWheel", chassisLeftRearWheel);

    chassisRightFrontWheel.reset(new CANTalon(kRightFrontID));
    lw->AddActuator("Chassis", "rightFrontWheel", chassisRightFrontWheel);

    chassisRightRearWheel.reset(new CANTalon(kRightRearID));
    lw->AddActuator("Chassis", "rightRearWheel", chassisRightRearWheel);

    //..........elevator..........

    elevatorLeftSpool.reset(new CANTalon(kLeftSpoolID));
    lw->AddActuator("Elevator", "leftSpool", elevatorLeftSpool);

    elevatorRightSpool.reset(new CANTalon(kRightSpoolID));
    lw->AddActuator("Elevator", "rightSpool", elevatorRightSpool);

    //..........intake..........

    intakeLeftSpinner.reset(new CANTalon(kLeftSpinnerID));
    lw->AddActuator("Intake", "leftSpinner", intakeLeftSpinner);

    intakeRightSpinner.reset(new CANTalon(kRightSpinnerID));
    lw->AddActuator("Intake", "rightSpinner", intakeRightSpinner);

//..........solenoids..........

    //..........elevator..........

    elevatorHaySqueeze.reset(new DoubleSolenoid(kPCM_ID, kHaySqueezeF, kHaySqueezeR));
    lw->AddActuator("Elevator", "haySqueeze", elevatorHaySqueeze);

    elevatorBrake.reset(new DoubleSolenoid(kPCM_ID, kBrakeF, kBrakeR));
    lw->AddActuator("Elevator", "brake", elevatorBrake);

    //..........intake..........

    intakeActuator.reset(new DoubleSolenoid(kPCM_ID, kActuatorF, kActuatorR));
    lw->AddActuator("Intake", "actuator", intakeActuator);

//..........sensors..........
    
    //..........elevators..........

    elevatorRightHaySqueezeSensor.reset(new DigitalInput(kRightHaySqueezeSensorID));
    lw->AddSensor("Elevator", "rightHaySqueezeSensor", elevatorRightHaySqueezeSensor);
    
    elevatorLeftHaySqueezeSensor.reset(new DigitalInput(kLeftHaySqueezeSensorID));
    lw->AddSensor("Elevator", "leftHaySqueezeSensor", elevatorLeftHaySqueezeSensor);
    
    //..........chassis..........
    
    chassisLeftLightSensor.reset(new DigitalInput(kLeftLightSensorID));
    lw->AddSensor("Chassis", "leftLightSensor", chassisLeftLightSensor);
    
    chassisRightLightSensor.reset(new DigitalInput(kRightLightSensorID));
    lw->AddSensor("Chassis", "rightLightSensor", chassisRightLightSensor);
    
//..........lights..........

    lightsHeimdallGlow.reset(new Relay(kHeimdallGlowID));
    lw->AddActuator("Lights", "heimdallGlow", lightsHeimdallGlow);
    
    lightsLeftUnderGlow.reset(new Relay(kLeftLightID));
    lw->AddActuator("Lights", "leftUnderGlow", lightsLeftUnderGlow);
    
    lightsRightUnderGlow.reset(new Relay(kRightLightID));
    lw->AddActuator("Lights", "rightUnderGlow", lightsRightUnderGlow);
    
}
