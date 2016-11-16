#ifndef LightsOn_H
#define LightsOn_H

#include "Commands/Command.h"
#include "../Robot.h"

class LightsOn: public Command
{
public:
	LightsOn(Lights::LightValue value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	Lights::LightValue mValue;
};

#endif
