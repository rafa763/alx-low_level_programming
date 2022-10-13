#include "main.h"
/**
 * *_memset - fill the first n bytes of memory pointed to by s with byte b
 *
 * @s: pointer to the written memory
 * @b: char to be written
 * @n: number of bytes
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *result = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (result);
}
