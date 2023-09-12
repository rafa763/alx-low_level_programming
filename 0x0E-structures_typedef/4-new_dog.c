#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int s1 = 0, s2 = 0;
	char *p1, *p2;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog || !name || !age || !owner)
		return (NULL);
	while (name[s1])
		s1++;
	while (owner[s2])
		s2++;
	p1 = malloc(sizeof(char) * (s1 + 1));
	if (!p1)
	{
		free(dog);
		return (NULL);
	}
	dog->name = p1;
	while (*name)
		*p1++ = *name++;
	*p1 = '\0';

	p2 = malloc(sizeof(char) * (s2 + 1));
	if (!p2)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = p2;
	while (*owner)
		*p2++ = *owner++;
	*p2 = '\0';
	dog->age = age;
	return (dog);
}
