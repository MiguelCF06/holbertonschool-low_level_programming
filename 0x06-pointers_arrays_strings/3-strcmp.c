#include "holberton.h"
/**
 * _strcmp - Compare two strings..
 * @s1: String 1.
 * @s2: String 2.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 > *s2)
		return ((int)*s1 - *s2);
	else
		return ((int)*s1 - *s2);
}
