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

	printf("%d is %s\n", n, (n == 0) ? "zero" : (n > 0) ? "postive" : "negative");
	return (0);
}
