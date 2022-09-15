#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 x10
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i, j, u, t;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			u = j % 10;
			t = j / 10;
		
			if (t != 0)
				_putchar('0' + t);
			_putchar('0' + u);
		}
		_putchar('\n');
	}
}
