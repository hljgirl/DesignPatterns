#pragma once
#include <string>

using namespace std;

class Employee
{
public:
	Employee(string name, int age, int salary);
	virtual ~Employee();

	virtual void add(Employee* employee) = 0;
	virtual void ShowInformation() = 0;

	string GetName();
	int GetAge();
	int GetSalary();

private:
	string _name;
	int _age;
	int _salary;
};

