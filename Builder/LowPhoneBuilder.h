#pragma once
#include "Builder.h"


class LowPhoneBuilder :	public Builder
{
public:
	LowPhoneBuilder();
	~LowPhoneBuilder();

	void AssembleStepOne();
	void AssembleStepTwo();
	void AssembleStepThree();
	Phone* GetPhone();

private:
	Phone* phone_;

};

