#pragma once
#include "Handler.h"

class ChiefHandler :	public Handler
{
public:
	ChiefHandler(string name);
	~ChiefHandler();

	void Accept(Girl* girl);
};

