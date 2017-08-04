#pragma once
#include "Factory.h"
#include "Product.h"

class FactoryA :public Factory
{
public:
	FactoryA();
	~FactoryA();

	Product* CreateProduct();
};

