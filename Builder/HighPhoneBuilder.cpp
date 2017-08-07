#include "stdafx.h"
#include "HighPhoneBuilder.h"


HighPhoneBuilder::HighPhoneBuilder()
{
	phone_ = new Phone();
	printf("HighPhoneBuilder construct!\n");
}


HighPhoneBuilder::~HighPhoneBuilder()
{
	delete phone_;
	printf("HighPhoneBuilder destruct!\n");
}

void HighPhoneBuilder::AssembleStepOne()
{
	phone_->AssembleProcessor("SnapDragon835");
}

void HighPhoneBuilder::AssembleStepTwo()
{
	phone_->AssembleMemory("8G Memory");
}

void HighPhoneBuilder::AssembleStepThree()
{
	phone_->AssemblePanel("5.5 inch panel");
}

Phone * HighPhoneBuilder::GetPhone()
{
	return phone_;
}
