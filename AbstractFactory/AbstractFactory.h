#pragma once

#include "AbstractWasher.h"
#include "AbstractCooker.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractCooker* CreateCooker() = 0;
	virtual AbstractWasher* CreateWasher() = 0;
};

