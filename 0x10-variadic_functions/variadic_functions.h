#ifndef VARARGS_H
#define VARARGS_H
#include <stdarg.h>

/**
 * struct fn_control - struct type defining our print
 * @specifier: symbol representing the data type
 * @printer: function pointer that prints
 *             a data type according to the specifier
 */
typedef struct fn_control
{
	char specifier;
	void (*printer)(va_list ap);
} fn_control;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_string(va_list ap);
void print_float(va_list ap);
void print_int(va_list ap);
void print_char(va_list ap);

#endif /* VARARGS_H */
