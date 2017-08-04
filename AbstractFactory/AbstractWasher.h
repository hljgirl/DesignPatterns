#pragma once
class AbstractWasher
{
public:
	AbstractWasher();
	virtual ~AbstractWasher();

	virtual void Clothing() = 0;
};

