#pragma once
#include "AbstractFactory.h"
#include "AbstractCooker.h"
#include "AbstractWasher.h"

class HaierFactory :public AbstractFactory
{
public:
	HaierFactory();
	~HaierFactory();

	AbstractCooker* CreateCooker();
	AbstractWasher* CreateWasher();
};

