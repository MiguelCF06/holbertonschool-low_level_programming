#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 *
 * Return: Pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *patron = needle;
		while (*patron == *haystack && *patron != '\0' && *haystack != '\0')
		{
			haystack++;
			patron++;
		}
		if (*patron == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return (NULL);
}
