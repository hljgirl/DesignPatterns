#pragma once
#include "Decorator.h"

class HeadbandDecorator :	public Decorator
{
public:
	HeadbandDecorator(Runner* runner);
	~HeadbandDecorator();

	void Show();

private:
	void HeadbandShow();
};

