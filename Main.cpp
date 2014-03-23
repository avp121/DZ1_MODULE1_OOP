#pragma once
#include "choise.h"
#include "Random.h"
#include "fsystem.h"
#include "names.h"

int main ()
{
	Street *pFirst;
	Random *Rand;
	pFirst=new Street;
	Rand=new Random;
	Rand->RandStreet (pFirst);
	system ("cls");
	printf ("We have a random street:\n");
	pFirst->ShowInfo ();
	printf ("\n");

	delete pFirst;
	delete Rand;
	system ("pause");
	return 0;
}