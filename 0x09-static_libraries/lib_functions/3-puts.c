#include "main.h"

/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: pointer to string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	const char *s = str;

	while (*s)
	{
		_putchar(*s);
		++s;
	}
	_putchar('\n');
}
