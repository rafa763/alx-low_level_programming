#include "main.h"
/**
 * puts_half - print half of a string
 *
 * @str: passed string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[i])
		i++;

	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i / 2) + 1;
	for (j = n; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');

}
