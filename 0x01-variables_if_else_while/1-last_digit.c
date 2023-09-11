#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * description: print the last digit of a random number
 *
 * Return: 0
 */

int main(void)
{
	int n, x;
	char *l = "and is greater than 5\n";
	char *s = "and is less than 6 and not 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x == 0)
		printf("and is 0\n");
	else
		(n > 5) ? printf("%s", l) : printf("%s", s);
	return (0);
}
