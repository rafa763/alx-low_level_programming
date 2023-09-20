#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print alpabet in lovercase using putchar in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 122; x > 96; x--)
		putchar(x);

	putchar('\n');
	return (0);
}
