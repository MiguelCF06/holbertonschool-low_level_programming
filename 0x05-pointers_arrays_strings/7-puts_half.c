#include "holberton.h"
/**
 * puts_half - Print the half of the string.
 * @str: String.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len;
	int rev;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (rev = ((len + 1) / 2); rev <= len; rev++)
	{
		_putchar(str[rev]);
	}
	_putchar('\n');
}
