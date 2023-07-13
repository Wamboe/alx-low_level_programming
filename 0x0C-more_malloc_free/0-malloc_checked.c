#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - functions that allocates memory
 * @b: amount of memory to be allocated
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *i = malloc(sizeof(unsigned int) * b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
