#include "main.h"
/**
 * *_memcpy - copy memory data
 *
 * @dest: destination to be copied to
 * @src: source to copy from
 * @n: number of bytes
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result = dest;

	while (n--)
		*dest++ = *src++;
	return (result);
}
