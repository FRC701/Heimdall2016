#ifndef MECANUMDRIVE_H
#define MECANUMDRIVE_H


#include "Commands/Command.h"

class MecanumDrive: public Command {
public:

	MecanumDrive();


	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:

};

#endif
