#include <stdio.h>
/**
 * main - entry point
 *
 * description: 'print first fibonacci numbers followed by new line'
 *
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 1, total = 0, q;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			total += b;
		}
		q = b;
		b += a;
		a = q;
	}
	printf("%ld\n", total);
	return (0);
}
