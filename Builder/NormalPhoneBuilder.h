#pragma once
#include "Builder.h"

class NormalPhoneBuilder :	public Builder
{
public:
	NormalPhoneBuilder();
	~NormalPhoneBuilder();

	void AssembleStepOne();
	void AssembleStepTwo();
	void AssembleStepThree();
	Phone* GetPhone();

private:
	Phone* phone_;

};

