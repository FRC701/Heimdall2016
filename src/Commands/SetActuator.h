#ifndef SetActuator_H
#define SetActuator_H

#include "Commands/Command.h"
#include "Subsystems/Intake.h"

class SetActuator: public Command
{
public:
	SetActuator(Intake::ActuatorValue value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	Intake::ActuatorValue mValue;
};

#endif
