#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a given number
 *
 * @n: given number
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
