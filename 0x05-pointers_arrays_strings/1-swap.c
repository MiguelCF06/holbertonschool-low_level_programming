#include "holberton.h"

void swap_int(int *a, int *b)
{
	int swapp;

	swapp = *a;
	*a = *b;
	*b = swapp;

}
