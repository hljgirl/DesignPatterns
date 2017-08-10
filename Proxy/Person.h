#pragma once

#include <string>
using namespace std;

class Person
{
public:
	Person(string name);
	virtual ~Person();

	virtual void Run();

	string GetName();

private:
	string _name;
};

