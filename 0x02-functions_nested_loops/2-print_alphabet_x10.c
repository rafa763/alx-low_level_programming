#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * description: print the alphabet, in lowercase 10 times, followed
 * by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

	_putchar('\n');
}
