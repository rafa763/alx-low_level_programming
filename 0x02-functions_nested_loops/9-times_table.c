#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return: Void
 */
void times_table(void)
{
	int i, j, k, u, t;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			u = k % 10;
			t = k / 10;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + u);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + t);
				_putchar('0' + u);
			}
			if (j != 9)
			{
				_putchar(',');
			}


		}
		_putchar('\n');
	}
}
