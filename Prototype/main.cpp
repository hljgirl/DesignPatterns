// Prototype.cpp : �������̨Ӧ�ó������ڵ㡣
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

