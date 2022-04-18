#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **twod;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	twod = malloc(height * sizeof(int *));
	if (twod == NULL)
	{
		free(twod);
		return (NULL);
	}

	if (twod == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twod[i] = malloc(width * sizeof(int));
		if (twod[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(twod[i]);
			free(twod);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twod[i][j] = 0;
		}
	}
	return (twod);
}

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	free_grid(grid, 4);
	return (0);
}
