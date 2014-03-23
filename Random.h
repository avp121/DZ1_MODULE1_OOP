#pragma once
#include <time.h>
#include "choise.h"

/*#define NumOfRandSurnames		10
#define NumOfRandNames			10
#define NumOfRandSecNames		10

#define NumOfRandStreets		10
#define NumOfRandTypes			6
#define NumOfRandStructures		10
#define MaxHouses				3
#define MinHouses				5*/

struct Random
{
	void RandStreet (Street *);
	void RandHome (Home *);
	void RandVoter (Voter *);
};

