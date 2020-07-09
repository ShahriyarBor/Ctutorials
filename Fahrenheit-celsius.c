#include <stdio.h>

int main()
{
	int fah, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fah = lower;

	printf("Fahrenheit\tCeslsius\n");

	while(fah <= upper){

			cel = 5 * (fah - 32) / 9;
			printf("  %d\t%d\n", fah, cel);
			fah = fah + step;
    }

	printf("Please press enter key to continue\n");
	getchar();
	return 0;
	
}