#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit for a given number
 *
 * @i: int to be altered
 *
 * Return: int n
 */
int print_last_digit(int i)
{
	int n;

	if (i > 0)
		n = i % 10;
	else
		n = -1 * (i % 10);
	_putchar('0' + n);
	return (n);
}
