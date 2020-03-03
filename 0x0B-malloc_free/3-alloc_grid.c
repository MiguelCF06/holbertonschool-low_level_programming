#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Function to allocate the arrays.
 * @width: size 1
 * @height: size 2
 * Return: Pointer to a 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **matx2;

	if (width <= 0 || height <= 0)
		return (NULL);

	matx2 = malloc(sizeof(int *) * height);

	if (matx2 == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		matx2[x] = malloc(sizeof(int) * width);
		if (matx2[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(matx2[y]);
		free(matx2);
		return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			matx2[x][y] = 0;
		}
	}
	return (matx2);
}
