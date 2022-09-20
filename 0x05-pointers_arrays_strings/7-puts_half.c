#include "main.h"
#include <string.h>
/**
 * puts_half - print half of a string
 *
 * @str: passed string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i = strlen(str), n;

	if (i % 2 == 0)
		n = strlen(str) / 2;
	else
		n = (strlen(str) - 1) / 2;

	for (i = n + 1; i < (int)strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');

}
