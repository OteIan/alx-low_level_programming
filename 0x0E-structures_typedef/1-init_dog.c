#include "dog.h"

/**
 * init_dog - initializes a variable of typr struct dog
 * @d: pointer to structure
 * @name: pointer to name of owner
 * @age: age of owner
 * @owner: pointer to owner of dog
 * Return: always NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		Return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
