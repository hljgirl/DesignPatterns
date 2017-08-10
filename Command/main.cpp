// Command.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ClubManager.h"
#include "CosPlayCommand.h"
#include "DanceCommand.h"
#include "SingCommand.h"


int main()
{

	RunnerClub* runnerClub = new RunnerClub();

	Command* sing = new SingCommand(runnerClub);
	Command* dance = new DanceCommand(runnerClub);
	Command* cosplay = new CosPlayCommand(runnerClub);

	ClubManager* clubmanager = new ClubManager();
	clubmanager->AddCommand(sing);
	clubmanager->AddCommand(dance);
	clubmanager->AddCommand(cosplay);

	clubmanager->Action();

	printf("#######Remove dance############\n");
	clubmanager->RemoveCommand(dance);
	clubmanager->Action();
	

	printf("#######Remove sing############\n");
	clubmanager->RemoveCommand(sing);
	clubmanager->Action();


	printf("#######Remove cosplay############\n");
	clubmanager->RemoveCommand(cosplay);
	clubmanager->Action();


	delete runnerClub;
	delete sing;
	delete dance;
	delete cosplay;
	delete clubmanager;


	getchar();
    return 0;
}

