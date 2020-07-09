/* This program calculates tiling cost using user input cost per tile */

#include <stdio.h>

int nbr;

struct tile_properties {
	int h;
	int w;
	int a;
	int cost;
} tile ;

struct floor_properties {
	int h;
	int w;
	int a;
} flr ;

int main (void)
{
	/* Get the height from user */
	printf("\nPlease enter the height: ");
	scanf("%d", &flr.h);

	/* Get the width from user */
	printf("\nPlease enter the width: ");
	scanf("%d", &flr.w);

	flr.a = flr.h * flr.w ;

	/* Get the cost per tile */
	printf("\nPLease enter the cost per tile: ");
	scanf("%d", &tile.cost);

	/* Get the height and width of each tile */
	printf("\nPlease enter the height of each tile: ");
	scanf("%d", &tile.h);

	printf("\nPlease enter the width of eaach tile: ");
	scanf("%d", &tile.w);

	tile.a = tile.w * tile.h;

	nbr = flr.a / tile.a;

	tile.cost *= nbr;

	/* Print the total cost */

	printf("The total cost will be %d\n", tile.cost);

	while (getchar() != '\n')
	{

	}

	getchar();

	return 0;

}