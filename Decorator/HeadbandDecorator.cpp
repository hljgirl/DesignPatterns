#include "stdafx.h"
#include "HeadbandDecorator.h"


HeadbandDecorator::HeadbandDecorator(Runner* runner):Decorator(runner)
{
}


HeadbandDecorator::~HeadbandDecorator()
{
}

void HeadbandDecorator::Show()
{
	Decorator::Show();
	HeadbandShow();
}

void HeadbandDecorator::HeadbandShow()
{
	printf("I have headband.\n");
}
