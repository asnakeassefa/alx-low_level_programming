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
	int i = 0, j = 0;

	while (*grid[i] != NULL)
		i++;

	for (j = 0; j < i; j++)
	{
		free(grid[j]);
	}
}