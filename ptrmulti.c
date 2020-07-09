/* Demonstrates passin a pointer to amultidimensional array */
/* toa a function . */

#include <stdio.h>
#include <stdlib.h>

void printarray_1(int (*ptr)[4]);
void printarray_2(int(*ptr)[4], int n);

int main(void)
{
	int multi[3][4] = {{1 , 2 , 3 , 4 },
					{5 , 6 , 7 , 8},
					{9 , 10 , 11 , 12} };

	/* ptr is a pointer to an array of 4 ints. */

	int (*ptr)[4], count;

	/* set ptr to point to the first elemtn of multi. */

	ptr = multi;

	/* With each loop, ptr is incremented to point to the next */
	/* element (that is, the next 4-element integer array) of muulti. */

	for (count = 0; count < 3; count++)
		printarray_1(ptr++);

	puts("\n\nPress enter...");
	getchar();
	printarray_2(multi, 3);
	printf("\n");
	system("pause");
	return 0;
}

void printarray_1(int(*ptr)[4])
{
	/* Prints the elements of a single four-element ineger array. */
	/* p isa pointer to type int. You mus use a type cast */
	/* to make p equal to address in ptr. */

	int *p, count;
	p = (int *)ptr;

	for (count = 0; count < 4; count++)
		printf("\n%d", *p++);

}

void printarray_2(int(*ptr)[4], int n)
{
	/* Prints the lements of an n by four-element integer array. */

	int *p, count;
	p = (int *)ptr;

	for (count = 0; count < (4 * n); count++)
		printf("\n%d", *p++);
}