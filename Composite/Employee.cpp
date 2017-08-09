#include "stdafx.h"
#include "Employee.h"



Employee::Employee(string name, int age, int salary):_name(name),_age(age),_salary(salary)
{
}


Employee::~Employee()
{
}

string Employee::GetName()
{
	return _name;
}

int Employee::GetAge()
{
	return _age;
}

int Employee::GetSalary()
{
	return _salary;
}

