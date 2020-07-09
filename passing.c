/* Passing an array to afunction. */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int array[MAX], count;

int largest(int num_array[], int length);

int main(void)
{
	/* Input MAX values from the keyboard. */

	for (count=0 ; count<MAX ; count++)
	{
		printf("Enter an integer value: ");
		scanf("%d", &array[count]);
	}

	/*Call the function and display the return value. */
	printf("\n\nLargest value = %d\n", largest (array, MAX));

	while (getchar() != '\n')
	{

	}
	getchar();

	return 0;
}
/* Function largest() returns the largest value */
/* in an integer array */

int largest(int num_array[], int length)
{
	int count, biggest = -12000;

	for (count=0 ; count<length ; count++)
	{
		if (num_array[count] > biggest)
			biggest = num_array[count];
	}

	return biggest;
}