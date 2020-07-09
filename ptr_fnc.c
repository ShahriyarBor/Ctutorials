/* Demonstration of declaring and using a pointer to afunction */

#include <stdio.h>

/* The fucntion prototype. */

double square(double x);

/* The pointer declaration. */

double (*ptr)(double x);

int main (void)
{
	/* Intiialise p to point to square(). */

	ptr = square ;

	/* Call square () two ways. */

	printf("%f  %f\n", square(6.6), ptr(6.6));

	while (getchar() != '\n')
		;

	getchar();
	return 0;
}

double square(double x)
{
	return x * x;
}