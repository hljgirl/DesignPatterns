#include "stdafx.h"
#include "Director.h"


Director::Director()
{
	printf("Director construct!\n");

}


Director::~Director()
{
	printf("Director destruct!\n");

}

Phone * Director::AssemblePhone()
{
	builder_->AssembleStepOne();
	builder_->AssembleStepTwo();
	builder_->AssembleStepThree();
		
	return builder_->GetPhone();
}

void Director::SetBuilder(Builder * builder)
{
	builder_ = builder;
}
