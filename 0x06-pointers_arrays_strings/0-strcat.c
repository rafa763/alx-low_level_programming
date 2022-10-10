#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 *
 * @dest: string to be appened to to
 * @src: string which will be copied from
 *
 * Return: Char
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (result);
}
