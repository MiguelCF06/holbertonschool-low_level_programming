#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array.
 * @nmemb: Num memory bytes of array
 * @size: Size of char
 * Return: Null or the allocate memory of the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *allocmem = NULL;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allocmem = malloc(sizeof(unsigned int) * nmemb);
	if (allocmem == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb; x++)
	{
		allocmem[x] = 0;
	}
	return (allocmem);
}
