#include "stdafx.h"
#include "ChiefHandler.h"


ChiefHandler::ChiefHandler(string name)
{
	_name = name;
	_handle = NULL;
}


ChiefHandler::~ChiefHandler()
{
}

void ChiefHandler::Accept(Girl * girl)
{
	if (girl->GetSize() < 'D')
	{
		printf("chief(%s):too small,not pass!\n", _name.c_str());
	}
	else {
		printf("chief(%s):the girl(%s) big enough,pass!\n", _name.c_str(), girl->GetName().c_str());
	}

}
