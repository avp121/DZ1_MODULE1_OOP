#pragma once
#include "choise.h"
#include <string.h>
//|Voter|-------------------------------------------------------------------------
Voter::Voter ()
{
	this->Name=0;
	this->Surname=0;
	this->FatherName=0;
	this->Age=0;
	this->Vote=0;
	this->HomeVoting=0;
	this->Next=0;
}

Voter::Voter (Voter *V)
{
	this->Name=V->Name;
	this->Surname=V->Surname;
	this->FatherName=V->FatherName;
	this->Age=V->Age;
	this->Vote=V->Vote;
	this->HomeVoting=V->HomeVoting;
	this->Next=0;
}

Voter::Voter(char *surn, char *name, char *fname, int age, bool homevot)
{
	this->Surname=surn;
	this->Name=name;
	this->FatherName=fname;
	this->Age=age;
	this->HomeVoting=homevot;
	this->Next=0;
}

Voter::~Voter ()
{
	if (Surname) delete [] Surname;
	if (Name) delete [] Name;
	if (FatherName) delete [] FatherName;
};
//--------------------------------------------------------------------------------
void Voter::SetAge (int NewAge)
{
	Age=NewAge;
}

void Voter::SetName(char *surn, char *name, char *fname)
{
	Surname=surn;
	Name=name;
	FatherName=fname;
}

void Voter::SetVotingStatus(bool VS)
{
	HomeVoting=VS;
}

void Voter::SetVote (bool V)
{
	Vote=V;
}
//--------------------------------------------------------------------------------
char *Voter::GetName()
{
	return this->Name;
}

char *Voter::GetFatherName ()
{
	return this->FatherName;
}

char *Voter::GetSurname ()
{
	return this->Surname;
}

char *Voter::GetFullName ()
{
	char *FullName=0;
	strcat(FullName, Surname);
	strcat(FullName, Name);
	strcat(FullName, FatherName);
	return FullName;
}

int Voter::GetAge ()
{
	return this->Age;
}

bool Voter::GetVotingStatus ()
{
	return this->HomeVoting;
}

bool Voter::GetVote ()
{
	return this->Vote;
}
//|Home|--------------------------------------------------------------------------
Home::Home ()
{
	this->Number=0;
	this->Structure=0;
	this->NumOfStages=0;
	this->NumOfFlats=0;
	this->NumOfVoters=0;
	this->Next=0;
}

Home::Home(Home *H)
{
	this->Number=H->Number;
	this->Structure=H->Structure;
	this->NumOfStages=H->NumOfStages;
	this->NumOfFlats=H->NumOfFlats;
	this->Next=0;
}

Home::Home(int Num, char Struct, int NumOfStag, int NumOfFlat, int NumOfVot, Voter *VotList)
{
	this->Number=Num;
	this->Structure=Struct;
	this->NumOfStages=NumOfStag;
	this->Next=0;
};

Home::~Home ()
{
	//if (VoterList) delete [] VoterList;
	Voter *Temp;
	while (VoterList->Next)
	{
		Temp=VoterList;
		VoterList=VoterList->Next;
		delete [] Temp;
	}
	delete []VoterList;
}
//--------------------------------------------------------------------------------
void Home::SetNumAndStruct(int Num, char Struct)
{
	Number=Num;
	Structure=Struct;
}

void Home::SetNumOfStages(int NumOfStag)
{
	NumOfStages=NumOfStag;
}

void Home::SetNumOfFlats(int Flats)
{
	NumOfFlats=Flats;
}
//--------------------------------------------------------------------------------
int Home::GetNumber()
{
	return this->Number;
}

char Home::GetStruct ()
{
	return this->Structure;
}

int Home::GetNumOfStages ()
{
	return this->NumOfStages;
}

int Home::GetNumOfFlats()
{
	return this->NumOfFlats;
}

Voter *Home::GetVotersListPtr()
{
	return this->VoterList;
}
//--------------------------------------------------------------------------------
void Home::AddVoter()
{
 //soon
}

void Home::DeleteVoter()
{
 //soon
}
//|Street|--------------------------------------------------------------------------

Street::Street()
{
	this->Name=0;
	this->Type=0;
	this->NumOfHouses=0;
	this->HouseList=0;
}

Street::Street (Street *S)
{
	this->Name=S->Name;
	this->Type=S->Type;
	this->NumOfHouses=S->NumOfHouses;
}

Street::Street(char *N, char *T, int NOH, Home * List)
{
	this->Name=N;
	this->Type=T;
	this->NumOfHouses=NOH;
	this->HouseList=List;
}

Street::~Street()
{
	if (Name) delete [] Name;
	if (Type) delete [] Type;
	//if (HouseList) delete [] HouseList;
	Home *Temp;
	while (HouseList->Next)
	{
		Temp=HouseList;
		HouseList=HouseList->Next;
		delete [] Temp;
	}
	delete []HouseList;
}
//--------------------------------------------------------------------------------
void Street::SetName(char *N)
{
	Name=N;
}

void Street::SetType(char *T)
{
	Type=T;
}

void Street::SetNumOfHouses(int Num)
{
	NumOfHouses=Num;
}
//--------------------------------------------------------------------------------
char *Street::GetName()
{
	return this->Name;
}

char *Street::GetType()
{
	return this->Type;
}

int Street::GetNumOfHouses()
{
	return this->NumOfHouses;
}

Home *Street::GetHouseListPtr()
{
	return this->HouseList;
}
//--------------------------------------------------------------------------------
void Street::AddHome()
{
 //soon
}

void Street::DeleteHome()
{
 //soon
}