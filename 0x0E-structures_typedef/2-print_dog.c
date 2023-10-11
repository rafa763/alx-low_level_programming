#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", (d->name) ? (d->name) : "(nil)");
	printf("Age: %.6f\n", (d->age) ? (d->age) : 0);
	printf("Owner: %s\n", (d->owner) ? (d->owner) : "(nil)");
}
