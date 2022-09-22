#include "main.h"
#include <string.h>
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
	strncat(dest, src, n);
	return (dest);
}
