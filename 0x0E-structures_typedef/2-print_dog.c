#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog struct params
 *
 * @d: pointer to struct
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	(d->age) ? printf("Age: %f\n", d->age) : printf("Age: %f\n", .0f);
	(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
