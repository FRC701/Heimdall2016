#ifndef HaySqueezeOpenClose_H
#define HaySqueezeOpenClose_H

#include "../Robot.h"
#include "WPILib.h"

class HaySqueezeOpenClose: public Command
{
public:
	HaySqueezeOpenClose();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
