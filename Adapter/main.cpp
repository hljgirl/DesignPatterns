// Adapter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "PowerRunner.h"
#include "MuscleTraining.h"


int main()
{
	Runner* runner = new Runner();
	runner->TrainingMethod();


	//MuscleTraining* muscleTraining = new MuscleTraining();
	//muscleTraining->MuscleTrainingMethod();

	MuscleTraining* muscleTraining = new MuscleTraining();
	Runner* runner1 = new PowerRunner(muscleTraining);
	runner1->TrainingMethod();

	delete runner;
	delete muscleTraining;
	delete runner1;


	getchar();
    return 0;
}

