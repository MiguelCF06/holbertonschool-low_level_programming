#include "holberton.h"
/**
 * _memset - Fills the memory with a constant byte
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: Constant byte
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
