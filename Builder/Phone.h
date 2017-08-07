#pragma once

#include <string>

using namespace std;

class Phone
{
public:
	Phone();
	~Phone();

	void AssembleProcessor(string processor);
	void AssembleMemory(string memory);
	void AssemblePanel(string panel);
	void ShowConfig();

private:
	string processor_;
	string memory_;
	string panel_;
	string base_config_;

};

