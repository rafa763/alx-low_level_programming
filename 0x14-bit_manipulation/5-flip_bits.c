#include "main.h"
#include <stdio.h>
/**
 * flip_bits - count no. of bits to flip to get another num.
 *
 * @n: given number
 * @m: desired number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int tmp;

	tmp = (n ^ m);
	while (tmp > 0)
	{
		if (tmp & 1)
			count++;
		tmp >>= 1;
	}
	return (count);
}
