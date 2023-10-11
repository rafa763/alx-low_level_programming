#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - copy a string that is given as a parameter
 * @str: pointer of the given string to be copied
 *
 * Return: (char) pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	char *p, *s;
	int size;

	if (!str)
		return (NULL);

	size = 0;
	while (str[size])
		size++;

	s = malloc((sizeof(char) * size) + 1);

	if (!s)
		return (NULL);

	p = s;
	while (*str)
	{
		*s = *str;
		s++;
		str++;
	}

	*s = '\0';

	return (p);
}

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
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = _strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
