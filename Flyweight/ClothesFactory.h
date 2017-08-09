#pragma once

#include "Clothes.h"

#include "RunnerClothes.h"
#include "LeadingRunnerClothes.h"


#include <map>

using namespace std;

class ClothesFactory
{
public:
	ClothesFactory();
	~ClothesFactory();

	Clothes* GetClothes(int size);

private:
	
	map<int, Clothes*> _map_clothes;
};

