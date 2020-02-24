#include "holberton.h"
/**
 * _memcpy - copy the memory area
 * @dest: Memory area that we want to get the copy of src
 * @n: the size of the memory to print
 * @src: Memory area original
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
