#pragma once
#include "Handler.h"


class CaptainHandler :	public Handler
{
public:
	CaptainHandler(string name);
	~CaptainHandler();

	void Accept(Girl* girl);
};

