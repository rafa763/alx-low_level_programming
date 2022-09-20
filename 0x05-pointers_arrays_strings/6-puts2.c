#include "main.h"
#include <string.h>
/**
 * puts2 - print every other character
 *
 * @str: passed string
 *
 * Return: Void
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
