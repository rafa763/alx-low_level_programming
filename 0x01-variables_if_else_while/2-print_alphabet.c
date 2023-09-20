#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print alpabet in lovercase using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
