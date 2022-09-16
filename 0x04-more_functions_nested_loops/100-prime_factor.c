#include <stdio.h>
#include <math.h>

int main(void)
{
	int n = 612852475143, i, c = 0;

	while (n % 2 == 0)
	{
		n = n/2;
		c = 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (i > c)
				c = n;
		}
	}

	printf("%d\n", c);
	return (0);
}
