#include "main.h"

/**
 * puts2 - print every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: string to be printed
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str; i++, ++str)
	{
		if (i % 2 == 0)
			_putchar(*str);
	}

	_putchar('\n');
}
