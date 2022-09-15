#include "main.h"
/**
 * print_diagonal - diagonal line of length n
 *
 * @n: first integer
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
