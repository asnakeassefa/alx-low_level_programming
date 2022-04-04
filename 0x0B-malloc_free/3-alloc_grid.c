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
	int i = 0;

	twod = malloc(height * sizeof(int));
	if (twod == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twod[i] = malloc(width * sizeof(int));

		if (twod[i] == NULL)
			return (NULL);
	}
	return (twod);
}
