#include "stdafx.h"
#include "ProductA.h"


ProductA::ProductA()
{
	printf("Product A construct!\n");
}


ProductA::~ProductA()
{
	printf("Product A destruct!\n");
}

void ProductA::ShowInformation()
{
	printf("Product A Information!\n");
}
