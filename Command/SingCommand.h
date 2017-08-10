#pragma once
#include "Command.h"

class SingCommand :	public Command
{
public:
	SingCommand(RunnerClub* runnerClub);
	~SingCommand();

	void ExcuteCommand();


};

