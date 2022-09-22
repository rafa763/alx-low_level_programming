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
	strcat(dest, src);
	return (dest);
}
