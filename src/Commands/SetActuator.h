#ifndef SetActuator_H
#define SetActuator_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class SetActuator: public Command
{
public:
	SetActuator(Intake::ActuatorValue value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
Intake::ActuatorValue mValue;
};

#endif
