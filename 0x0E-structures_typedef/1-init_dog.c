#include "dog.h"
/**
 * init_dogi - initialize dog struct
 *
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
