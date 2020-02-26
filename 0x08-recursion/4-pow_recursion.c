#include "holberton.h"
/**
 * _pow_recursion - Value of x raised to the power of y
 * @x: Number
 * @y: Number to pow
 * Return: -1, or 1 or pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
