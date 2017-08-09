// Decorator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "HeadbandDecorator.h"
#include "CuffDecorator.h"
#include "CoolRunner.h"

int main()
{
	Runner* runner = new CoolRunner();
	//runner->Show();

	Decorator* cuffDecorator = new CuffDecorator(runner);
	//cuffDecorator->Show();

	Decorator* headbandDecorator = new HeadbandDecorator(cuffDecorator);
	headbandDecorator->Show();

	getchar();
    return 0;
}

