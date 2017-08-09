// Flyweight.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ClothesFactory.h"
#include "LeadingRunnerClothes.h"

int main()
{
	ClothesFactory* clothesFactory = new ClothesFactory();

	clothesFactory->GetClothes('S');
	clothesFactory->GetClothes('M');
	clothesFactory->GetClothes('L');

	Clothes* clothes_first = clothesFactory->GetClothes('X');
	Clothes* clothes_second = clothesFactory->GetClothes('X');

	Clothes* leading_clothes_first = new LeadingRunnerClothes();
	Clothes* leading_clothes_second = new LeadingRunnerClothes();


	printf("clothes_first=%p, clothes_second=%p\n", clothes_first, clothes_second);
	printf("leading_clothes_first=%p, leading_clothes_second=%p\n", leading_clothes_first, leading_clothes_second);


	delete clothesFactory;
	delete leading_clothes_first;
	delete leading_clothes_second;

	getchar();
    return 0;
}

