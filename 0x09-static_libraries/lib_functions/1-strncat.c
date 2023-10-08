#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the original string
 * @src: what to be appended to dest
 * @n: number of character to be copied from @src
 *
 * Return: pointer to the full string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start;

	start = dest;

	while (*dest)
		dest++;

	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (start);
}
