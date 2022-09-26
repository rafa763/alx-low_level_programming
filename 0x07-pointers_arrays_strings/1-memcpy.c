#include "main.h"
#include <string.h>
/**
 * *_memcpy - copy memory data
 *
 * @dest: destination to be copied to
 * @src: source to copy from
 *@n: number of bytes
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
