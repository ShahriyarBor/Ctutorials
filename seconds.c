/* seconds.c */
/* Pogam tha pauses. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sleep (int nbr_seconds);

int main (void)
{
	int ctr;
	int wait;

	printf("How many seconds would you like to wait? ");
	scanf ("%d", &wait);

	/* Pause for a number of seconds. Print a *
	 * dot each second waited.				  */

	printf("Delay for %d seconds\n", wait );
	printf(">");

	for (ctr=1; ctr <= wait; ctr++)
	{
		printf(".");	 /* print a dot */
		fflush(stdout);	 /* force dot to ptint on buffered machines */
		sleep ( (int) 1);/* pause 1 second */
	}
	printf("Done!\n");
	return 0;
}

/* Pauses for a specified number of second */
void sleep( int nbr_seconds )
{
	clock_t goal;

	goal = ( nbr_seconds * CLOCKS_PER_SEC ) + clock();

	while ( goal > clock() )
	{
		; /* loop */
	}
}