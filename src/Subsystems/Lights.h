#ifndef LIGHTS_H
#define LIGHTS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Lights: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities

	std::shared_ptr<Relay> heimdallGlow;
	std::shared_ptr<Relay> leftUnderGlow;
	std::shared_ptr<Relay> rightUnderGlow;

public:
	Lights();
	void InitDefaultCommand();
	void LightOn();
};

#endif
