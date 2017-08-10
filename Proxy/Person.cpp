#include "stdafx.h"
#include "Person.h"


Person::Person(string name)
{
	_name = name;
}


Person::~Person()
{
}

void Person::Run()
{
	printf("Person::Run\n");
}

string Person::GetName()
{
	return _name;
}
