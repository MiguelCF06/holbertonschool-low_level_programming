#include "search_algos.h"
/**
 *interpolation_search - search for a value in a sorted array of ints
 * using the interpolation search algo
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high] - array[low]));
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
