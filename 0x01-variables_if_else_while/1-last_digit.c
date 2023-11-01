#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: check the last digit of a random string
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lastDigit;
	char *desc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	desc = (lastDigit == 0) ? "0" : (lastDigit > 5) ? "greater than 5"
		: "less than 6 and not 0";

	printf("Last digit of %d is %d and is %s\n", n, lastDigit, desc);

	return (0);
}
