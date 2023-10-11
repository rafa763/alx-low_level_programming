#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
