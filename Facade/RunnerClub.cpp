#include "stdafx.h"
#include "RunnerClub.h"


RunnerClub::RunnerClub()
{
	 _humanResourceSystem = new HumanResourceSystem();
	 _organizationalSystem = new OrganizationalSystem();
	 _propagandaSystem = new PropagandaSystem();
	 _publicRelationSystem = new PublicRelationSystem();

}


RunnerClub::~RunnerClub()
{
	delete _humanResourceSystem;
	delete _organizationalSystem;
	delete _propagandaSystem;
	delete _publicRelationSystem;

}

void RunnerClub::RecruitRunner()
{
	_humanResourceSystem->Run();
	_propagandaSystem->Run();
}

void RunnerClub::LongDistanceRace()
{
	_organizationalSystem->Run();
	_publicRelationSystem->Run();
}
