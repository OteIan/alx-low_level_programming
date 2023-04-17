#include "dog.h"

/**
 * init_dog - initializes a variable of typr struct dog
 * @d: pointer
 * @name: name of user
 * @age: age of user
 * @owner: owner of file
 * Return: always NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
