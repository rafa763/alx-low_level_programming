#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: the passed integer
 * @index: index of the bit
 *
 * Return: bit @index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int bit, flag = 0;

	if (!n)
		return (-1);

	while (shift >= 0)
	{
		bit = (n >> shift) & 1;

		if (bit || flag)
			flag = 1;

		if (shift == (int)index)
			return (bit);

		shift--;
	}

	return (-1);
}
