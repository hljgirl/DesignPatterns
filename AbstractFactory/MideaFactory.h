#pragma once
#include "AbstractFactory.h"
#include "AbstractCooker.h"
#include "AbstractWasher.h"

class MideaFactory :
	public AbstractFactory
{
public:
	MideaFactory();
	~MideaFactory();

	AbstractCooker* CreateCooker();
	AbstractWasher* CreateWasher();
};

