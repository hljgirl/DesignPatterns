#pragma once

#include "Phone.h"

class Builder
{
public:
	Builder();
	virtual ~Builder();

	virtual void AssembleStepOne() = 0;
	virtual void AssembleStepTwo() = 0;
	virtual void AssembleStepThree() = 0;
	virtual Phone* GetPhone() = 0;
};

