#include "stdafx.h"
#include "ClubManager.h"


ClubManager::ClubManager()
{
}


ClubManager::~ClubManager()
{
}

void ClubManager::AddCommand(Command * command)
{
	list_command.push_back(command);
}

void ClubManager::RemoveCommand(Command * command)
{
	list_command.remove(command);
}

void ClubManager::Action()
{
	list<Command*>::iterator iterator;

	for (iterator = list_command.begin(); iterator != list_command.end(); iterator++)
	{
		(*iterator)->ExcuteCommand();
	}

}
