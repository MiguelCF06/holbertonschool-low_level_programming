#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function to each element of the array
 * @array: Array
 * @action: Function pointer
 * @size: size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
