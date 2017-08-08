#pragma once
class Prototype
{
public:

	virtual ~Prototype();

	virtual Prototype* Clone() const = 0;

protected:
	Prototype();
};

