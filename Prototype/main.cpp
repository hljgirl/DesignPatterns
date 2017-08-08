// Prototype.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Prototype.h"
#include "ConcretePrototype.h"

int main()
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();


	delete p;
	delete p1;


	getchar();
    return 0;
}

