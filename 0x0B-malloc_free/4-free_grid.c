#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - funct
 *
 * @grid: is para
 * @height: is para2
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}

