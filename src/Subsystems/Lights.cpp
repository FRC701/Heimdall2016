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
	SetDefaultCommand(new LightsOn(Lights::kLightOn));

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Lights::LightOn(LightValue value) {
    heimdallGlow->Set(static_cast<Relay::Value>(value));
    leftUnderGlow->Set(static_cast<Relay::Value>(value));
    rightUnderGlow->Set(static_cast<Relay::Value>(value));
}

