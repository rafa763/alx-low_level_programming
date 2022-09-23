#include "main.h"
/**
 * *leet - encode a string into 1337
 *
 * @c: string to be converted to 1337
 *
 * Return: @c
 */
char *leet(char *c)
{
	int i, j;
	char arr[] = {'a', 'e', 'o', 't', 'l'};
	char ARR[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == arr[j] || c[i] == ARR[j])
				c[i] = num[j];
		}
	}
	return (c);
}
