#include "stdafx.h"
#include "SimpleFactory.h"
#include "AppleWatch.h"
#include "HuaweiWatch.h"

SimpleFactory::SimpleFactory()
{
	printf("SimpleFactory construct!\n");
}


SimpleFactory::~SimpleFactory()
{
	printf("SimpleFactory destruct!\n");
}

Watch * SimpleFactory::CreateWatch(WatchType _type)
{
	switch (_type)
	{
	case APPLE_WATCH:
		return new AppleWatch();
		
	case HUAWEI_WATCH:
		return new HuaweiWatch();
		
	default:
		return nullptr;
	}
}
