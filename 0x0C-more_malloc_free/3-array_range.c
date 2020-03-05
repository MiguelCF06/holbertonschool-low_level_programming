#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: Minimum number
 * @max: Maximum number
 * Return: Null or the created pointer.
 */
int *array_range(int min, int max)
{
	int x;
	int *createar = NULL;

	if (min > max)
		return (NULL);

	createar = malloc(sizeof(int) * (max - min + 1));

	if (createar == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
	{
		createar[x] = min;
	}
	return (createar);
}
