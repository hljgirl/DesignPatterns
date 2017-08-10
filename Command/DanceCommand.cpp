#include "stdafx.h"
#include "DanceCommand.h"


DanceCommand::DanceCommand(RunnerClub* runnerClub):Command(runnerClub)
{
}


DanceCommand::~DanceCommand()
{
}

void DanceCommand::ExcuteCommand()
{
	_runnerClub->Dance();
}
