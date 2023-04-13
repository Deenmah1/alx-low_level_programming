#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dim. grid
 * @grid: 2 dim. grid
 * @height: height dim. of a grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid[b]);
}
