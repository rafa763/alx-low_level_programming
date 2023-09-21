#include "main.h"

/**
 * print_sign - Entry point
 *
 * description: print the sign of a number
 * @n: the passsed number to be checked
 *
 * Return: 1 if postive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	char sign;

	sign = (n > 0) ? '+' : (n < 0) ? '-' : '0';
	_putchar(sign);
	return ((sign == '0') ? 0 : (sign == '+') ? 1 : -1);
}
