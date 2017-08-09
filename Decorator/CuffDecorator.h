#pragma once
#include "Decorator.h"

class CuffDecorator :	public Decorator
{
public:
	CuffDecorator(Runner* runner);
	~CuffDecorator();

	void Show();

private:
	void CuffShow();
};

