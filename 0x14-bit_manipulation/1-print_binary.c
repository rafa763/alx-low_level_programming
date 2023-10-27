#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: passed integer to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int bit, flag = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		bit = (n >> shift) & 1;

		if (bit || flag)
		{
			_putchar(bit ? '1' : '0');
			flag = 1;
		}

		shift--;
	}
}
