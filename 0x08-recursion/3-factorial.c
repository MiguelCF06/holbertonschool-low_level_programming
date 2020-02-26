#include "holberton.h"
/**
 * factorial - Factorial of a given number
 * @n: Number
 * Return: -1, or 1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
