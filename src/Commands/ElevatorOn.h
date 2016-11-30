#ifndef ElevatorOn_H
#define ElevatorOn_H

#include "Commands/Command.h"

//#include "Subsystems/Elevator.h"

class ElevatorOn: public Command
{
public:
	ElevatorOn(double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double mSpeed;
};

#endif
