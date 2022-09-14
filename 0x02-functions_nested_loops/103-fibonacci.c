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
	long int a = 1, b = 1, total = 0;
       while (a < 4000000)
       {
       		if (a % 2 == 0)
		{
			total += a;
		}
		a = b;
		b = a + b;
       }
       printf("%ld\n", total);
	return (0);
}
