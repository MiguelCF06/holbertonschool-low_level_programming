#include "holberton.h"
/**
 * _strlen_recursion - Return the length of the string
 * @s: String
 * Return: Strlen
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
