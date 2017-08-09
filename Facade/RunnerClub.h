#pragma once

#include "HumanResourceSystem.h"
#include "OrganizationalSystem.h"
#include "PropagandaSystem.h"
#include "PublicRelationSystem.h"

class RunnerClub
{
public:
	RunnerClub();
	~RunnerClub();

	void RecruitRunner();
	void LongDistanceRace();

private:
	HumanResourceSystem* _humanResourceSystem;
	OrganizationalSystem* _organizationalSystem;
	PropagandaSystem* _propagandaSystem;
	PublicRelationSystem* _publicRelationSystem;
};

