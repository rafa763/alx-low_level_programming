#include "main.h"
/**
 * binary_to_uint - convert binary to integer
 *
 * @b: pointer to the binary
 *
 * Return: Int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pos = 1, num = 0, s = 0;

	if (!b)
		return (0);
	while (b[s])
		s++;
	while (s--)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
		if (b[s] == '1')
			num += pos;
		pos *= 2;
	}
	return (num);
}
