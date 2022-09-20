#include "main.h"
#include <string.h>
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
	int i;

	for (i = 0; i < (int)strlen(src); i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
