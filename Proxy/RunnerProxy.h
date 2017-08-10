#pragma once
#include "Person.h"

#include "Runner.h"

class RunnerProxy :	public Person
{
public:
	RunnerProxy(string name);
	~RunnerProxy();

	void Run();
	void SetRunner(Runner* runner);

private:
	Runner* _runner;

};

