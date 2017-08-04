#pragma once
#include "Factory.h"
#include "Product.h"

class FactoryB :
	public Factory
{
public:
	FactoryB();
	~FactoryB();

	Product* CreateProduct();
};

