#include <stdlib.h>
#include <limits.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to be inserted
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (0);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (0);

	while (size != 0)
	{
		a[size] = c;
		size--;
	}

	return (a);
}
