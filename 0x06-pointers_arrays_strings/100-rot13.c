#include "main.h"
/**
 * rot13 - Rotate every char by 13 places
 *
 * @str: string to be rotated
 *
 * Return: rotated string (char)
 */
char *rot13(char *str)
{
	char *result = str;
	int i;
	char orgn[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotated[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str)
	{
		for (i = 0; orgn[i]; i++)
		{
			if (*str == rotated[i])
				*str = rotated[i];
		}
		str++;
	}
	return (result);
}
