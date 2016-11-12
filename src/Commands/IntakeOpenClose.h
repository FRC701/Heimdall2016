#ifndef IntakeOpenClose_H
#define IntakeOpenClose_H

#include "WPILib.h"

class IntakeOpenClose: public Command
{
public:
	IntakeOpenClose();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
