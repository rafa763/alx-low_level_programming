#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print alpabet in lowercase then in uppercase using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	for (x = 97; x < 123; x++)
		putchar(x);
	for (y = 65; y < 91; y++)
		putchar(y);

	putchar('\n');
	return (0);
}
