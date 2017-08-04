#include "stdafx.h"
#include "MideaFactory.h"
#include "MideaCooker.h"
#include "MideaWasher.h"

MideaFactory::MideaFactory()
{
	printf("MideaFactory construct!\n");
}


MideaFactory::~MideaFactory()
{
	printf("MideaFactory destruct!\n");
}

AbstractCooker * MideaFactory::CreateCooker()
{
	return new MideaCooker;
}

AbstractWasher * MideaFactory::CreateWasher()
{
	return new MideaWasher;
}
