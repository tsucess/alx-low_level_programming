#include <stdlib.h>
#include "main.h"
/**
 * free_grid - fuction that free dynamic memory allocated
 * for grid
 * @grid: grid parameter
 * @height: row parameter
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
