#pragma once
#include "RunnerClub.h"

class Command
{
public:
	Command(RunnerClub* runnerClub);
	virtual ~Command();

	virtual void ExcuteCommand() = 0;

protected:
	RunnerClub* _runnerClub;
};

