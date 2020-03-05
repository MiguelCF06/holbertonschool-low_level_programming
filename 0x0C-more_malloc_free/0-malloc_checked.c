#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory.
 * @b: An intger
 * Return: Null or the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *alloc = NULL;

	alloc = malloc(b);

	if (alloc == NULL)
		exit(98);

	return (alloc);
}
