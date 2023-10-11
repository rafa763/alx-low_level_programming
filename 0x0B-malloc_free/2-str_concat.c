#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *s;
	int size1, size2;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	size1 = 0;
	while (s1[size1])
		size1++;

	size2 = 0;
	while (s2[size2])
		size2++;

	s = malloc(sizeof(char) * (size1 + size2) + 1);

	if (!s)
		return (NULL);

	ptr = s;
	while (*s1)
		*s++ = *s1++;

	while (*s2)
		*s++ = *s2++;

	*s = '\0';

	return (ptr);
}
