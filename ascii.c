/* Demonstrates printing extendd ASCII characters */

#include <stdio.h>

unsigned char mychar;	/* Must be unsigned for extended ASCII */

int main (void)
{
	/* Print extended ASCII characters 1800 through 203 */

	for (mychar = 180 ; mychar < 204 ; mychar++)
	{
		printf("ASCII code %d is character %c\n", mychar, mychar);
	}

	while (getchar() != '\n')
	

	getchar();

	return 0;

	
}