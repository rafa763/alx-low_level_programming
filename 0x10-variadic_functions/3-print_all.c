#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *separator = "";

	fn_control print_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		unsigned int j = 0;

		while (print_list[j].specifier)
		{
			if (print_list[j].specifier == format[i])
			{
				printf("%s", separator);
				print_list[j].printer(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(ap);

	printf("\n");
}


/**
 * print_char - print a char
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print an integer
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (!*str)
		str = "(nil)";
	printf("%s", str);
}
