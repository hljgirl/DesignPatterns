#pragma once
#include "Command.h"

class CosPlayCommand :	public Command
{
public:
	CosPlayCommand(RunnerClub* runnerClub);
	~CosPlayCommand();

	void ExcuteCommand();
};

