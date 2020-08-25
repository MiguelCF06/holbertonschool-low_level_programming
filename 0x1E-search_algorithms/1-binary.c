#include "search_algos.h"
/**
 *print_search - print the array
 *@array: array to print
 *@size: size of the array
 */
void print_search(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}

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
	size_t r = size - 1;
	size_t m;

	if (!array)
		return (-1);

	print_search(array + l, r + 1 - l);
	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
		print_search(array + l, r + 1 - l);
	}
	return (-1);
}
