#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free a given struct
 *
 * @d: pointer to struct of type dog_t
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
