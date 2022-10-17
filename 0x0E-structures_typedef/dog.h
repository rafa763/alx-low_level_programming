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
/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
