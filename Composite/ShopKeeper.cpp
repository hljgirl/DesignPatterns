#include "stdafx.h"
#include "ShopKeeper.h"


ShopKeeper::ShopKeeper(string name, int age, int salary):Employee(name, age, salary)
{
}


ShopKeeper::~ShopKeeper()
{
}

void ShopKeeper::add(Employee* employee)
{
	list_employee.push_back(employee);
}

void ShopKeeper::ShowInformation()
{
	printf("Name: %s\n", this->GetName().c_str());
	printf("Age: %d\n", this->GetAge());
	printf("Salary: %d\n", this->GetSalary());

	for (list<Employee*>::iterator v = list_employee.begin(); v != list_employee.end(); v++)
	{
		(*v)->ShowInformation();
	}

}
