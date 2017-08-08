#include "stdafx.h"
#include "ConcretePrototype.h"


ConcretePrototype::ConcretePrototype()
{
	printf("ConcretePrototype construct!\n");

}


ConcretePrototype::~ConcretePrototype()
{
	printf("ConcretePrototype destruct!\n");

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype & cp)
{
	printf("ConcretePrototype copy ......\n");
}

Prototype * ConcretePrototype::Clone() const
{
	return new ConcretePrototype(*this);
}
