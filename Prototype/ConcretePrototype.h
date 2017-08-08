#pragma once
#include "Prototype.h"


class ConcretePrototype :	public Prototype
{
public:
	ConcretePrototype();
	~ConcretePrototype();

	ConcretePrototype(const ConcretePrototype& cp);

	Prototype* Clone() const;

	void add();
};

