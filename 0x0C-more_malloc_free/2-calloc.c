#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *i;
	if (nmemb == 0  || size == 0)
		 return(0);

	i = malloc(sizeof(unsigned int) * (size + 1));
	if (i == NULL)
		return (0);
	memset(i, 0, sizeof(unsigned int) * (size + 1));
	return (i);
}
