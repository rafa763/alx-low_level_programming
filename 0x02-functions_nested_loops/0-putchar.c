#include "main.h"

/**
 * main - Entry point
 *
 * description: print the string '_putchar' followed by newline
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char *str = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
	return (0);
}
