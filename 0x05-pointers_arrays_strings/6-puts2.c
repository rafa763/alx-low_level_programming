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
	while (*str && *(str + 1))
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}
