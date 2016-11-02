#ifndef ElevatorOn_H
#define ElevatorOn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ElevatorOn: public Command
{
public:
	ElevatorOn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
