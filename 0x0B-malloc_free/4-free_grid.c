#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free allocated memory of 2-d array
 * @grid: pointer to pointer to the 2-d array
 * @height: number of rows of the array
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	return;
}
