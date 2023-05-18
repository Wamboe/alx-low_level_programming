#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: array to be freed
 * @height: height of the array
 * Return: n/a
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
