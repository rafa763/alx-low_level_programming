#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print alphabet in lowercase except q and e using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 113 && x != 101)
			putchar(x);
	}

	putchar('\n');
	return (0);
}
