#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all single digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);

	putchar('\n');
	return (0);
}
