#include "stdafx.h"
#include "Store.h"



Store::Store(Shoe * shoe)
{
	this->_shoe = shoe;
}


Store::~Store()
{
}

void Store::Selling()
{
	printf("Store Selling:not run here!\n");
}
