#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main functio part
 *        print a number and check if it is positive, negative, or zero.
 *
 * Return: return 0.
*/

int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf(" the number is positive\n", i);
	else if (i < 0)
		printf(" the number is negative\n", i);
	else
		printf(" the number is zero\n", i);

	return (0);
}
