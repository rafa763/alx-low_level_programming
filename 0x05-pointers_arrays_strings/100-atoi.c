#include "main.h"
/**
 * _atoi - convert string to an integer
 *
 * @s: string to be converted
 *
 * Return: int (converted string)
 */
int _atoi(char *s)
{
	int i, t = 0, n = 1, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			n *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			i++;
			t = 1;
		}
		if (t != 0)
			break;
	}
	if (n < 0)
		return (-1 * num);
	return (num);
}
