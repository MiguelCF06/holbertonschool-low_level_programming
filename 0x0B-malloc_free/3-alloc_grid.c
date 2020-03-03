#include "holberton.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	long unsigned int *matriz;
	int *matx2;

	if (width == 0 || height == 0)
		return (NULL);
	if (width < 0 || height < 0)
		return (NULL);
	
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			matriz = matriz[x][y];
		}
	}
	matx2 = malloc(sizeof(int) * *matriz);
	
	return (matx2);
}
