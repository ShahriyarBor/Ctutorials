/* Demonstrates the relationship between addresses and *
 * elemtns of arrays of different data types*/

#include <stdio.h>
#include <stdlib.h>

/* Declare a counter and three arrays. */
int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main(void)
{
	/* Print the table heading */

	printf("\t\tShort\t\tFloat\t\tDouble");

	printf("\n===========================");
	printf("=============================");

	/* Print the addresses of each array element. */

	for ( ctr=0 ; ctr<10 ; ctr++ )
		printf ("\nElement %d: \t%ld\t\t%ld\t\t%ld" , ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);

	printf("\n==============================");
	printf("===========================\n");

    system("pause");

	return 0;
}