#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array in a range
 * @min: first num in array
 * @max: last num in array
 * Return: array created else null
*/
int *array_range(int min, int max)
{
	int *i, j = 0;

	if (min > max)
		return (NULL);

	i = malloc((max - min + 1) * sizeof(int));
	if (i == NULL)
		return (NULL);

	for ( ; min != max; min++)
	{
		i[j] = min;
		j++;
	}

	return (i);
}
