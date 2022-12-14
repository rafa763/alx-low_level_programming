#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * @dest: string to be appened to to
 * @src: string which will be copied from
 *@n: buffer size
 *
 * Return: Char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest)
		dest++;
	while (n-- && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (result);
}
