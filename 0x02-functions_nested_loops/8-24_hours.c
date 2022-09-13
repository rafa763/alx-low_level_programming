#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int i, j, k, l, a, b;

	for (a = 0; a < 24; a++)
	{
		i = a / 10;
		j = a % 10;
		for (b = 0; b < 60; b++)
		{
			k = b / 10;
			l = b % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
