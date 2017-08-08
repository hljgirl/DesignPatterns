#pragma once

#include "Shoe.h"

class Store
{
public:
	Store(Shoe *shoe);
	virtual ~Store();

	virtual void Selling();

public:
	Shoe* _shoe;

};

