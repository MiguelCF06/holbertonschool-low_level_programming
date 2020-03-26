#include "holberton.h"
/**
 *set_bit - function that sets the value of a bit to 1 at a given index.
 *@n: Number
 *@index: Index :v
 *Return: Value of a bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	val = (1 << index);
	*n = *n | val;
	return (1);
}
