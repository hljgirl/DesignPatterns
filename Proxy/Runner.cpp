#include "stdafx.h"
#include "Runner.h"

Runner::Runner(string name) : Person(name)
{
}

Runner ::~Runner()
{
}

void Runner::Run()
{
	printf("%s run in xiamen marathon.\n", this->GetName().c_str());
}