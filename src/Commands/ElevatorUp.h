#ifndef ElevatorUp_H
#define ElevatorUp_H

#include "WPILib.h"

class ElevatorUp: public Command
{
public:
	ElevatorUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
