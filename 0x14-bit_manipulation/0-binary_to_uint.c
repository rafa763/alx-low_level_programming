#include "main.h"

#define ISDIGIT(d) ((d) >= '0' && (d) <= '9')
#define CTOD(c) ((c) - '0')
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, size = 0, i = 0;

	if (!b)
		return (0);

	while (b[size])
		size++;

	for (i = 0; size--; i++)
	{
		if (!ISDIGIT(b[i]))
			return (0);

		num += CTOD(b[size]) << i;
	}

	return (num);

}
