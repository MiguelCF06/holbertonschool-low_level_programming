#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid.
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int count;

	if (grid == NULL || height <= 0)
		return;
	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);
}
