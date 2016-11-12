#ifndef SetHaySqueeze_H
#define SetHaySqueeze_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

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
