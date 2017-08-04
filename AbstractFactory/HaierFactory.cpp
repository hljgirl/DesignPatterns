#include "stdafx.h"
#include "HaierFactory.h"
#include "HaierCooker.h"
#include "HaierWasher.h"

HaierFactory::HaierFactory()
{
	printf("HaierFactory construct!\n");
}


HaierFactory::~HaierFactory()
{
	printf("HaierFactory destruct!\n");
}

AbstractCooker * HaierFactory::CreateCooker()
{
	return new HaierCooker();
}

AbstractWasher * HaierFactory::CreateWasher()
{
	return new HaierWasher;
}
