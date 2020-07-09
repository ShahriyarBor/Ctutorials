/* Demonstrates the use of mallloc() to allocate storate */
/* Space for string data. */

#include <stdio.h>
#include <stdlib.h>

char count, *ptr, *p;

int main (void)
{
	/* Allocate a block of 35 bytes. Test for success. */
	/* The exit() library function terminates the program. */

	ptr = malloc(35 * sizeof(char));

	if (ptr == NULL)
	{
		puts("Memory allocation error.");
		return 1;
	}

	/* Fill the string with values 65 through 90, */
	/* which are the ASCII codes for A-Z. */

	/* p isa pointer used to step through the string. */
	/* You want ptr to remain pointed at the strat */
	/* of the string. */

	p = ptr;

	for (count = 65 ; count < 91 ; count++)
	{
		*p = count;
		 p++;
	}

	/* Add the terminating null character. */

	*p = '\0';

	/* Display the string on the screen. */

	puts(ptr);

	free(ptr);

	while(getchar() != '\n')
	{}

	getchar();

	return 0;
	
}