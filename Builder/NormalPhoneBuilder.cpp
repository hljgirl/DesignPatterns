#include "stdafx.h"
#include "NormalPhoneBuilder.h"


NormalPhoneBuilder::NormalPhoneBuilder()
{
	phone_ = new Phone();
	printf("NormalPhoneBuilder construct!\n");
}


NormalPhoneBuilder::~NormalPhoneBuilder()
{
	delete phone_;
	printf("NormalPhoneBuilder destruct!\n");
}

void NormalPhoneBuilder::AssembleStepOne()
{
	phone_->AssembleProcessor("SnapDragon820");
}

void NormalPhoneBuilder::AssembleStepTwo()
{
	phone_->AssembleMemory("4G Memory");
}

void NormalPhoneBuilder::AssembleStepThree()
{
	phone_->AssemblePanel("4.7 inch panel");
}

Phone * NormalPhoneBuilder::GetPhone()
{
	return phone_;
}
