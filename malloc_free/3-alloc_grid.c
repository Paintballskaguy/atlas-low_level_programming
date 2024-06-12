#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

/**
 * alloc_grid - func that returns a pointer to a 2
 * dimensional array of int.
 * @width: width of array
 * @height: height of array
 * 
 * Return: 
 */

int **alloc_grid(int width, int height)
{
	int grid;
	int i;
	int x;
	int **I;
	int *G;


	if ((width <= NULL) || (height <= NULL))
		return (NULL);

	grid = malloc(height * (**I));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(*G) * width);
		if (grid[i] == NULL)
		{
			for (x = 0; x < i; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[i][x] = 0;
	}

	return (grid);
}
