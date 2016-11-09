#ifndef WhichController_H
#define WhichController_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class WhichController: public Command
{
public:
	WhichController(int whichController);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

	int mWhichController;
};

#endif
