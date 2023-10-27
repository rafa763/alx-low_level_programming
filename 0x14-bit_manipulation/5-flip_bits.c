#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	int shift = sizeof(long int) * 8 - 1;
	int bit, count = 0;

	res = n ^ m;

	while (shift >= 0)
	{
		bit = (res >> shift) & 1;
		if (bit)
			count++;
		shift--;
	}

	return (count);
}

