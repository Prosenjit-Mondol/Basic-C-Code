#include<stdio.h>
int main ()
	{
		int x;
		printf ("\n\nIs command processor available?\n");
		if (system(NULL))
		{
			printf ("Command processor available!\n");
		}
		else
		{
			printf ("Command processor not available!\n");
		}
		printf ("Executing command DIR\n");
		x=system ("dir");
		printf ("Returned value is: %d.\n",x);
		return 0;
	}
