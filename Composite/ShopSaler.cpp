#include "stdafx.h"
#include "ShopSaler.h"


ShopSaler::ShopSaler(string name, int age, int salary):Employee(name, age, salary)
{
}


ShopSaler::~ShopSaler()
{
}

void ShopSaler::add(Employee* employee)
{
	printf("ShopSaler::Add: will not run here.\n");
}

void ShopSaler::ShowInformation()
{
	printf("Name: %s\n", this->GetName().c_str());
	printf("Age: %d\n", this->GetAge());
	printf("Salary: %d\n", this->GetSalary());
}
