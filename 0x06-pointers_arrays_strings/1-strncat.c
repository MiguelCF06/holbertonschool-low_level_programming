#include "holberton.h"
/**
 * _strncat - Concatenates two strings with n bytes.
 * @dest: 2String.
 * @src: 1String.
 * @n: Bytes.
 * Return: Dest that is concatenate.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int conc;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (conc = 0; conc < n && src[conc] != '\0'; conc++, len++)
	{
		dest[len] = src[conc];
	}
	return (dest);
}
