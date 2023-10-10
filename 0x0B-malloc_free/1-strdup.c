#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string that is given as a parameter
 * @str: pointer of the given string to be copied
 *
 * Return: (char) pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	char *p, *s;
	int size;

	if (!str)
		return (NULL);

	size = 0;
	while (str[size])
		size++;

	s = malloc((sizeof(char) * size) + 1);

	if (!s)
		return (NULL);

	p = s;
	while (*str)
	{
		*s = *str;
		s++;
		str++;
	}

	*s = '\0';

	return (p);
}
