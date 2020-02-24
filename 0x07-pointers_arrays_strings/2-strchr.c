#include "holberton.h"
/**
 * _strchr - Function that locates a char in a string.
 * @s: String
 * @c: Char
 * Return: S or Null.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (s[i] == c)
			return (s);
		s++;
	}
	return ('\0');
}
