//|Voter|-------------------------------------------------------------------------
Voter::Voter ()
{
 Name=0;
 Surname=0;
 FatherName=0;
 Age=0;
 HomeVoting=0;
}

Voter::Voter(char *surn, char *name, char *fname, int age, bool homevot)
{
 Surname=surn;
 Name=name;
 FatherName=fname;
 Age=age;
 HomeVoting=homevot;
}

void Voter::ChangeAge (int NewAge)
{
 Age=NewAge;
}

void Voter::ChangeName(char *surn, char *name, char *fname)
{
 Surname=surn;
 Name=name;
 FatherName=fname;
}

void Voter::ChangeVotingStatus(bool VS)
{
 HomeVoting=VS;
}
//|Flat|--------------------------------------------------------------------------
Flat::Flat ()
{
 Number=0;
 NumOfVoters=0;
 VotersList=0;
}

Flat::Flat(int Num, int NumOfVot, Voter *VotList)
{
 Number=Num;
 NumOfVoters=NumOfVot;
 VotersList=*VotList;
}

void Flat::ChangeNum (int Num)
{
 Number=Num;
}

void Flat::AddVoter()
{
 //soon
}

void Flat::DeleteVoter()
{
 //soon
}
//|Home|--------------------------------------------------------------------------
Home::Home ()
{
 Number=0;
 Structure=0;
 NumOfStages=0;
 NumOfFlats=0;
}

Home::Home(int Num, char Struct, int NumOfStag, int NumOfFlat)
{
 Number=Num;
 Structure=Struct;
 NumOfStages=NumOfStag;
};

void Home::ChangeNumAndStruct(int Num, char Struct)
{
 Number=Num;
 Structure=Struct;
}

void Home::ChangeNumOfStages(int NumOfStag)
{
 NumOfStages=NumOfStag;
}

void Home::AddFlat()
{
 //soon
}

void Home::DeleteFlat()
{
 //soon
}
//|Street|--------------------------------------------------------------------------

Street::Street()
{
 Name=0;
 Type=0;
 NumOfHouses=0;
 HouseList=0;
}

Street::Street(char *N, int T, int NOH, Home * List)
{
 Name=N;
 Type=T;
 NumOfHouse=NOH;
 HouseList=List;
}

void Street::ChangeName(char *N)
{
 Name=N;
}

void Street::ChangeType(int T)
{
 Type=T;
}

void Street::ChangeNumOfHouses(int Num)
{
 NumOfHouses=Num;
}

void Street::AddHome()
{
 //soon
}

void Street::DeleteHome()
{
 //soon
}
