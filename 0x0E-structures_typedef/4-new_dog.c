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
	int s1= 0, s2 = 0;
	char *n, *o, *p1, *p2;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	while(name[s1])
		s1++;
	while(owner[s2])
		s2++;
	
	n = malloc(sizeof(s1) + 1);
	p1 = n;
	if (!n)
		return (NULL);
	while (*name)
		*n++ = *name++;
	o = malloc(sizeof(s2) + 1);
	p2 = o;
	while (*owner)
		*o++ = *owner++;
	dog->name = p1;
	dog->age = age;
	dog->owner = p2;
	return (dog);
}
