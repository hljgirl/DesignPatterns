#include "stdafx.h"
#include "Decorator.h"


Decorator::Decorator(Runner* runner):_runner(runner)
{
}


Decorator::~Decorator()
{
}

void Decorator::Show() {
	_runner->Show();
}