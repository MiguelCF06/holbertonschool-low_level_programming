#include "holberton.h"
/**
 * help - Help to multiplies
 * Return: help
 * @n: Given number
 * @m: iterator
 */
int help(int n, int m)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	else
		return (help(n, m + 1));
}
/**
 * _sqrt_recursion - Square root of a given number
 * Return: function help that is the square root
 * @n: Number
 */
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}
