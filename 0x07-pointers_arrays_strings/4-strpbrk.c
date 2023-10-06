#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to be searched
 * @accept: pointer to the string to search from
 *
 * Return: pointer to the matched string
 */
char *_strpbrk(char *s, char *accept)
{
	int chars[256] = {0};

	while (*accept)
	{
		chars[(int)*accept] = 1;
		accept++;
	}

	while (*s++ && !chars[(int)*s++])
		return (s);

	return (NULL);
}
