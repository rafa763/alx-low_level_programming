#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print n times table
 *
 * @n: number of tables
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					printf("%d", k);
				else if (k >= 0 && k <= 9)
					printf("   %d", k);
				else if (k >= 10 && k < 100)
					printf("  %d", k);
				else
					printf(" %d", k);
				if (j != n && n != 0)
					printf(",");

			}
			printf("\n");
		}
	}
}
