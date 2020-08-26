#include "search_algos.h"
/**
 *min_val - find the minimum value
 *@val1: first value
 *@val2: second value
 *Return: The minimum value
 */
size_t min_val(size_t val1, size_t val2)
{
	if (val2 < val1)
		return (val2);
	return (val1);
}
/**
 *jump_search - search a value in a sorted array of ints using Jump search alg
 *@array: pointer to the first element of the array
 *@size: size of the array
 *@value: value to search
 *Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump;
	int ar_val;

	if (!array)
		return (-1);

	jump = sqrt(size);
	start = 0;
	end = jump;
	ar_val = array[start];
	printf("Value checked array[%i] = [%d]\n", (int)start, ar_val);
	while (end < size && ar_val < value)
	{
		if (array[end] >= value)
			break;
		start += jump;
		end += jump;
		ar_val = array[start];
		printf("Value checked array[%i] = [%d]\n", (int)start, ar_val);
	}
	if (start >= size || ar_val > value)
		return (-1);
	printf("Value found between indexes [%i] and [%d]\n", (int)start,
	       (int)end);
	while (start <= min_val(size - 1, end) && ar_val <= value)
	{
		ar_val = array[start];
		printf("Value checked array[%i] = [%d]\n", (int)start, ar_val);
		if (ar_val == value)
			return (start);
		start++;
	}
	return (-1);
}
