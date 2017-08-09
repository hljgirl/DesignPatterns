#pragma once
#include "Employee.h"

#include <list>
using namespace std;

class ShopKeeper :	public Employee
{
public:
	ShopKeeper(string name, int age, int salary);
	~ShopKeeper();

	void add(Employee* employee);
	void ShowInformation();

private:
	list<Employee*> list_employee;

};

