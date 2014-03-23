#pragma once
#include "Random.h"
#include <stdlib.h>

/*void RandStreet (Street *NewStreet, bool GenerHomes)
{
	NewStreet->SetName (ArrOfStreets[rand ()%NumOfRandStreets]);
	NewStreet->SetType (ArrOfStreetTypes[rand ()%NumOfRandTypes]);
	NewStreet->SetNumOfHouses (rand ()%(MaxHouses-MinHouses+1)+MinHouses);
}*/

void Random::RandVoter(Voter *pVoter)
{
	char Surnames[10][100] = {"Komarov\0", "Volkov\0", "Sinicin\0", "Galitskiy\0", "Petrosyan\0", "Vinnik\0", "Pavlov\0", "Soloviev\0", "Sidorov\0", "Polevoy\0"};
	char Names[10][100] = {"Dmitriy\0", "Vladimir\0", "Simeon\0", "Petr\0", "Anton\0", "Sergey\0", "Victor\0", "Svyatoslav\0", "Oleg\0", "Emelyan\0"};
	char SecNames[10][100] = {"Lvovich\0", "Alexandrovich\0", "Nikolayevich\0", "Vardanovich\0", "Danilovich\0", "Kirillovich\0", "Petrovich\0", "Afanasyevich\0", "Timurovich\0", "Olegovich\0"};
	pVoter->SetName (Surnames[rand()%10], Names[rand()%10], SecNames[rand()%10]);
	pVoter->SetAge (rand()%80+18);
	if (pVoter->GetAge() > 17) pVoter->SetVote (rand()%2);
	else pVoter->SetVote (NULL);
	pVoter->SetVotingStatus (rand()%2);
}

void Random::RandHome(Home *pHome)
{
	char ArrOfStructures[10] = {'a', 'b', 'c', 'd', 'e', '1', '2', '3', '4', '5'};
	pHome->SetNumAndStruct (rand () %100, ArrOfStructures[rand ()%10]);
	pHome->SetNumOfStages (rand ()%40+1);
	pHome->SetNumOfFlats (pHome->GetNumOfStages()*(rand ()%12+1));
}

void Random::RandStreet(Street *pStreet)
{
	char ArrOfStreets[10][256] = {"Zelenaya\0", "Solnechnaya\0", "Revolucionerov\0", "Prikanalnaya\0", "Kosmonavtov\0", "Ingenernaya\0", "Bolotistaya\0", "Tixaya\0", "Oblachnaya\0", "Rechnaya\0"};
    char ArrOfStreetTypes[6][256] = {"Avenue\0", "Boulevard\0", "Highway\0", "Prospect\0", "Square\0", "Street\0"};
	pStreet->SetName (ArrOfStreets[rand()%10]);
	pStreet->SetType (ArrOfStreetTypes[rand()%6]);
	//pStreet->SetNumOfHouses (rand ()%50);
}