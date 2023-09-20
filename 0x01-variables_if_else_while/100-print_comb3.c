#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all possible different combinations of two digits
 * using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y && x != y)
			{
				putchar(x);
				putchar(y);

				if (x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
