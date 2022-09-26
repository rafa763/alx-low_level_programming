#include "main.h"
#include <string.h>
/**
 * *_strspn - get length of prefix substring
 *
 * @s: number of bytes
 * @accept: string
 *
 * Return: *s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
