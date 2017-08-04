#pragma once
class AbstractCooker
{
public:
	AbstractCooker();
	virtual ~AbstractCooker();

	virtual void Cooking() = 0;
};