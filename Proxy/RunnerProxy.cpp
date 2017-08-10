#include "stdafx.h"
#include "RunnerProxy.h"


RunnerProxy::RunnerProxy(string name):Person(name)
{
}


RunnerProxy::~RunnerProxy()
{
}

void RunnerProxy::Run()
{
	_runner->Run();
}

void RunnerProxy::SetRunner(Runner * runner)
{
	_runner = runner;
}
