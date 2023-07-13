#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - simulation of calloc
 * @nmemb: No. of members
 * @size: size of each member
 * Return: mem created
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *c, i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		c[i] = 0;
    /*memset(c, 0, nmemb * size);*/
	return (c);
}
