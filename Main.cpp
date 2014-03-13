#incude "choise.h"
#include "names.h"

int main ()
{
	 int com=1; 
	while (com)
	 {
		system ("cls");
		printf ("1:\tAdd\n2:\tDelete\n3:\tFind\n4:\tPrint\n0:\tExit\n\nEnter number of command:\t");
		scanf ("%d", &com);
		switch (com!=IDM_EXIT)
		{
			case (IDM_ADD):
			case (IDM_DELETE):
			case (IDM_FIND):
			case (IDM_PRINT):
			case (IDM_EXIT): break;
			default: 	
				printf (\nError: unknown command\n);
				system ("pause");
				break;

		}
	}
	return 0;
}