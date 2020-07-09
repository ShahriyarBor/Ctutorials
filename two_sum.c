/* A leetcode.com problem */

#include <stdio.h>
#include <stdlib.h>

int n = 0;

int main (void)
{
	puts("How many numbers would you like to enter? ");
	scanf("%d", &n);

	int target = 0;
	int numbers[n];
	int indicies [2] = {0 , 0};

	puts("\nEnter your numbers: ");

	/* Save all the numbers from user input */

	for (int count = 0 ; count < n ; count++)
		scanf("%d", &numbers[count]);

	/* Get the tartget number */

	puts("Please enter the target number: ");
	scanf ("%d", &target);

	/* CHeck if any of the numbers add up to the target */

	for (int i = 0 ; i < n - 1 ; i++)
	{
		for (int j = i + 1 ; j < n  ; j++)
		{
			if(numbers[i] + numbers[j] == target)
			{
				indicies[0] = i;
				indicies[1] = j;
				break;
			}

		}
	}

	/* report the results */

	if((indicies[0] == 0) && (indicies[1] == 0))
		puts("None of the numbers sum up to the target");
		else
			printf("\nThe indicies are: %d %d\n", indicies[0] + 1 , indicies[1] + 1);
	
	system("pause");

	return 0;
}