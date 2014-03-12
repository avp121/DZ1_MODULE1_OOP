typedef class									/// Voter
{
 char *Surname;									/// Surname
 char *Name;									/// Name
 char *FatherName;								/// Second name
 int Age;										/// Age
 bool HomeVoting;								/// Voting status: at home/not at home
 Voter();										/// Constructor
 Voter (char *, char *, char *, int, bool);		/// Add name, age and status
 void ChangeName (char *, char *, char *);		/// Add name
 void ChangeAge (int);							/// Add age
 void ChangeVotingStatus (bool);				/// Add status
} Voter;

typedef class									/// Flat
{
 int Number;									/// Flat number
 int NumOfVoters;								/// Number of voters in flat
 Voter *VotersList;								/// List of voters
 Flat *pNext;									/// Next flat pointer
 Flat ();										///
 Flat (int, int, Voter *, Flat *);				///
 void ChangeNum (int);							///
 void ChangeNumOfVoters (int);					///
 void AddNext (Flat *);							///
}Flat;

class Home										/// House
{
 int Number;									/// Number of house
 char Structure;								/// Structure of house
 int NumOfStages;								/// Number of stages
 int NumOfFlats;								/// Number of flats
 Flat *FlatesList;								/// List of flats
 Home *pNext;									/// Next house pointer

};

class Street									/// Street
{
 char *Name;									/// Name of street
 int Type;										/// Type of street
 int NumOfHouses;								/// Number of houses
 Home *HouseList;								/// List of houses
 Street *pNext;									/// Next street pointer
};
