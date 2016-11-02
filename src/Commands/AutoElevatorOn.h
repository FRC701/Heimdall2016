#ifndef AutoElevatorOn_H
#define AutoElevatorOn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoElevatorOn: public Command
{
public:
	AutoElevatorOn(double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	double mSpeed;
};

#endif
