#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: frist string to be concatenated.
 * @s2: second string to be concatenated.
 *
 * Return: pointer to the full string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	char *p, *start;

	while (s1[size1])
		size1++;

	while (s2[size2])
		size2++;

	if (!*s1)
		s1 = "";

	if (!*s2)
		s2 = "";

	p = malloc(size1 + size2 + sizeof(char) + 1);
	start = p;

	if (!p)
		return (NULL);

	while (*s1)
		*p++ = *s1++;

	while (*s2)
		*p++ = *s2++;

	*p = '\0';

	return (start);
}

