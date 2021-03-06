#ifndef ToggleActuator_H
#define ToggleActuator_H

#include "Commands/Command.h"
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
