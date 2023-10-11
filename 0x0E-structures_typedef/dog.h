#ifndef DOG_H
#define DOG_H

/**
 * struct dog - hold information of a dog
 * @name: name of the dog
 * @owner: owenr of the dog
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
