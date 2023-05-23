#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes dog obj
 * @d: initializing d object
 * @name: memner name
 * @age: memner age
 * @owner: member owner
 * Descrition: init dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}

