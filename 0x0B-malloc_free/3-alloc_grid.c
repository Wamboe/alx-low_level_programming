#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of the dimentional arrays
 * @height: height of the array
 * Return: the array or null on failiure
 */
int **alloc_grid(int width, int height)
{
	int **i, x, y;
	(void)x;
	(void)y;

	if (width == 0 || height == 0)
		return (0);

	i = malloc(sizeof(int *) * height);
	if (i == NULL)
		return (0);

	for (x = 0; x < height; x++)
	{
		i[x] = malloc(sizeof(int) * width);
		if (i[x] == NULL)
		{
			for (; x >= 0; x--)
				free(i[x]);
			free(i);
			return (0);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			i[x][y] = 0;
		}
	}

	return (i);
}
