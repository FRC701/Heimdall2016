#ifndef AutoIntakeOn_H
#define AutoIntakeOn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoIntakeOn: public Command
{
public:
	AutoIntakeOn(double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double mSpeed;
};

#endif
