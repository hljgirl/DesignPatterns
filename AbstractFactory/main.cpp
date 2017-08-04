// AbstractFactory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "AbstractFactory.h"
#include "AbstractCooker.h"
#include "AbstractWasher.h"

#include "HaierFactory.h"
#include "MideaFactory.h"


int main()
{

	AbstractFactory* haierFactory = new HaierFactory();
	AbstractFactory* mideaFactory = new MideaFactory();

	AbstractCooker* haierCooker = haierFactory->CreateCooker();
	AbstractWasher* haierWasher = haierFactory->CreateWasher();

	AbstractCooker* mideaCooker = mideaFactory->CreateCooker();
	AbstractWasher* mideaWasher = mideaFactory->CreateWasher();


	haierCooker->Cooking();
	haierWasher->Clothing();

	mideaCooker->Cooking();
	mideaWasher->Clothing();


	delete haierFactory;
	delete haierCooker;
	delete haierWasher;

	delete mideaFactory;
	delete mideaCooker;
	delete mideaWasher;

	getchar();
    return 0;
}

