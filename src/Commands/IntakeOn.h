#ifndef ElevatorOn_H
#define ElevatorOn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeOn: public Command
{
public:
	IntakeOn(double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double mSpeed;
};

#endif
