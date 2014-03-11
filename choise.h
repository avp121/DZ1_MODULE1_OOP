typedef class
{
 char *Surname;
 char *Name;
 char *FatherName;
 int Age;
 bool HomeVoting;
 Voter *Next;
} Voter;

typedef class
{
 int Number;
 int NumOfVoters;
 Voter *VotersList;
 Flat *Next;
}Flat;

class Home
{
 int Number;
 int Structure;
 int NumOfStages;
 int NumOfFlats;
 Flat *FlatesList;
 Home *Next;
};

class street
{
 char *Name;
 int Type;
 int NumOfHouses;
 Home *HouseList;
 street *Next;
};