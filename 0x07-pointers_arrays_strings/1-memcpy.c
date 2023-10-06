#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: where memory area will be copied to
 * @src: where memory area will be copied from
 * @n: number of bytes from memory area
 *
 * Return: pointer to the char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
		*dest++ = *src++;

	return (start);
}
