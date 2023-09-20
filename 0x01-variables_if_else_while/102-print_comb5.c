#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all possible different combinations of two two-digits
 * using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y, z, c;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = x; z <= '9'; z++)
			{
				for (c = y; c <= '9'; c++)
				{
					if ((x != z || y != c))
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(c);

						if (x != '9' || y != '8' || z != '9' || c != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
