#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * description: prints the last digit of a number.
 * @n: the given number to be processed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar(x + '0');

	return (x);
}
