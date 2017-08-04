#pragma once
class Product
{
public:
	Product();
	virtual ~Product();

	virtual void ShowInformation() = 0;
};

