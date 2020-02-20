#include "holberton.h"
/**
 * reverse_array - Reverse a string of integers.
 * @a: Array.
 * @n: Number of elements.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int count;

	for (count = 0; count < n; count++, n--)
	{
		temp = a[count];
		a[count] = a[n - 1];
		a[n - 1] = temp;
	}
}
