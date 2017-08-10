#pragma once
#include "Handler.h"

class ColoneHandler :	public Handler
{
public:
	ColoneHandler(string name);
	~ColoneHandler();

	void Accept(Girl* girl);

};

