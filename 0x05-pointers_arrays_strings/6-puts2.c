#include "main.h"
/**
 * puts2 - print every other character
 *
 * @str: passed string
 *
 * Return: Void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}
