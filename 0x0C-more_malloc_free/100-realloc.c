#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocate a space of memory
 * @old_size: Principal size the old one
 * @new_size: New size of the ptr
 * @ptr: Pointer
 * Return: Null or the reallocated pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	else
	{
		if (new_size == old_size)
		{
			return (ptr);
		}
		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			return (ptr);
		}
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
