#include <stdlib.h>
#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to the text to search in
 * @needle: pointer to the text to locate in @haystack
 *
 * Return: char (pointer to the beginning of the located
 * substring, or NULL if the substring is not found)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p = haystack;
		char *n = needle;

		while (*needle && *haystack && *needle == *haystack)
		{
			needle++;
			haystack++;
		}

		if (*needle == '\0')
			return (p);

		haystack = p + 1;
		needle = n;
	}

	return (NULL);
}
