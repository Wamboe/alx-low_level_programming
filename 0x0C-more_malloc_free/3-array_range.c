#include <stdlib.h>
#include <stddef.h>

/**
 *  *array_range - creates an array of integers
 *  @min: min number
 *  @max: max number
 *  Return: array created
 */
int *array_range(int min, int max)
{
	int *i, x, y = 0;

	if (min > max)
		return (0);

	i = malloc((max + 1) * sizeof(int));
	if (i == NULL)
		return (0);
	for (x = min; x <= max; x++)
	{
		i[y] = x;
		y++;
	}
	return (i);
}
