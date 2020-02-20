#include "holberton.h"
/**
 * _strcat - Concatenates two string.
 * @dest: 2 string.
 * @src: 1 string.
 * Return: dest that is the concatenaation.
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int conc;

	for (len = 0; *(dest + len) != '\0'; len++)
	{
	}
	for  (conc = 0; *(src + conc) != '\0'; conc++, len++)
	{
		*(dest + len) = *(src + conc);
	}
	return (dest);
}
