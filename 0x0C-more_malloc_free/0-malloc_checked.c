#include <stdlib.h>
/**
 *  *malloc_checked - allocates memory using malloc
 *  @b: array being copied
 *  Return: new memory allocation
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(sizeof(b));
	if (i == NULL)
		exit(98);
	return (i);
}
