#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 *  *new_dog - creates a new dog.
 *  @name: name of dog
 *  @age: age of dog
 *  @owner: owner of dog
 *  Return: new dog if successfull
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int ln = strlen(name) + 1, lo = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (0);
	}

	d->name = malloc(ln);
	if (!d->name)
	{
		free(d);
		return (0);
	}

	d->owner = malloc(lo);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (0);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);


}
