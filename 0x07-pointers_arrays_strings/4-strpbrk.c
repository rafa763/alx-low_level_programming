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
	char *start = accept;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
				return (s);
		}
		accept = start;
	}

	return (NULL);
}
