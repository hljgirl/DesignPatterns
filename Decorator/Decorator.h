#pragma once
#include "Runner.h"

class Decorator :	public Runner
{
public:
	Decorator(Runner* runner);
	~Decorator();

	void Show();

private:
	Runner* _runner;
};

