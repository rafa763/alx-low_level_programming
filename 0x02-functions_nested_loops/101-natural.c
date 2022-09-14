#include <stdio.h>
/**
 * main - entry point
 *
 * description: 'sum numbers that are multiples of 3, 5'
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0, num = 1023;

	while (num != 0)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
		num--;
	}
	printf("%d\n", sum);
	return (0);
}
