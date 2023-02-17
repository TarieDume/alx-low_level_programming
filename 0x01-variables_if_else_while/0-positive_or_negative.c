#include <stdlib.h>
#include <time.h>
#include <stidio.h>

/**
 * main - Print a random number and determine if the number is negativ, positive or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf ("%d is positive\n", n);
	}
	else if (n < 0)
	{	
		printf ("%d is negative\n", n);
	
	}
	else
	{
		printf ("%d is negative\n", n);
	}
	return (0);
}
