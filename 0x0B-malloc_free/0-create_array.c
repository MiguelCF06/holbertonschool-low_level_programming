#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of chars.
 * @size: Size cantidad dde veces
 * @c: The char
 * Return: Null or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		ar[count] = c;

	return (ar);
}
