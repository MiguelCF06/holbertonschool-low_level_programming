#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 *
 * Return: Pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int b;

	while (*haystack != '\0')
	{
		char *beginning = haystack;

		for (b = 0; needle[b] == haystack[b] && *needle != '\0'; b++)
		{
			if (haystack[i] == needle[b])
				return (beginning);
		}
		haystack++;
	}
	return ('\0');
}
