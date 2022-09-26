#include "main.h"
#include <string.h>
/**
 * *_strpbrk - search string for a set of bytes
 *
 * @s: searched string
 * @accept: string
 *
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	char *str;

	str = strpbrk(s, accept);
	return (str);
}
