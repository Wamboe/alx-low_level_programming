#include <stdio.h>
#include "dog.h"

#ifndef NILL
#define NIL "(nil)"

/**
 * print_dog -  prints a struct dog
 * @d: variable d of type dog
 * Return: n/a
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		(*d).name = NIL;
	printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: %s\n", NIL);
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		d->owner = NIL;
	printf("Owner: %s\n", d->owner);
}
#endif
