#ifndef ToggleBrake_H
#define ToggleBrake_H

#include "Commands/Command.h"
//#include "../Robot.h"
//#include "Subsystems/Elevator.h"

class ToggleBrake: public Command
{
public:
	ToggleBrake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
