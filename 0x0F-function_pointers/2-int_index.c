#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Searches for an integer
 * @array: Array
 * @cmp: Function pointer
 * @size: Size of the array
 * Return: -1 or the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
