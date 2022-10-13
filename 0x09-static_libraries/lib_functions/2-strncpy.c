#include "main.h"
/**
 * _strncpy - copy a string
 *
 * @dest: string to be appened to to
 * @src: string which will be copied from
 *@n: buffer size
 *
 * Return: Char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n--)
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = 0;
	return (result);
}
