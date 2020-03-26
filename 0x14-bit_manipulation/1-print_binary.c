#include "holberton.h"
/**
 *print_binary - prints the binary representation of a number.
 *@n: Number
 *Return: The number in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int cp;
	int idx = 0;

	cp = n;

	while ((cp >>= 1) > 0)
	{
		idx++;
	}
	while (idx >= 0)
	{
		if ((n >> idx--) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
