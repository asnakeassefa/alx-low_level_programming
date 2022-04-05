#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - func
 *
 * @width: para
 * @height: para
 * Return: int**
 */

int **alloc_grid(int width, int height)
{
	int **twod;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	twod = malloc(height * sizeof(int *));
	if (twod == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twod[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			if (twod[i] == NULL)
			{
				free(twod);
				return (NULL);
			}
			twod[i][j] = 0;
		}
	}
	return (twod);
}
