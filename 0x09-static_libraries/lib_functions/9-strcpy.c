#include "main.h"
/**
 * _strcpy - copy string pointed to by src
 *
 * @dest: string to write to
 * @src: string to copy
 *
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
