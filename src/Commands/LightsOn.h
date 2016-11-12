#ifndef LightsOn_H
#define LightsOn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class LightsOn: public Command
{
public:
	LightsOn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
