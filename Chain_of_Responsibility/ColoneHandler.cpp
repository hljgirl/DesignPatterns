#include "stdafx.h"
#include "ColoneHandler.h"


ColoneHandler::ColoneHandler(string name)
{
	_name = name;
	_handle = NULL;
}


ColoneHandler::~ColoneHandler()
{
}

void ColoneHandler::Accept(Girl * girl)
{	
	if (girl->GetSize() < 'C')
	{
		printf("colone(%s):too small,not pass!\n", _name.c_str());
	}
	else {

		if (_handle)
		{
			printf("colone(%s):Good,I'll submit to the chief!\n", _name.c_str());
			_handle->Accept(girl);
		}
	}

}
