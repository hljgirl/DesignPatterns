#pragma once
#include "Girl.h"

class Handler
{
public:
	Handler();
	virtual ~Handler();

	void SetHandler(Handler* handler);
	virtual void Accept(Girl* girl) = 0;

protected:
	string _name;
	Handler* _handle;
};

