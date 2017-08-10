// Proxy.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Runner.h"
#include "RunnerProxy.h"

int main()
{
	Runner* runner = new Runner("lin");
	
	RunnerProxy* runner_proxy = new RunnerProxy("wu");
	runner_proxy->SetRunner(runner);
	runner_proxy->Run();


	delete runner;
	delete runner_proxy;

	getchar();
    return 0;
}

