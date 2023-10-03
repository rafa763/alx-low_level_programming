#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by a new line.
 * @s: string to printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	const char *ptr = s;

	while (*ptr)
		ptr++;

	while (ptr != s)
	{
		ptr--;
		_putchar(*ptr);
	}

	_putchar('\n');
}
