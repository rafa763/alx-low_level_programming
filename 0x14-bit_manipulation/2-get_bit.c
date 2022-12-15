#include "main.h"
#include <stdio.h>
/**
 * get_bit - return value of a bit at a given index
 *
 * @n: given bit
 * @index: bit to be found
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	while (index--)
		n >>= 1;
	if (n & 1)
		return (1);
	else
		return (0);
}
