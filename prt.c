/* Demonstrates basic pointer use */

#include <stdio.h>
#include <stdlib.h>

/* Declare and initialize an int variable */

int var = 1;

/* Declare a pointer to int */

int *ptr;

int main (void)
{
	/* Intialize ptr to point to var */

	ptr = &var;

	/* Accesss var directrly and indirectly */

	printf("\nDirect access, var = %d", var);
	printf("\nIndirect access, var = %d", *ptr);

	/* Display the address var two ways */

	printf("\n\nThe address of var = %d", &var);
	printf("\nThe address of var = %d\n", ptr);

	getchar();
	system("pause");

	return 0;
}