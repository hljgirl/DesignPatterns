#include "stdafx.h"
#include "Singleton.h"

//static member need to define for allocated memory , otherwise will cause compile error!
Singleton* Singleton::_singleton = NULL;

Singleton::Singleton()
{
	printf("Singleton construct!\n");
}


Singleton::~Singleton()
{
	printf("Singleton destruct!\n");
}


Singleton * Singleton::GetInstance()
{
	if (Singleton::_singleton == NULL)
	{
		_singleton = new Singleton();
	}
	return _singleton;
}
