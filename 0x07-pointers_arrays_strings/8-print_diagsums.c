#include "holberton.h"

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int sum;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if(a[x] == a[y])
				sum = a[x] + a[y];
		}
	}
}
