#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print numbers.
 * @n: Integer as a number
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
		}
	}
	else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
		}
	}
}
