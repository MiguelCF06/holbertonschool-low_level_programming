#include "holberton.h"
/**
 * sizestr - know length of the string
 * Return: sizestr
 * @s: given pointer that has a String
 *
 */
int sizestr(char *s)
{
	if (*s != '\0')
		return (1 + sizestr(s + 1));
	return (0);
}
/**
 * knowpal - know if its palindrome
 * Return: 1 if its palindrome if not 0
 * @s: Given string that has a string
 * @size: Size of the string
 */
int knowpal(char *s, int size)
{
	if (*s != '\0')
	{
		if (*s == s[size])
		{
			return (1 * (knowpal(s + 1, size - 2)));
		}
		else
		{
			return (0);
		}
	}
	if (size <= 0)
		return (1);
	return (1);
}
/**
 * is_palindrome - The string is palindrome
 * Return: calls the function knowpal
 * @s: Given pointer with a string
 *
 */
int is_palindrome(char *s)
{
	int x = sizestr(s) - 1;

	return (knowpal(s, x));
}
