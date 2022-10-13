#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 *
 * @s1: string to be copied
 * @s2: string concatenated
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	char *result, *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	ptr = malloc(sizeof(char) * (size1 + size2) + 1);

	if (!ptr)
		return (NULL);
	result = ptr;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	return (result);
}
