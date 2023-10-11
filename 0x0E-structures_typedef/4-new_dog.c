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
	int s1 = 0, s2 = 0;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	while (name[s1])
		s1++;
	while (owner[s2])
		s2++;

	n = (char *)malloc(sizeof(char) * (s1 + 1));
	if (!n)
	{
		free(dog);
		return (NULL);
	}
	dog->name = n;

	o = (char *)malloc(sizeof(char) * (s2 + 1));
	if (!o)
	{
		free(o);
		free(dog->name);
		return (NULL);
	}
	dog->owner = o;
	dog->age = age;

	while (*owner)
		*o++ = *owner++;
	*o = '\0';
	while (*name)
		*n++ = *name++;
	*n = '\0';

	return (dog);
}
