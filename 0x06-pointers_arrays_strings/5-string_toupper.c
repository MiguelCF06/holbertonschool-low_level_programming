#include "holberton.h"
/**
 * string_toupper - Changes letter of a string to uppercase.
 * @s: String.
 * Return: S that is the string.
 */
char *string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0' ; count++)
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}
	}
	return (s);
}
