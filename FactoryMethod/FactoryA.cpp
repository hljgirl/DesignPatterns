#include "stdafx.h"
#include "FactoryA.h"
#include "ProductA.h"

FactoryA::FactoryA()
{
	printf("Factory A construct!\n");
}


FactoryA::~FactoryA()
{
	printf("Factory A destruct!\n");
}

Product * FactoryA::CreateProduct()
{
	return new ProductA();
}
