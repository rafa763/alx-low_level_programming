#include <stdio.h>
/**
 * main - print number of arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Int (0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
