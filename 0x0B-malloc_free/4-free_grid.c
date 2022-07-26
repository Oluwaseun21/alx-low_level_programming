#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 * your alloc_grid function
 * @grid: 2D arrays of integers
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
{
	free(grid[i]);
}
	free(grid);
}
