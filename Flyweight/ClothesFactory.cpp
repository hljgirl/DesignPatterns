#include "stdafx.h"
#include "ClothesFactory.h"


ClothesFactory::ClothesFactory()
{
}


ClothesFactory::~ClothesFactory()
{
	map<int, Clothes*>::iterator iterator = _map_clothes.begin();
	
	while (iterator != _map_clothes.end())
	{
		delete iterator->second;
		printf("%s:[%c] delete!\n", __func__, iterator->first);
		iterator++;
	}	

}


Clothes * ClothesFactory::GetClothes(int size)
{
	map<int, Clothes*>::iterator iterator = _map_clothes.find(size);

	if (iterator == _map_clothes.end())
	{
		Clothes* runnerClothers = new RunnerClothes();
		_map_clothes.insert(make_pair(size, runnerClothers));

		printf("key %c is not exist,insert.\n", size);
		return runnerClothers;
	}
	else {
		printf("key %c is exist,return object.\n", size);
		return iterator->second;
	}

	return nullptr;
}
