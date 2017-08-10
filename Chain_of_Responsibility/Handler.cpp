#include "stdafx.h"
#include "Handler.h"


Handler::Handler()
{
}


Handler::~Handler()
{
}

void Handler::SetHandler(Handler * handler)
{
	_handle = handler;
}
