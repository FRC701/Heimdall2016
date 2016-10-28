#ifndef ToggleBrake_H
#define ToggleBrake_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ToggleActuator: public Command
{
public:
	ToggleActuator();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
