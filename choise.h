#pragma once
class Voter 									/// Voter
{
	char *Surname;								/// Surname
	char *Name;									/// Name
	char *FatherName;							/// Second name
	int Age;									/// Age
	bool HomeVoting;							/// Voting status: at home/not at home
 
 public:

	Voter ();										/// Constructor
	Voter (char *, char *, char *, int, bool);		/// Add name, age and status
	~Voter (); 
	 void SetName (char *, char *, char *);			/// Add name
	 void SetAge (int);								/// Add age
	void SetVotingStatus (bool);					/// Add status
 
	char *GetSurname ();
	char *GetName ();
	char *GetFatherName ();
	char *GetFullName ();
	int  GetAge ();
	bool GetVotingStatus ();
};

class Flat  									/// Flat
{
	int Number;									/// Flat number
	int NumOfVoters;							/// Number of voters in flat
	Voter *VotersList;							/// List of voters
 
 public:

	Flat ();									/// Constructor
	Flat (int, int, Voter *);					/// Add number, number of voters, list of voters
	~Flat ();
 
	void SetNum (int);							/// Set number
	void SetNumOfVoters (int);

	int GetNumber ();
	int GetNumOfVoters ();
	Voter *GetVotersListPtr ();

	void AddVoter ();
	void DeleteVoter ();
};

class Home										/// House
{
	int Number;									/// Number of house
	char Structure;								/// Structure of house
	int NumOfStages;								/// Number of stages
	int NumOfFlats;								/// Number of flats
	Flat *FlatesList;							/// List of flats

 public:

	Home ();
	Home (int, char, int, int);					///Add number, structure, Number of stages, number of flats
	~Home ();
 
	void SetNumAndStruct (int, char);
	void SetNumOfStages (int);
	void SetNumOfFlats (int);
 
	int GetNumber ();
	char GetStruct ();
	int GetNumOfStages ();
	int GetNumOfFlats ();
	Flat *GetFlatesListPtr ();

	void AddFlat ();
	void DeleteFlat ();
};

class Street									/// Street
{
	char *Name;									/// Name of street
	char *Type;									/// Type of street
	int NumOfHouses;							/// Number of houses
	Home *HouseList;							/// List of houses

 public:

	Street ();
	Street (char *, char *, int, Home *);
	~Street ();

	void SetName (char *);
	void SetType (char *);
	void SetNumOfHouses (int);

	char *GetName ();
	char *GetType ();
	int GetNumOfHouses ();
	Home *GetHouseListPtr ();

	void AddHome ();
	void DeleteHome ();
};

typedef struct City
{
	Street Data;
	City *pNext;
	City ();
	~City ();
} Region;

