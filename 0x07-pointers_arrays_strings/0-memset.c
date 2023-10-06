#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the allocated string
 * @b: constant byte to initialize @s with
 * @n: number of bytes to initialize from @s
 *
 * Return: pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (start);
}
