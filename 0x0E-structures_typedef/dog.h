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
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
