#include <stdio.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The address of the two-dimensional grid.
 * @height: The height of the grid.
 * 
 * Return: 
 */

void free_grid(int **grid, int height);
{

	int i;

	if (grid == NULL || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid)
}
