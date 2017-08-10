#include "stdafx.h"
#include "Girl.h"


Girl::Girl(string name, int size):_name(name), _size(size)
{
}


Girl::~Girl()
{
}

string Girl::GetName()
{
	return _name;
}

int Girl::GetSize()
{
	return _size;
}
