// FactoryMethod.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "FactoryA.h"
#include "FactoryB.h"
#include "ProductA.h"
#include "ProductB.h"

int main()
{
	Factory* factoryA = new FactoryA();
	Factory* factoryB = new FactoryB();
	Product* productA = factoryA->CreateProduct();
	Product* productB = factoryB->CreateProduct();

	productA->ShowInformation();
	productB->ShowInformation();


	delete factoryA;
	delete factoryB;
	delete productA;
	delete productB;

	getchar();
    return 0;
}

