#pragma once
#include "Watch.h"


typedef enum {
	APPLE_WATCH,
	HUAWEI_WATCH
}WatchType;

class SimpleFactory
{
public:
	SimpleFactory();
	~SimpleFactory();

	Watch* CreateWatch(WatchType _type);
};

