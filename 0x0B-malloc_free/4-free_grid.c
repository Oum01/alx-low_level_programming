#include "main.h"
/**
 * free_grid -  frees a 2D grid previously created by your alloc_grid function.
 * @grid: The 2D array of integers to be freed.
 * @height: height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
