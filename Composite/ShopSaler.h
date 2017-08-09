#pragma once
#include "Employee.h"

class ShopSaler :	public Employee
{
public:
	ShopSaler(string name, int age, int salary);
	~ShopSaler();

	void add(Employee* employee);
	void ShowInformation();
};

