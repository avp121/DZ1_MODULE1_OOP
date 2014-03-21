#pragma once
#include "Random.h"
#include "stdlib.h"

void RandStreet (Street *NewStreet, bool GenerHomes)
{
	NewStreet->SetName (ArrOfStreets[rand ()%NumOfRandStreets]);
	NewStreet->SetType (ArrOfStreetTypes[rand ()%NumOfRandTypes]);
	NewStreet->SetNumOfHouses (rand ()%(MaxHouses-MinHouses+1)+MinHouses);
}