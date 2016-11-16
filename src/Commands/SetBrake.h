#ifndef SetBrake_H
#define SetBrake_H

#include "Commands/Command.h"
#include "../Robot.h"

class SetBrake: public Command
{
public:
	SetBrake(Elevator::BrakeValue value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	Elevator::BrakeValue mValue;
};

#endif
