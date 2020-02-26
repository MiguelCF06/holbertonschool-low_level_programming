#include "holberton.h"
/**
 * primo - know if is prime
 * Return: if its prime 1
 * @n: Given number
 * @m: iterator
 */
int primo(int n, int m)
{
	if (n <= 1)
		return (0);
	if (m == n)
		return (1);
	if (n % m == 0)
		return (0);
	else
		return (primo(n, m + 1));
}
/**
 * is_prime_number - know if its prime
 * Return: function help that is the square root
 * @n: Number
 */
int is_prime_number(int n)
{
	return (primo(n, 2));
}
