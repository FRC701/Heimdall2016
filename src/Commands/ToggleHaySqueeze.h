#ifndef ToggleHaySqueeze_H
#define ToggleHaySqueeze_H

#include "Commands/Command.h"
class ToggleHaySqueeze: public Command
{
public:
	ToggleHaySqueeze();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
