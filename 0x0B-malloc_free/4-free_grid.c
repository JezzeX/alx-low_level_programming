#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - function to free memory from grid
  * @grid: grid to free
  * @height: height
  */

void free_grid(int **grid, ont height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}

	free(grid);
}
