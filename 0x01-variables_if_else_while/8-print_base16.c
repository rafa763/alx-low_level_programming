#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
		printf("%x", x);

	putchar('\n');
	return (0);
}
