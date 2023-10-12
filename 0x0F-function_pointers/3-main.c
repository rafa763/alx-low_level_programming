#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that performs simple operations.
 *	usage: calc num1 operator num2
 *	operators: + - * / %
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || !argv[2])
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == (int)'/' || *argv[2] == (int)'%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
