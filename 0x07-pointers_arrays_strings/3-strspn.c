#include "main.h"
/**
 * *_strspn - get length of prefix substring
 *
 * @s: number of bytes
 * @accept: string
 *
 * Return: Int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, count = 0, brk = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				count++;
		}
		brk++;
		s++;
		if (brk != count)
			break;
	}
	return (count);
}
