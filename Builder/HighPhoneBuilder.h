#pragma once
#include "Builder.h"

class HighPhoneBuilder :public Builder
{
public:
	HighPhoneBuilder();
	~HighPhoneBuilder();

	void AssembleStepOne();
	void AssembleStepTwo();
	void AssembleStepThree();
	Phone* GetPhone();

private:
	Phone* phone_;
};

