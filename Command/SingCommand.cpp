#include "stdafx.h"
#include "SingCommand.h"


SingCommand::SingCommand(RunnerClub* runnerClub):Command(runnerClub)
{	
}


SingCommand::~SingCommand()
{
}

void SingCommand::ExcuteCommand()
{
	_runnerClub->Sing();
}
