#include "Lights.h"
#include "../RobotMap.h"
#include "../Commands/LightsOn.h"


Lights::Lights() : Subsystem("Lights") {
    heimdallGlow = RobotMap::lightsHeimdallGlow;
    leftUnderGlow = RobotMap::lightsLeftUnderGlow;
    rightUnderGlow = RobotMap::lightsRightUnderGlow;
}

void Lights::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new LightsOn());

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Lights::LightOn() {
    heimdallGlow->Set(Relay::kForward);
    leftUnderGlow->Set(Relay::kForward);
    rightUnderGlow->Set(Relay::kForward);
}
