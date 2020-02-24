#include "holberton.h"
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: String
 * @accept: Bytes letters
 *
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{

	int i = 0;
	int b;

	while (*s != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
		if (s[i] == accept[b])
			return (s);
		}
		s++;
	}
	return ('\0');
}
