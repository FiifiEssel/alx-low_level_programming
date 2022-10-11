#ifndef DOG_H
#define DOG_H

/**
 * dog_t- an alias for the structure dog
 */
typedef struct dog dog_t;
/**
 * struct dog- the definition type for the structur
 * @name: first element of structur
 * @age: second element of structure
 * @owner: third element of structur
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif/*dog.h*/
