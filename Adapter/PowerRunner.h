#pragma once
#include "Runner.h"
#include "MuscleTraining.h"

class PowerRunner :	public Runner
{
public:
	PowerRunner(MuscleTraining* muscleTraing);
	~PowerRunner();

	void TrainingMethod();

private:
	MuscleTraining* _muscleTraining;
};

