#include "main.h"
#include "_putchar.c"

/**
 * description: 'print alphabet followed by new line'
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
