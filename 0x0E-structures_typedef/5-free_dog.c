#include "dog.h"

/**
 * free_dog - a function to free dogs
 * @d: a pointer at struct dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
	}
}