#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: the original string
 * @src: what to be appended to dest
 * @n: number of character to be copied from @src
 *
 * Return: pointer to the full string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n--)
	{
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = 0;

		while (n--)
			*dest++ = '\0';
	}

	return (start);
}
