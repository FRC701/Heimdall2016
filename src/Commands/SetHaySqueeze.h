#ifndef SetHaySqueeze_H
#define SetHaySqueeze_H

#include "Commands/Command.h"
//#include "../Robot.h"
#include "Subsystems/Elevator.h"

class SetHaySqueeze: public Command
{
public:
	SetHaySqueeze(Elevator::HaySqueezeValue value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	Elevator::HaySqueezeValue mValue;
};

#endif
