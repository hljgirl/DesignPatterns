// Facade.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "RunnerClub.h"

int main()
{
	RunnerClub* runner = new RunnerClub();

	runner->RecruitRunner();
	runner->LongDistanceRace();


	delete runner;

	getchar();
    return 0;
}

