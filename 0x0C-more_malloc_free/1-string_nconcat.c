#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 *
 * @s1: frist string
 * @s2: second string
 * @n: no. of chars from s2
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *str;
	int size1 = 0, size2 = 0;

	(!s1) ? s1 = "" : 0;
	(!s2) ? s2 = "" : 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	ptr = (char *)malloc((size1 + size2 - 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	str = ptr;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2 && n--)
		*ptr++ = *s2++;
	*ptr++ = '\0';
	return (str);
}
