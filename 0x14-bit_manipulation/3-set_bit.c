#include "main.h"
/**
 * set_bit - alter bit at a given index
 *
 * @n: pointer to the int
 * @index: index of the bit
 *
 * Return: Int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}
