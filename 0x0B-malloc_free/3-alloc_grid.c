#include <stdlib.h>

/**
 * alloc_grid - allocates a multimentional array
 * @width: width of the array
 * @height: height of the array
 * Return: array initialized in 0s
*/
int **alloc_grid(int width, int height)
{
	int i, j, **ma;

	if (width < 1 || height < 1)
		return (NULL);

	ma = (int **)malloc(height * sizeof(int *));

	if (ma == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ma[i] = (int *)calloc(width, sizeof(int));
		if (ma[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ma[j]);
			}
			free(ma);
			return (NULL);
		}
	}
	return (ma);
    free(ma);
}
