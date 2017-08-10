#pragma once
#include "Command.h"

class DanceCommand :	public Command
{
public:
	DanceCommand(RunnerClub* runnerClub);
	~DanceCommand();

	void ExcuteCommand();
};

