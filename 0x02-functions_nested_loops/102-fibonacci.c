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
	long int i, t1 = 1, t2 = 2, next;

	printf("%ld %ld\n", t1, t2);	
	next = t1 + t2;
	for (i = 3; i < 50; i++)
	{
		printf("%ld", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
