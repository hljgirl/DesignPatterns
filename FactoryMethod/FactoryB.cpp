#include "stdafx.h"
#include "FactoryB.h"
#include "ProductB.h"

FactoryB::FactoryB()
{
	printf("Factory B construct!\n");
}


FactoryB::~FactoryB()
{
	printf("Factory B destruct!\n");
}


Product * FactoryB::CreateProduct()
{
	return new ProductB();
}
