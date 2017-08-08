#pragma once
#include "Store.h"


class HelenStore :	public Store
{
public:
	HelenStore(Shoe* shoe);
	~HelenStore();

	void Selling();
};

