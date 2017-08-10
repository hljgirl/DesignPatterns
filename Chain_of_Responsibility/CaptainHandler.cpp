#include "stdafx.h"
#include "CaptainHandler.h"


CaptainHandler::CaptainHandler(string name)
{
	_name = name;
	_handle = NULL;
}


CaptainHandler::~CaptainHandler()
{
}

void CaptainHandler::Accept(Girl * girl)
{
	printf("audit(%s)\n", girl->GetName().c_str());

	if (girl->GetSize() < 'B')
	{
		printf("captain(%s):too small,not pass!\n", _name.c_str());
	}
	else {

		if (_handle)
		{
			printf("captain(%s):Good,I'll submit to the colonel!\n", _name.c_str());
			_handle->Accept(girl);
		}
	}
}
