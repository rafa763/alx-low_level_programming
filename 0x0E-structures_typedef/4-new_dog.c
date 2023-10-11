#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the created struct (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}

	n = name;
	o = owner;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
