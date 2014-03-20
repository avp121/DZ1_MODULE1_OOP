#include "Random.h"
#include "stdlib.h"

void RandStreet (Street *NewStreet, bool GenerHomes)
{
	NewStreet->SetName (Streets[rand ()%NumOfRandStreets]);
	NewStreet->SetType (StreetTypes[rand ()%NumOfRandTypes]);
	NewStreet->SetNumOfHouses (rand ()%(MaxHouses-MinHouses+1)+MinHouses);
}