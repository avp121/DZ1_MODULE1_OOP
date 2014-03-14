typedef class									/// Voter
{
 char *Surname;									/// Surname
 char *Name;									/// Name
 char *FatherName;								/// Second name
 int Age;										/// Age
 bool HomeVoting;								/// Voting status: at home/not at home
 Voter();										/// Constructor
 Voter (char *, char *, char *, int, bool);		/// Add name, age and status
 public:
 void ChangeName (char *, char *, char *);		/// Add name
 void ChangeAge (int);							/// Add age
 void ChangeVotingStatus (bool);				/// Add status
} Voter;

typedef class									/// Flat
{
 int Number;									/// Flat number
 int NumOfVoters;								/// Number of voters in flat
 Voter *VotersList;								/// List of voters
 Flat ();										/// Constructor
 Flat (int, int, Voter *);						/// Add number, number of voters, list of voters
 public:
 void ChangeNum (int);							/// Change number
 void AddVoter ();
 void DeleteVoter ();
}Flat;

class Home										/// House
{
 int Number;									/// Number of house
 char Structure;								/// Structure of house
 int NumOfStages;								/// Number of stages
 int NumOfFlats;								/// Number of flats
 Flat *FlatesList;								/// List of flats
 Home ();
 Home (int, char, int, int);					///Add number, structure, Number of stages, number of flats
 public:
 void ChangeNumAndStruct ();
 void ChangeNumOfStages ();
 void AddFlat ();
 void DeleteFlat ();
};

class Street									/// Street
{
 char *Name;									/// Name of street
 int Type;										/// Type of street
 int NumOfHouses;								/// Number of houses
 Home *HouseList;								/// List of houses
 Street ();
 Street (char *, int, NumOfHouses, Home *);
 public:
 void ChangeName ();
 void ChangeType ();
 void ChangeNumOfHouses ();
 void AddHome ();
 void DeleteHome ();
};

typedef struct
{
 Street Data;
 City *pNext;
} City;

