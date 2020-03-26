#include "holberton.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index.
 *@n: Number
 *@index: Index :v
 *Return: Value of a bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
