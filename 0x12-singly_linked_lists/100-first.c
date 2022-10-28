#include "lists.h"
#include <stdio.h>
/**
 * print_before_main - print a string before main executes
 *
 * Return void
 */
void print_before_main(void) __attribute__ ((constructor));
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
