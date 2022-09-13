#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * description: 'print alphabet 10 times'
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		count++;
	}
}
