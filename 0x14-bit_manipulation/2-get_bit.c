#include "holberton.h"
/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: Number
 *@index: Index :v
 *Return: Value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	val = ((n >> index) & 1);

	return (val);
}
