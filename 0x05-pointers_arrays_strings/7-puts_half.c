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
	n = strlen(str) / 2;

	for (i = n; i < (int)strlen(str) / 2; i++)
		_putchar(str[i]);
	_putchar('\n');

}
