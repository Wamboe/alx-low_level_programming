#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the memory to be alocated
 * @c: char to be assigned
 * Return: char creted or null
*/
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ch = malloc(size);

	if (ch == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ch[i] = c;
		i++;
	}

	return (ch);
	free(ch);
}
