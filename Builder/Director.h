#pragma once
#include "Builder.h"

class Director
{
public:
	Director();
	~Director();

	Phone* AssemblePhone();
	void SetBuilder(Builder* builder);

private:
	Builder* builder_;
};

