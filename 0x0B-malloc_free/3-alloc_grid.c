#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - initializes a dynamically allocated
 * 2-dimensional array to 0.
 * @width: column of the array
 * @height: row of the array
 * Return: a pointer to a pointer to the 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
