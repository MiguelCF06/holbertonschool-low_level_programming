#include "search_algos.h"
/**
 *binary_search - searches for a value in a sorted array of integers using the
 *Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t i;
	size_t r = size - 1;
	size_t m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; ++i)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
