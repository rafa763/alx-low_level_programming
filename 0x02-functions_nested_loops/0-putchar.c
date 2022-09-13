#include "main.h"
#include "_putchar.c"
/**
 * main - Entry point
 *
 * description: 'program that prints _putchar, followed by a new line.'
 *
 * Retur: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "_putchar";		
	for (i = 0; i != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
