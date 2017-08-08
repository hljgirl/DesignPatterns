#include "stdafx.h"
#include "PowerRunner.h"


PowerRunner::PowerRunner(MuscleTraining* muscleTraing)
{
	_muscleTraining = muscleTraing;
}


PowerRunner::~PowerRunner()
{
}



void PowerRunner::TrainingMethod()
{
	_muscleTraining->MuscleTrainingMethod();
}
