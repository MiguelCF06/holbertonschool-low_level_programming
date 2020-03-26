#include "holberton.h"
/**
 *flip_bits - function that returns the number of bits you would need
 *to flip to get from one number to another.
 *@n: Number
 *@m: The another number we want that converts n
 *Return: Return number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n || m)
	{
		int last_bitsN = n & 1;
		int last_bitsM = m & 1;

		if (last_bitsN != last_bitsM)
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
