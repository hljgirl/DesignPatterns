// Builder.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Director.h"

#include "HighPhoneBuilder.h"
#include "NormalPhoneBuilder.h"
#include "LowPhoneBuilder.h"

int main()
{
	Director* director = new Director();


	//Assemble High Phone
	Builder* high_builder = new HighPhoneBuilder();
	director->SetBuilder(high_builder);
	Phone* high_phone = director->AssemblePhone();
	high_phone->ShowConfig();


	//Assemble Normol Phone
	Builder* normal_builder = new NormalPhoneBuilder();
	director->SetBuilder(normal_builder);
	Phone* normal_phone = director->AssemblePhone();
	normal_phone->ShowConfig();

	//Assemble Low Phone
	Builder* low_builder = new LowPhoneBuilder();
	director->SetBuilder(low_builder);
	Phone* low_phone = director->AssemblePhone();
	low_phone->ShowConfig();

	
	delete low_builder;
	delete normal_builder;
	delete high_builder;
	delete director;

	getchar();
    return 0;
}

