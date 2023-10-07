#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number whose square to be found
 *
 * Return: natural square of @n (int)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 1));
}

/**
 * _sqrt - guess random numbers and mul. with itself to find root
 * @n: number to find root for
 * @guess: the starting number to guess from
 *
 * Return: -1 if no root found else returns root
 */

int _sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (_sqrt(n, guess + 1));
}
