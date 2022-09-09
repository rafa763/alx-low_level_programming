#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* description: 'print postive or negative'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	(n > 0) ? printf("is postive\n") : (n < 0) ? printf("is negative\n") : printf("is zero\n");
	return (0);
}
