#ifndef DOG_H

#define DOG_H
/**
 * struct dog - hold dog info
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Description: assign name, age, owner to dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
