#include "stdafx.h"
#include "CuffDecorator.h"


CuffDecorator::CuffDecorator(Runner* runner):Decorator(runner)
{
}


CuffDecorator::~CuffDecorator()
{
}

void CuffDecorator::Show()
{
	Decorator::Show();
	CuffShow();
}

void CuffDecorator::CuffShow()
{
	printf("I have cuff!\n");
}
