#include "main.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to free my dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
