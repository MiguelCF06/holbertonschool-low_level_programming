#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: String to duplicate
 * Return: Null or the duplicate.
 */
char *_strdup(char *str)
{
	int count = 0;
	int length = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		length++;
		count++;
	}
	count = 0;
	dup = malloc(sizeof(char) * (length + 1));
	while (count < (length + 1))
	{
		dup[count] = str[count];
		count++;
	}
	dup[count] = '\0';
	if (str == NULL)
		return (NULL);
	return (dup);
}
