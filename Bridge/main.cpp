// Bridge.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "AsicsShoe.h"
#include "NikeShoe.h"


#include "HelenStore.h"

int main()
{
	
	Shoe* asics_shoe = new AsicsShoe();
	Shoe* nike_shoe = new NikeShoe();

	//asics_shoe->Sale();
	//nike_shoe->Sale();

	Store* helenstore = new HelenStore(asics_shoe);
	helenstore->Selling();

	Store* helenstore2 = new HelenStore(nike_shoe);
	helenstore2->Selling();



	delete asics_shoe;
	delete nike_shoe;

	delete helenstore;
	delete helenstore2;

	getchar();
    return 0;
}

