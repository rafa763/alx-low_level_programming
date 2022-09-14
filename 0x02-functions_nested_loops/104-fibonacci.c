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
	unsigned long int i, t1 = 1, t2 = 2, next;

	printf("%lu, %lu, ", t1, t2);
	next = t1 + t2;
	for (i = 3; i <= 98; i++)
	{
		printf("%lu", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
