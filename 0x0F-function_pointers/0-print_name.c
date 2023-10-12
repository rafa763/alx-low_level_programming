#include "function_pointers.h"

/**
 * print_name -  a function that prints a name
 * @name: the name to be printed
 * @f: pointer to the function that will print @name
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}