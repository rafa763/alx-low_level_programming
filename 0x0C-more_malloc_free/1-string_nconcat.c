#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first passed string
 * @s2: second passed string
 * @n: number of bytes from @s2 to be copied
 *
 * Return: char pointer to the full string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *s, *ptr;

	l1 = size(s1);
	l2 = size(s2);

	if (l2 > n)
		l2 = n;

	s = malloc(sizeof(char) * (l1 + l2) + 1);

	if (!s)
		return (NULL);

	ptr = s;
	while (l1--)
		*s++ = *s1++;

	while (l2--)
		*s++ = *s2++;

	*s = '\0';

	return (ptr);
}

/**
 * size - calculates the length of a string
 * @s: the string
 *
 * Return: int
 */
int size(char *s)
{
	int size = 0;

	if (!s)
		return (0);

	while (s[size])
		size++;

	return (size);
}
