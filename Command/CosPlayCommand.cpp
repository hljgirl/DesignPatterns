#include "stdafx.h"
#include "CosPlayCommand.h"


CosPlayCommand::CosPlayCommand(RunnerClub* runnerClub):Command(runnerClub)
{
}


CosPlayCommand::~CosPlayCommand()
{
}

void CosPlayCommand::ExcuteCommand()
{
	_runnerClub->Cosplay();
}
