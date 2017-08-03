// SimpleFactory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SimpleFactory.h"

int main()
{

	SimpleFactory * _simpleFactory = new SimpleFactory();
	Watch* _appleWatch = _simpleFactory->CreateWatch(APPLE_WATCH);
	Watch* _huaweiWatch = _simpleFactory->CreateWatch(HUAWEI_WATCH);

	_appleWatch->ShowInformation();
	_huaweiWatch->ShowInformation();

	delete _simpleFactory;
	delete _appleWatch;
	delete _huaweiWatch;

	getchar();
    return 0;
}

