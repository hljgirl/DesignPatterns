#pragma once

#include "Command.h"
#include <list>

using namespace std;

class ClubManager
{
public:
	ClubManager();
	~ClubManager();

	void AddCommand(Command* command);
	void RemoveCommand(Command* command);
	void Action();

private:
	list<Command*> list_command;
};

