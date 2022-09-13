#include "main.h"
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
	char c;
	char str[] = "_putchar";		
	for (i = 0; i != '\0'; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
