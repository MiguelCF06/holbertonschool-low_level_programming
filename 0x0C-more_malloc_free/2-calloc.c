#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array.
 * @nmemb: Num memory bytes
 * @size: Size
 * Return: Null or the allocate memory of the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *allocmem = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocmem = malloc(sizeof(unsigned int) * (nmemb * size));

		return (allocmem);
}
