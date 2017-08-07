#include "stdafx.h"
#include "LowPhoneBuilder.h"


LowPhoneBuilder::LowPhoneBuilder()
{
	phone_ = new Phone();
	printf("LowPhoneBuilder construct!\n");
}


LowPhoneBuilder::~LowPhoneBuilder()
{
	delete phone_;
	printf("LowPhoneBuilder destruct!\n");
}

void LowPhoneBuilder::AssembleStepOne()
{
	phone_->AssembleProcessor("SnapDragon810");
}

void LowPhoneBuilder::AssembleStepTwo()
{
	phone_->AssembleMemory("2G Memory");
}

void LowPhoneBuilder::AssembleStepThree()
{
	phone_->AssemblePanel("4.0 inch panel");
}

Phone * LowPhoneBuilder::GetPhone()
{
	return phone_;
}
