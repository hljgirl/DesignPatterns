// Facade.cpp : �������̨Ӧ�ó������ڵ㡣
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

