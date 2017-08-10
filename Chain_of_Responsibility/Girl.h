#pragma once
#include <string>

using namespace std;

class Girl
{
public:
	Girl(string name, int size);
	~Girl();

	string GetName();
	int GetSize();

private:
	string _name;
	int _size;

};

