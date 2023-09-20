#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print whether a random number is +ve or -ve
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else
		(n > 0) ? printf("%d is postive\n", n) : printf("%d is negative\n", n);
	return (0);
}
