#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees new dog from memory
 * @d: object dog
 * Return: n/a
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

