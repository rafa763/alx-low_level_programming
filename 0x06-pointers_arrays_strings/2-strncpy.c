#include "main.h"
#include <string.h>
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
	strncpy(dest, src, n);
	return (dest);
}
