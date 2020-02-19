#include "holberton.h"
/**
 * _strcpy - Copy a string of a pointer to another pointer.
 * @dest: Pointer 2.
 * @src: Pointer 1 with the elements we want to copy to pointer 2.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int copy;

	for (copy = 0; src[copy] != '\0'; copy++)
	{
		dest[copy] = src[copy];
	}
	dest[copy] = src[copy];
	return (dest);
}
