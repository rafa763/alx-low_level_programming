#include "main.h"

/**
 * times_table - Entry point
 *
 * description: print the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, q;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			q = i * j / 10;
			if (j != 0)
				(q == 0) ? _putchar(' ') : _putchar(q + '0');
			_putchar((i * j % 10) + '0');


			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
