#include "main.h"
#include <stddef.h>
/**
 * *_strstr - locate a substring
 *
 * @haystack: searched string
 * @needle: the string
 *
 * Return: str
 */
char *_strstr(char *haystack, char *needle)
{
	int i, size = 0;
	char *found;

	for (i = 0; needle[i] != '\0'; i++)
		size++;
	while (*haystack)
	{
		found = haystack;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*(haystack) == needle[i])
				haystack++;
			else
				break;
		}
		if (i == size)
			return (found);
		haystack++;
	}
	return (NULL);
}
