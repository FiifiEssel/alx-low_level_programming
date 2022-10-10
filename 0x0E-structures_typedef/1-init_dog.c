#include <dog.h>

/**
 * init_dog- sets initializations for struct dog
 * @d:struct dog
 * @name: name element of our dog structure
 * @age: age element of my dog structur
 * @owner: name of the owner of the dog
 *
 * Return: shall return 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

